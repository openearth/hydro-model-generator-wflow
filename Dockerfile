# Install from source code
# Or
# docker pull quanpands/wflow:latest

FROM ubuntu:18.04
RUN apt-get update --fix-missing

ADD . /opt/app/
WORKDIR /opt/app/
ADD requirements.txt requirements.txt

RUN apt install -yq python3-minimal python3-pip \
    && pip3 install --upgrade pip \
    && pip install -r requirements.txt

# GDAL https://launchpad.net/ubuntu/+source/gdal/2.2.3+dfsg-2
RUN apt install -y wget cmake gcc g++ git qtbase5-dev \
       libboost-all-dev libncurses5-dev libxml2 libxml2-utils libxslt1-dev libxerces-c-dev libqwt-qt5-dev \
       libpython3.6-dev libpython-dev \
       gdal-bin gdal-data libgdal-dev libgdal20 \
       python3-numpy python3-docopt python3-setuptools python3-gdal

# Install pcraster-4.2.0
WORKDIR /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/
RUN mv /opt/app/build /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/
RUN dpkg -i ./build/pcraster_4.2.0.deb

# RUN wget http://pcraster.geo.uu.nl/pcraster/4.2.0/pcraster-4.2.0.tar.bz2 \
#     && tar xf pcraster-4.2.0.tar.bz2 && cd pcraster-4.2.0 \
#     && mkdir build && cd build \
#     && cmake -DFERN_BUILD_ALGORITHM:BOOL=TRUE -DCMAKE_INSTALL_PREFIX:PATH=/usr/local/pcraster -DPYTHON_EXECUTABLE:FILEPATH=/usr/bin/python3 .. \
#     && cmake --build . \
#     && make install

WORKDIR /opt/app/
RUN git clone --recursive 'https://github.com/openstreams/wflow' \
    && cd wflow \
    && export CPLUS_INCLUDE_PATH=/usr/include/gdal \
    && export C_INCLUDE_PATH=/usr/include/gdal \
    && python3 setup.py install
ENV PYTHONPATH "${PYTONPATH}:/usr/local/pcraster/python" 
ENV PATH "${PATH}:/usr/local/pcraster/bin:/usr/local/pcraster"
# RUN export PYTHONPATH && export PATH
RUN pip3 install psq

# Add application code.
ADD . /opt/app/
WORKDIR /opt/app/hydro_model_generator_wflow/

EXPOSE 8080
CMD gunicorn -b :$PORT hydro_model_generator_wflow:app
