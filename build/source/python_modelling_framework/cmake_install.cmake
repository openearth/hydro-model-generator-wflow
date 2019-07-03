# Install script for directory: /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local/pcraster")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/pcraster/framework" TYPE FILE FILES
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/aggregationfunctions.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/dynamicBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/dynamicFramework.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/dynamicPCRasterBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/frameworkBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/generalfunctions.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/__init__.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/kalmanFilterFramework.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/kfBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/kfPCRasterBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/mcBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/mcFramework.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/mcPCRasterBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/particleFilterFramework.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/PCRasterPythonFramework.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/pfBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/pfPCRasterBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/regression.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/staticBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/staticFramework.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/staticPCRasterBase.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/python_modelling_framework/Timeoutput.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/environment/script/forkscript.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/environment/script/pcr.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/environment/script/pcrstat.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/environment/script/shellscript.py"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/environment/script/utils.py"
    )
endif()

