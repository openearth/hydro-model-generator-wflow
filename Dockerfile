# Use an official Python runtime as a parent image
FROM python:2.7-stretch

# Set environment variable
ENV IMAGENAME /hydro_model_generator_wflow/hydro_model_generator_wflow

# Set the working directory to /hydro_model_generator_wflow
WORKDIR ${IMAGENAME}

# Copy the current directory contents into the container at /hydro_model_generator_wflow
ADD . $IMAGENAME

# Install any needed packages specified in requirements.txt
RUN pip install --trusted-host pypi.python.org -r requirements.txt

# Run hydro_model_generator_wflow.py when the container launches
#CMD ["python", "hydro_model_generator_wflow.py"]


