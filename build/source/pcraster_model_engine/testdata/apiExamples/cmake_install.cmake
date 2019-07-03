# Install script for directory: /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/doc/developer/linkout/Examples" TYPE FILE FILES
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/allStatistics.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/areaMap.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/bilStatistics.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/clean.bat"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/clean.sh"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/compressionNoAreaMap.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/compression.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/demo.bat"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/demo.sh"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/diagonalNotSet.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/diagonalSetFalse.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/diagonalSetTrue.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/dynamicNoTimer.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/lookup.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/memoryOnlyIO_1.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/memoryOnlyIO_2.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/memoryOnlyIO_3.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/memoryOnlyIO_4.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/memoryOnlyIO_5.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/memoryOnlyIO_6.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/memoryOnlyIO_7.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/memoryOnlyIO_8.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/memoryOnlyIO_StatisticsAsString.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/memoryOnlyIO_Timeoutput.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/notValid.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/staticScript.xml"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_model_engine/testdata/apiExamples/statisticsMask.xml"
    )
endif()

