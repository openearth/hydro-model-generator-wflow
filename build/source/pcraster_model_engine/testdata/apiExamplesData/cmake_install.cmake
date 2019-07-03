# Install script for directory: /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/doc/developer/linkout/Examples/data" TYPE FILE FILES
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData/ecotoop2Bil.bil"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData/ecotoop2Bil.hdr"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData/ecotoop2.map"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData/ecotoop.map"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData/habschik2.map"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData/habschik.map"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData/inp10_eco_klas.bil"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData/inp10_eco_klas.hdr"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData/inp10_Univariaat.bil"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamplesData/inp10_Univariaat.hdr"
    )
endif()

