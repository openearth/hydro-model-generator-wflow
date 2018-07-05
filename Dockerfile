# Use an official Python runtime as a parent image
FROM python:2.7-slim

# Set environment variable
ENV IMAGENAME /hydro_model_generator_wflow

# Set the working directory to /hydro_model_generator_wflow
WORKDIR ${IMAGENAME}

# Copy the current directory contents into the container at /hydro_model_generator_wflow
ADD . $IMAGENAME

# Install any needed packages specified in requirements.txt
RUN apt-get update && \
    pip install --trusted-host pypi.python.org -r requirements.txt

# apt-get install -y \
# gcc && \
# pip install "rasterio==0.36.0" "pyproj==1.9.5.1" --pre --no-binary rasterio,pyproj

# Run hydro_model_generator_wflow.py when the container launches
CMD ["python", "hydro_model_generator_wflow.py"]
