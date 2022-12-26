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
include source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/depend.make

# Include the progress variables for this target.
include source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/progress.make

# Include the compile flags for this target's objects.
include source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/flags.make

source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o: source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/flags.make
source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o: ../source/fern/source/fern/example/algorithm/add_two_rasters.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/example/algorithm && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/fern/source/fern/example/algorithm/add_two_rasters.cc

source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/example/algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/fern/source/fern/example/algorithm/add_two_rasters.cc > CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.i

source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/example/algorithm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/fern/source/fern/example/algorithm/add_two_rasters.cc -o CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.s

source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o.requires:

.PHONY : source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o.requires

source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o.provides: source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o.requires
	$(MAKE) -f source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/build.make source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o.provides.build
.PHONY : source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o.provides

source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o.provides.build: source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o


# Object files for target add_two_rasters
add_two_rasters_OBJECTS = \
"CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o"

# External object files for target add_two_rasters
add_two_rasters_EXTERNAL_OBJECTS =

bin/add_two_rasters: source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o
bin/add_two_rasters: source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/build.make
bin/add_two_rasters: bin/libfern_algorithm.a
bin/add_two_rasters: bin/libfern_feature.a
bin/add_two_rasters: bin/libfern_core.a
bin/add_two_rasters: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/add_two_rasters: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/add_two_rasters: /usr/lib/x86_64-linux-gnu/libboost_timer.so
bin/add_two_rasters: source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../../../bin/add_two_rasters"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/example/algorithm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/add_two_rasters.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/build: bin/add_two_rasters

.PHONY : source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/build

source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/requires: source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/add_two_rasters.cc.o.requires

.PHONY : source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/requires

source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/clean:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/example/algorithm && $(CMAKE_COMMAND) -P CMakeFiles/add_two_rasters.dir/cmake_clean.cmake
.PHONY : source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/clean

source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/depend:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0 /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/fern/source/fern/example/algorithm /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/example/algorithm /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/fern/source/fern/example/algorithm/CMakeFiles/add_two_rasters.dir/depend
