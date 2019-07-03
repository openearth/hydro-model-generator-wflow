# Install script for directory: /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/fern/source/fern

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/fern" TYPE FILE FILES "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/configure.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/fern" TYPE DIRECTORY FILES
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/fern/source/fern/algorithm"
    "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/fern/source/fern/core"
    FILES_MATCHING REGEX "/[^/]*\\.h$" REGEX "/test$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/doc/fern" TYPE DIRECTORY FILES "/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/fern/source/fern/example" FILES_MATCHING REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.cc$" REGEX "/test$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/algorithm/cmake_install.cmake")
  include("/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/core/cmake_install.cmake")
  include("/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/example/cmake_install.cmake")
  include("/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/feature/cmake_install.cmake")

endif()

