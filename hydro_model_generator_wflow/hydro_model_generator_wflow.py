# -*- coding: utf-8 -*-

"""Main module."""

import os
import shutil
import zipfile
from math import sqrt
import subprocess
import shutil

import fiona
import geojson
import numpy as np
import rasterio
import requests
import shapely.geometry as sg
from pyproj import Geod
from rasterio import warp
from shapely.ops import unary_union
import isodate
from pathlib import Path
import pcraster as pcr
from wflow import create_grid, ogr2ogr, static_maps, wflowtools_lib
import hydroengine
from hydro_model_builder.model_generator import ModelGenerator
from flask import Flask

app = Flask(__name__)


@app.route('/')
def root():
    return 'Visit <a href="https://github.com/openearth/hydro-model-generator-wflow">https://github.com/openearth/hydro-model-generator-wflow</a> for more information ...'


@app.errorhandler(500)
def server_error(e):
    # Log the error and stacktrace.
    logging.exception('An error occurred during a request.')
    return 'An internal error occurred.', 500


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=8080, debug=True)


def getpath(general_options, var):
    engine = general_options["hydro-engine"]["datasets"]
    if "local" in general_options:
        local = general_options["local"]["datasets"]
    else:
        local = []
    # assumes variable is only defined once
    longlist = engine + local
    for d in longlist:
        if d["variable"] == var:
            return d["path"]
    raise ValueError(f"Variable {var} not found in input")



class ModelGeneratorWflow(ModelGenerator):
    def __init__(self):
        super(ModelGeneratorWflow, self).__init__()

    def generate_model(self, general_options, options):
        """
        Convert all files into a model
        TODO: implement logic, options will be an instance of ModelGeneratorsOptions class

        :return:
        """
        #
        build_model(
            general_options["region"],
            options["cellsize"],
            options["concept"],
            options["timestep"],
            options["case"]["name"],
            options["case"]["template"],
            options["case"]["path"],
            general_options,
        )

    def get_name(self):
        return "wflow"


SERVER_URL = "http://hydro-engine.appspot.com"


def build_model(
    geojson_path,
    cellsize,
    model,
    timestep_iso,
    name,
    case_template,
    case_path,
    general_options,
):
    """Prepare a simple WFlow model, anywhere, based on global datasets."""

    timestep =isodate.parse_duration(timestep_iso)
    dem_path = getpath(general_options, "dem")
    river_path = getpath(general_options, "river")
    path_catchment = getpath(general_options, "catchments")
    dir_lai = str(Path(getpath(general_options, "LAI01")).parent)

    # fill in the dependent defaults
    if name is None:
        name = "wflow_{}_case".format(model)
    if case_template is None:
        case_template = "wflow_{}_template".format(model)
    if model == "hbv":
        if timestep.total_seconds() == 3600:
            case_template = "wflow_{}_hourly_template".format(model)
        elif timestep.total_seconds() == 86400:
            case_template = "wflow_{}_daily_template".format(model)
        else:
            raise ValueError("For HBV only 1 hour or 1 day timesteps are supported")

    # assumes it is in decimal degrees, see Geod
    case = os.path.join(case_path, name)

    # start by making case an exact copy of the template
    copycase(case_template, case)

    # create folder structure for data folder
    for d in ["catchments", "dem", "rivers"]:
        dir_data = os.path.join(case, "data", d)
        ensure_dir_exists(dir_data)

    # create grid
    path_log = "wtools_create_grid.log"
    dir_mask = os.path.join(case, "mask")
    Path(dir_mask).mkdir(parents=True, exist_ok=True)
    # TODO get from data
    projection = "EPSG:4326"

    create_grid_extent = path_catchment
    mask_tif = os.path.join(dir_mask, "mask.tif")
    mask_map = os.path.join(dir_mask, "mask.map")
    # make asc to get a PRJ which GDAL is not adding to the map
    mask_asc = os.path.join(dir_mask, "mask.asc")
    shutil.copy2(dem_path, mask_tif)
    subprocess.call(["gdal_translate", "-ot", "Float32", "-of", "PCRaster", mask_tif, mask_map])
    subprocess.call(["gdal_translate", "-ot", "Float32", "-of", "AAIGrid", mask_tif, mask_asc])
    # create_grid.main(
    #     path_log,
    #     dir_mask,
    #     create_grid_extent,
    #     projection,
    #     cellsize,
    #     locationid=name,
    #     snap=True,
    # )
    mask_tif = os.path.join(dir_mask, "mask.tif")

    with rasterio.open(mask_tif) as ds:
        bbox = ds.bounds

    # create static maps
    dir_dest = os.path.join(case, "staticmaps")
    # use custom inifile, default high res ldd takes too long
    path_inifile = os.path.join(case, "data/staticmaps.ini")

    # create default folder structure for running wflow
    dir_inmaps = os.path.join(case, "inmaps")
    ensure_dir_exists(dir_inmaps)
    dir_instate = os.path.join(case, "instate")
    ensure_dir_exists(dir_instate)
    for d in ["instate", "intbl", "intss", "outmaps", "outstate", "outsum", "runinfo"]:
        dir_run = os.path.join(case, "run_default", d)
        ensure_dir_exists(dir_run)

    # this is for coastal catchments only, if it is not coastal and no outlets
    # are found, then it will just be the pit of the ldd
    outlets = outlets_coords(path_catchment, river_path)

    static_maps.main(
        dir_mask,
        dir_dest,
        path_inifile,
        dem_path,
        river_path,
        path_catchment,
        lai=dir_lai,
        other_maps=[],
        outlets=outlets,
    )


def copycase(srccase, dstcase):
    """Set the case to a copy of the template case"""
    if os.path.isdir(dstcase):
        shutil.rmtree(dstcase)
    shutil.copytree(srccase, dstcase)


def ensure_dir_exists(path_dir):
    if not os.path.exists(path_dir):
        os.makedirs(path_dir)


def outlets_coords(path_catchment, river_path):
    """Get an array of X and list of Y coordinates of the outlets."""

    outlets = find_outlets(path_catchment, river_path, max_dist=0.02)
    outlets = sg.mapping(outlets)["coordinates"]

    outlets_x = np.array([c[0] for c in outlets])
    outlets_y = np.array([c[1] for c in outlets])
    return outlets_x, outlets_y


def ne_coastal_zone(scale="medium", buffer=0.1):
    """Get a MultiPolygon of the coastal zone from Natural Earth"""

    scales = {"large": "10m", "medium": "50m", "small": "110m"}
    res = scales[scale]
    coastline_url = (
        "https://raw.githubusercontent.com/nvkelso/"
        "natural-earth-vector/master/geojson/ne_{}_coastline.geojson".format(res)
    )
    r = requests.get(coastline_url)
    r.raise_for_status()
    js = r.json()

    coasts = []

    for f in js["features"]:
        linestring = sg.shape(f["geometry"])
        polygon = linestring.buffer(buffer)
        coasts.append(polygon)

    # add an extra buffer of 0, to create a valid geometry
    return sg.MultiPolygon(coasts).buffer(0.0)


def find_outlets(catch_path, riv_path, max_dist=0.02):
    """Find outlets by seeing how close rivers end to
    coastal catchment boundaries."""
    coastal_catch = catchment_coast_boundaries(catch_path)
    rivnodes = river_ends(riv_path)

    outlets = []
    # if it is empty, all distances are 0
    if not coastal_catch.is_empty:
        for p in rivnodes:
            dist = p.distance(coastal_catch)
            if dist <= max_dist:
                outlets.append(p)
    return sg.MultiPoint(outlets)


def catchment_boundaries(catch_path):
    """Collect all catchment boundaries into a MultiLineString"""
    geoms = []
    with fiona.open(catch_path) as c:
        for f in c:
            g = sg.shape(f["geometry"]).boundary
            geoms.append(g)

    return unary_union(geoms)


def catchment_coast_boundaries(catch_path, coastal_zone=None):
    """Collect all coastal catchment boundaries into a MultiLineString"""
    catchment_boundary = catchment_boundaries(catch_path)
    if coastal_zone is None:
        coastal_zone = ne_coastal_zone()
    return catchment_boundary.intersection(coastal_zone)


def river_ends(riv_path):
    """Collect the ends of river LineStrings into a MultiPoint"""
    # the hydrosheds rivers are split into many small segments
    # so to get the true ends, we should eliminate the ends
    # that connect to other ends
    mp0 = []  # line start nodes
    mp1 = []  # line end nodes
    with fiona.open(riv_path) as c:
        for f in c:
            coords = f["geometry"]["coordinates"]
            mp0.append(sg.Point(coords[0]))
            mp1.append(sg.Point(coords[-1]))

    mp0 = sg.MultiPoint(mp0)
    mp1 = sg.MultiPoint(mp1)
    # get rid of the connecting inner nodes
    return mp0.symmetric_difference(mp1)
