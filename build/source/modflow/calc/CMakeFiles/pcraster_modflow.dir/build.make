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
include source/modflow/calc/CMakeFiles/pcraster_modflow.dir/depend.make

# Include the progress variables for this target.
include source/modflow/calc/CMakeFiles/pcraster_modflow.dir/progress.make

# Include the compile flags for this target's objects.
include source/modflow/calc/CMakeFiles/pcraster_modflow.dir/flags.make

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/flags.make
source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o: ../source/modflow/calc/xml.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pcraster_modflow.dir/xml.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/modflow/calc/xml.cc

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pcraster_modflow.dir/xml.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/modflow/calc/xml.cc > CMakeFiles/pcraster_modflow.dir/xml.cc.i

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pcraster_modflow.dir/xml.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/modflow/calc/xml.cc -o CMakeFiles/pcraster_modflow.dir/xml.cc.s

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o.requires:

.PHONY : source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o.requires

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o.provides: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o.requires
	$(MAKE) -f source/modflow/calc/CMakeFiles/pcraster_modflow.dir/build.make source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o.provides.build
.PHONY : source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o.provides

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o.provides.build: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o


source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/flags.make
source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o: ../source/modflow/calc/pcr_mflink.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/modflow/calc/pcr_mflink.cc

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/modflow/calc/pcr_mflink.cc > CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.i

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/modflow/calc/pcr_mflink.cc -o CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.s

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o.requires:

.PHONY : source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o.requires

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o.provides: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o.requires
	$(MAKE) -f source/modflow/calc/CMakeFiles/pcraster_modflow.dir/build.make source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o.provides.build
.PHONY : source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o.provides

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o.provides.build: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o


# Object files for target pcraster_modflow
pcraster_modflow_OBJECTS = \
"CMakeFiles/pcraster_modflow.dir/xml.cc.o" \
"CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o"

# External object files for target pcraster_modflow
pcraster_modflow_EXTERNAL_OBJECTS =

bin/libpcraster_modflow.so.0.1: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o
bin/libpcraster_modflow.so.0.1: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o
bin/libpcraster_modflow.so.0.1: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/build.make
bin/libpcraster_modflow.so.0.1: bin/libpcrmf.a
bin/libpcraster_modflow.so.0.1: bin/libpcraster_model_engine.so
bin/libpcraster_modflow.so.0.1: bin/libcalc.a
bin/libpcraster_modflow.so.0.1: bin/libapi.a
bin/libpcraster_modflow.so.0.1: bin/libpcrgeo.a
bin/libpcraster_modflow.so.0.1: /usr/lib/x86_64-linux-gnu/libboost_math_c99.so
bin/libpcraster_modflow.so.0.1: bin/libgeom.a
bin/libpcraster_modflow.so.0.1: bin/libpcrdiscr.a
bin/libpcraster_modflow.so.0.1: bin/libpcraster_dal.so
bin/libpcraster_modflow.so.0.1: /usr/lib/x86_64-linux-gnu/libQt5Sql.so.5.9.5
bin/libpcraster_modflow.so.0.1: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
bin/libpcraster_modflow.so.0.1: bin/libpccts.a
bin/libpcraster_modflow.so.0.1: bin/libtab.a
bin/libpcraster_modflow.so.0.1: bin/libapp.a
bin/libpcraster_modflow.so.0.1: bin/libmathx.a
bin/libpcraster_modflow.so.0.1: bin/libpcraster_raster_format.a
bin/libpcraster_modflow.so.0.1: bin/libpcrcom.a
bin/libpcraster_modflow.so.0.1: bin/libmisc.a
bin/libpcraster_modflow.so.0.1: bin/libpcraster_xsd.a
bin/libpcraster_modflow.so.0.1: bin/libutils.a
bin/libpcraster_modflow.so.0.1: /usr/lib/libgdal.so
bin/libpcraster_modflow.so.0.1: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/libpcraster_modflow.so.0.1: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/libpcraster_modflow.so.0.1: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
bin/libpcraster_modflow.so.0.1: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/libpcraster_modflow.so.0.1: /usr/lib/x86_64-linux-gnu/libxerces-c.so
bin/libpcraster_modflow.so.0.1: /usr/lib/x86_64-linux-gnu/libboost_python3.so
bin/libpcraster_modflow.so.0.1: /usr/lib/x86_64-linux-gnu/libpython3.6m.so
bin/libpcraster_modflow.so.0.1: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../bin/libpcraster_modflow.so"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pcraster_modflow.dir/link.txt --verbose=$(VERBOSE)
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc && $(CMAKE_COMMAND) -E cmake_symlink_library ../../../bin/libpcraster_modflow.so.0.1 ../../../bin/libpcraster_modflow.so.0.1 ../../../bin/libpcraster_modflow.so
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc && /usr/bin/cmake -E copy /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/modflow/calc/pcraster_modflow.xml /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/bin/./

bin/libpcraster_modflow.so: bin/libpcraster_modflow.so.0.1
	@$(CMAKE_COMMAND) -E touch_nocreate bin/libpcraster_modflow.so

# Rule to build all files generated by this target.
source/modflow/calc/CMakeFiles/pcraster_modflow.dir/build: bin/libpcraster_modflow.so

.PHONY : source/modflow/calc/CMakeFiles/pcraster_modflow.dir/build

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/requires: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/xml.cc.o.requires
source/modflow/calc/CMakeFiles/pcraster_modflow.dir/requires: source/modflow/calc/CMakeFiles/pcraster_modflow.dir/pcr_mflink.cc.o.requires

.PHONY : source/modflow/calc/CMakeFiles/pcraster_modflow.dir/requires

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/clean:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc && $(CMAKE_COMMAND) -P CMakeFiles/pcraster_modflow.dir/cmake_clean.cmake
.PHONY : source/modflow/calc/CMakeFiles/pcraster_modflow.dir/clean

source/modflow/calc/CMakeFiles/pcraster_modflow.dir/depend:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0 /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/modflow/calc /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/modflow/calc/CMakeFiles/pcraster_modflow.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/modflow/calc/CMakeFiles/pcraster_modflow.dir/depend
