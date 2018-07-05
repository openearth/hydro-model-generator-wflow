# -*- coding: utf-8 -*-

"""Main module."""

import os
import shutil
import zipfile
from math import sqrt

import fiona
import geojson
import numpy as np
import rasterio
import requests
import shapely.geometry as sg
from pyproj import Geod
from rasterio import warp
from shapely.ops import unary_union

import pcraster as pcr
from wflow import create_grid, ogr2ogr, static_maps, wflowtools_lib
import hydroengine
from hydro_model_builder.model_generator import ModelGenerator


class ModelGeneratorWflow(ModelGenerator):
    def __init__(self):
        super(ModelGeneratorWflow, self).__init__()

        """
        Add a template path to a model object

        :return:
        """
        # TODO Think about how to retrieve a path for the template. Hard coded?
        self.template_path = "."
        # TODO Retrieve template config.ini for an options specified one
        self.template_config = os.path.join(self.template_path, "config.ini")

    def generate_model(self, options):
        """
        Convert all files into a model
        TODO: implement logic, options will be an instance of ModelGeneratorsOptions class

        :return:
        """
        #
        pass

    def generate_config_files(self):
        """
        Generate one or multiple configuration or setting files for the model

        :return:
        """

    def get_name(self):
        return 'wflow'

SERVER_URL = "http://hydro-engine.appspot.com"


def build_model(
    geojson_path,
    cellsize,
    model,
    timestep,
    name,
    case_template,
    case_path,
    fews,
    fews_config_path,
    dem_path,
    river_path,
):
    """Prepare a simple WFlow model, anywhere, based on global datasets."""

    # fill in the dependent defaults
    if name is None:
        name = "wflow_{}_case".format(model)
    if case_template is None:
        case_template = "wflow_{}_template".format(model)
    if model == "hbv":
        if timestep == "hourly":
            case_template = "wflow_{}_hourly_template".format(model)
        else:
            case_template = "wflow_{}_daily_template".format(model)

    # assumes it is in decimal degrees, see Geod
    case = os.path.join(case_path, name)
    path_catchment = os.path.join(case, "data/catchments/catchments.geojson")

    region = hydro_engine_geometry(geojson_path, region_filter)

    # get the centroid of the region, such that we have a point for unit conversion
    centroid = sg.shape(region).centroid
    x, y = centroid.x, centroid.y

    filter_upstream_gt = 1000
    crs = "EPSG:4326"

    g = Geod(ellps="WGS84")
    # convert to meters in the center of the grid
    # Earth Engine expects meters
    _, _, crossdist_m = g.inv(x, y, x + cellsize, y + cellsize)
    cellsize_m = sqrt(0.5 * crossdist_m ** 2)

    # start by making case an exact copy of the template
    copycase(case_template, case)

    # create folder structure for data folder
    for d in ["catchments", "dem", "rivers"]:
        dir_data = os.path.join(case, "data", d)
        ensure_dir_exists(dir_data)

    # create grid
    path_log = "wtools_create_grid.log"
    dir_mask = os.path.join(case, "mask")
    projection = "EPSG:4326"

    download_catchments(
        region, path_catchment, geojson_path, region_filter=region_filter
    )
    create_grid_extent = path_catchment

    create_grid.main(
        path_log,
        dir_mask,
        create_grid_extent,
        projection,
        cellsize,
        locationid=name,
        snap=True,
    )
    mask_tif = os.path.join(dir_mask, "mask.tif")

    with rasterio.open(mask_tif) as ds:
        bbox = ds.bounds

    # create static maps
    dir_dest = os.path.join(case, "staticmaps")
    # use custom inifile, default high res ldd takes too long
    path_inifile = os.path.join(case, "data/staticmaps.ini")
    path_dem_in = os.path.join(case, "data/dem/dem.tif")
    dir_lai = os.path.join(case, "data/parameters/clim")

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
    outlets = outlets_coords(path_catchment, river_data_path)

    static_maps.main(
        dir_mask,
        dir_dest,
        path_inifile,
        path_dem_in,
        river_data_path,
        path_catchment,
        lai=dir_lai,
        other_maps=path_other_maps,
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


def hydro_engine_geometry(path_geojson, region_filter):
    """Provided a path to a GeoJSON file, check if it is valid,
    then return its geometry. Hydro-engine currently only accepts
    geometries, so we need to enforce this here."""

    with open(path_geojson) as f:
        d = geojson.load(f)

    if not d.is_valid:
        raise AssertionError(
            "{} is not a valid GeoJSON file\n{}".format(path_geojson, d.errors())
        )

    # this needs special casing since we want to be able to specify a
    # FeatureCollection of catchment polygons, though at the same time make it
    # compatible with the hydro-engine 1 geometry requirement
    polytypes = ("Polygon", "MultiPolygon")
    if region_filter == "region":
        # these polygon checks should cover all types of GeoJSON
        if d.type == "FeatureCollection":
            # this should check all features
            gtype = d.features[0].geometry.type
            if gtype not in polytypes:
                raise ValueError(
                    "Geometry type in {} is {}, needs to be a polygon".format(
                        path_geojson, gtype
                    )
                )
            # combine features into 1 geometry
            polys = []
            for fcatch in d.features:
                g = sg.shape(fcatch["geometry"])
                polys.append(g)
            # now simplify it to a rectangular polygon
            bnds = unary_union(polys).bounds
            geom = sg.mapping(sg.box(*bnds))
        elif d.type == "Feature":
            assert d.geometry.type in polytypes
            geom = d.geometry
        else:
            assert d.type in polytypes
            geom = d
        # now simplify it to a rectangular polygon
        bnds = sg.shape(geom).bounds
        geom = sg.mapping(sg.box(*bnds))
    else:
        if d.type == "FeatureCollection":
            nfeatures = len(d.features)
            if nfeatures != 1:
                raise AssertionError(
                    "Expecting 1 feature in {}, found {}".format(
                        path_geojson, nfeatures
                    )
                )
            geom = d.features[0].geometry
        elif d.type == "Feature":
            geom = d.geometry
        else:
            geom = d

    return geom


def outlets_coords(path_catchment, river_data_path):
    """Get an array of X and list of Y coordinates of the outlets."""

    outlets = find_outlets(path_catchment, river_data_path, max_dist=0.02)
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
