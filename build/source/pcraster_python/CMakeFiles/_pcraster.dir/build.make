# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build

# Include any dependencies generated for this target.
include source/pcraster_python/CMakeFiles/_pcraster.dir/depend.make

# Include the progress variables for this target.
include source/pcraster_python/CMakeFiles/_pcraster.dir/progress.make

# Include the compile flags for this target's objects.
include source/pcraster_python/CMakeFiles/_pcraster.dir/flags.make

source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o: source/pcraster_python/CMakeFiles/_pcraster.dir/flags.make
source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o: ../source/pcraster_python/numpy_conversion.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_pcraster.dir/numpy_conversion.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/numpy_conversion.cc

source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_pcraster.dir/numpy_conversion.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/numpy_conversion.cc > CMakeFiles/_pcraster.dir/numpy_conversion.cc.i

source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_pcraster.dir/numpy_conversion.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/numpy_conversion.cc -o CMakeFiles/_pcraster.dir/numpy_conversion.cc.s

source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o.requires:

.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o.requires

source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o.provides: source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o.requires
	$(MAKE) -f source/pcraster_python/CMakeFiles/_pcraster.dir/build.make source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o.provides.build
.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o.provides

source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o.provides.build: source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o


source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o: source/pcraster_python/CMakeFiles/_pcraster.dir/flags.make
source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o: ../source/pcraster_python/PCRaster.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_pcraster.dir/PCRaster.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/PCRaster.cc

source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_pcraster.dir/PCRaster.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/PCRaster.cc > CMakeFiles/_pcraster.dir/PCRaster.cc.i

source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_pcraster.dir/PCRaster.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/PCRaster.cc -o CMakeFiles/_pcraster.dir/PCRaster.cc.s

source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o.requires:

.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o.requires

source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o.provides: source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o.requires
	$(MAKE) -f source/pcraster_python/CMakeFiles/_pcraster.dir/build.make source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o.provides.build
.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o.provides

source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o.provides.build: source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o


source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o: source/pcraster_python/CMakeFiles/_pcraster.dir/flags.make
source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o: ../source/pcraster_python/value_scale_traits.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_pcraster.dir/value_scale_traits.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/value_scale_traits.cc

source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_pcraster.dir/value_scale_traits.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/value_scale_traits.cc > CMakeFiles/_pcraster.dir/value_scale_traits.cc.i

source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_pcraster.dir/value_scale_traits.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/value_scale_traits.cc -o CMakeFiles/_pcraster.dir/value_scale_traits.cc.s

source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o.requires:

.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o.requires

source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o.provides: source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o.requires
	$(MAKE) -f source/pcraster_python/CMakeFiles/_pcraster.dir/build.make source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o.provides.build
.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o.provides

source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o.provides.build: source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o


source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o: source/pcraster_python/CMakeFiles/_pcraster.dir/flags.make
source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o: ../source/pcraster_python/pickle.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_pcraster.dir/pickle.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/pickle.cc

source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_pcraster.dir/pickle.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/pickle.cc > CMakeFiles/_pcraster.dir/pickle.cc.i

source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_pcraster.dir/pickle.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python/pickle.cc -o CMakeFiles/_pcraster.dir/pickle.cc.s

source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o.requires:

.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o.requires

source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o.provides: source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o.requires
	$(MAKE) -f source/pcraster_python/CMakeFiles/_pcraster.dir/build.make source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o.provides.build
.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o.provides

source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o.provides.build: source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o


# Object files for target _pcraster
_pcraster_OBJECTS = \
"CMakeFiles/_pcraster.dir/numpy_conversion.cc.o" \
"CMakeFiles/_pcraster.dir/PCRaster.cc.o" \
"CMakeFiles/_pcraster.dir/value_scale_traits.cc.o" \
"CMakeFiles/_pcraster.dir/pickle.cc.o"

# External object files for target _pcraster
_pcraster_EXTERNAL_OBJECTS =

bin/pcraster/_pcraster.so: source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o
bin/pcraster/_pcraster.so: source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o
bin/pcraster/_pcraster.so: source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o
bin/pcraster/_pcraster.so: source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o
bin/pcraster/_pcraster.so: source/pcraster_python/CMakeFiles/_pcraster.dir/build.make
bin/pcraster/_pcraster.so: bin/libpcraster_python_utils.so
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libboost_python3.so
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libboost_numpy3.so
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libboost_python3.so
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libpython3.6m.so
bin/pcraster/_pcraster.so: bin/libpcraster_model_engine.so
bin/pcraster/_pcraster.so: bin/libcalc.a
bin/pcraster/_pcraster.so: bin/libapi.a
bin/pcraster/_pcraster.so: bin/libpcrgeo.a
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libboost_math_c99.so
bin/pcraster/_pcraster.so: bin/libgeom.a
bin/pcraster/_pcraster.so: bin/libpcrdiscr.a
bin/pcraster/_pcraster.so: bin/libpcraster_dal.so
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libQt5Sql.so.5.9.5
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
bin/pcraster/_pcraster.so: bin/libpccts.a
bin/pcraster/_pcraster.so: bin/libtab.a
bin/pcraster/_pcraster.so: bin/libapp.a
bin/pcraster/_pcraster.so: bin/libmathx.a
bin/pcraster/_pcraster.so: bin/libpcraster_raster_format.a
bin/pcraster/_pcraster.so: bin/libpcrcom.a
bin/pcraster/_pcraster.so: bin/libmisc.a
bin/pcraster/_pcraster.so: bin/libpcraster_xsd.a
bin/pcraster/_pcraster.so: bin/libutils.a
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libpython3.6m.so
bin/pcraster/_pcraster.so: /usr/lib/libgdal.so
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/pcraster/_pcraster.so: /usr/lib/x86_64-linux-gnu/libxerces-c.so
bin/pcraster/_pcraster.so: source/pcraster_python/CMakeFiles/_pcraster.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library ../../bin/pcraster/_pcraster.so"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_pcraster.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/pcraster_python/CMakeFiles/_pcraster.dir/build: bin/pcraster/_pcraster.so

.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/build

source/pcraster_python/CMakeFiles/_pcraster.dir/requires: source/pcraster_python/CMakeFiles/_pcraster.dir/numpy_conversion.cc.o.requires
source/pcraster_python/CMakeFiles/_pcraster.dir/requires: source/pcraster_python/CMakeFiles/_pcraster.dir/PCRaster.cc.o.requires
source/pcraster_python/CMakeFiles/_pcraster.dir/requires: source/pcraster_python/CMakeFiles/_pcraster.dir/value_scale_traits.cc.o.requires
source/pcraster_python/CMakeFiles/_pcraster.dir/requires: source/pcraster_python/CMakeFiles/_pcraster.dir/pickle.cc.o.requires

.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/requires

source/pcraster_python/CMakeFiles/_pcraster.dir/clean:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python && $(CMAKE_COMMAND) -P CMakeFiles/_pcraster.dir/cmake_clean.cmake
.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/clean

source/pcraster_python/CMakeFiles/_pcraster.dir/depend:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0 /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/pcraster_python /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/pcraster_python/CMakeFiles/_pcraster.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/pcraster_python/CMakeFiles/_pcraster.dir/depend

