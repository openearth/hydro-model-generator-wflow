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
include source/col2map/CMakeFiles/col2map.dir/depend.make

# Include the progress variables for this target.
include source/col2map/CMakeFiles/col2map.dir/progress.make

# Include the compile flags for this target's objects.
include source/col2map/CMakeFiles/col2map.dir/flags.make

source/col2map/CMakeFiles/col2map.dir/col2map.c.o: source/col2map/CMakeFiles/col2map.dir/flags.make
source/col2map/CMakeFiles/col2map.dir/col2map.c.o: ../source/col2map/col2map.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object source/col2map/CMakeFiles/col2map.dir/col2map.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/col2map && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/col2map.dir/col2map.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/col2map/col2map.c

source/col2map/CMakeFiles/col2map.dir/col2map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/col2map.dir/col2map.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/col2map && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/col2map/col2map.c > CMakeFiles/col2map.dir/col2map.c.i

source/col2map/CMakeFiles/col2map.dir/col2map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/col2map.dir/col2map.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/col2map && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/col2map/col2map.c -o CMakeFiles/col2map.dir/col2map.c.s

source/col2map/CMakeFiles/col2map.dir/col2map.c.o.requires:

.PHONY : source/col2map/CMakeFiles/col2map.dir/col2map.c.o.requires

source/col2map/CMakeFiles/col2map.dir/col2map.c.o.provides: source/col2map/CMakeFiles/col2map.dir/col2map.c.o.requires
	$(MAKE) -f source/col2map/CMakeFiles/col2map.dir/build.make source/col2map/CMakeFiles/col2map.dir/col2map.c.o.provides.build
.PHONY : source/col2map/CMakeFiles/col2map.dir/col2map.c.o.provides

source/col2map/CMakeFiles/col2map.dir/col2map.c.o.provides.build: source/col2map/CMakeFiles/col2map.dir/col2map.c.o


source/col2map/CMakeFiles/col2map.dir/main.c.o: source/col2map/CMakeFiles/col2map.dir/flags.make
source/col2map/CMakeFiles/col2map.dir/main.c.o: ../source/col2map/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object source/col2map/CMakeFiles/col2map.dir/main.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/col2map && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/col2map.dir/main.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/col2map/main.c

source/col2map/CMakeFiles/col2map.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/col2map.dir/main.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/col2map && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/col2map/main.c > CMakeFiles/col2map.dir/main.c.i

source/col2map/CMakeFiles/col2map.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/col2map.dir/main.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/col2map && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/col2map/main.c -o CMakeFiles/col2map.dir/main.c.s

source/col2map/CMakeFiles/col2map.dir/main.c.o.requires:

.PHONY : source/col2map/CMakeFiles/col2map.dir/main.c.o.requires

source/col2map/CMakeFiles/col2map.dir/main.c.o.provides: source/col2map/CMakeFiles/col2map.dir/main.c.o.requires
	$(MAKE) -f source/col2map/CMakeFiles/col2map.dir/build.make source/col2map/CMakeFiles/col2map.dir/main.c.o.provides.build
.PHONY : source/col2map/CMakeFiles/col2map.dir/main.c.o.provides

source/col2map/CMakeFiles/col2map.dir/main.c.o.provides.build: source/col2map/CMakeFiles/col2map.dir/main.c.o


# Object files for target col2map
col2map_OBJECTS = \
"CMakeFiles/col2map.dir/col2map.c.o" \
"CMakeFiles/col2map.dir/main.c.o"

# External object files for target col2map
col2map_EXTERNAL_OBJECTS =

bin/col2map: source/col2map/CMakeFiles/col2map.dir/col2map.c.o
bin/col2map: source/col2map/CMakeFiles/col2map.dir/main.c.o
bin/col2map: source/col2map/CMakeFiles/col2map.dir/build.make
bin/col2map: bin/libapp.a
bin/col2map: bin/libpcraster_raster_format.a
bin/col2map: bin/libtab.a
bin/col2map: bin/libapp.a
bin/col2map: bin/libpcraster_raster_format.a
bin/col2map: bin/libmathx.a
bin/col2map: bin/libpcrcom.a
bin/col2map: bin/libmisc.a
bin/col2map: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/col2map: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/col2map: source/col2map/CMakeFiles/col2map.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/col2map"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/col2map && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/col2map.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/col2map/CMakeFiles/col2map.dir/build: bin/col2map

.PHONY : source/col2map/CMakeFiles/col2map.dir/build

source/col2map/CMakeFiles/col2map.dir/requires: source/col2map/CMakeFiles/col2map.dir/col2map.c.o.requires
source/col2map/CMakeFiles/col2map.dir/requires: source/col2map/CMakeFiles/col2map.dir/main.c.o.requires

.PHONY : source/col2map/CMakeFiles/col2map.dir/requires

source/col2map/CMakeFiles/col2map.dir/clean:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/col2map && $(CMAKE_COMMAND) -P CMakeFiles/col2map.dir/cmake_clean.cmake
.PHONY : source/col2map/CMakeFiles/col2map.dir/clean

source/col2map/CMakeFiles/col2map.dir/depend:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0 /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/col2map /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/col2map /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/col2map/CMakeFiles/col2map.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/col2map/CMakeFiles/col2map.dir/depend
