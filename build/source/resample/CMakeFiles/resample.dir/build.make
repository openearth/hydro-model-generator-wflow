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
include source/resample/CMakeFiles/resample.dir/depend.make

# Include the progress variables for this target.
include source/resample/CMakeFiles/resample.dir/progress.make

# Include the compile flags for this target's objects.
include source/resample/CMakeFiles/resample.dir/flags.make

source/resample/CMakeFiles/resample.dir/main.c.o: source/resample/CMakeFiles/resample.dir/flags.make
source/resample/CMakeFiles/resample.dir/main.c.o: ../source/resample/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object source/resample/CMakeFiles/resample.dir/main.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/resample.dir/main.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/main.c

source/resample/CMakeFiles/resample.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/resample.dir/main.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/main.c > CMakeFiles/resample.dir/main.c.i

source/resample/CMakeFiles/resample.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/resample.dir/main.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/main.c -o CMakeFiles/resample.dir/main.c.s

source/resample/CMakeFiles/resample.dir/main.c.o.requires:

.PHONY : source/resample/CMakeFiles/resample.dir/main.c.o.requires

source/resample/CMakeFiles/resample.dir/main.c.o.provides: source/resample/CMakeFiles/resample.dir/main.c.o.requires
	$(MAKE) -f source/resample/CMakeFiles/resample.dir/build.make source/resample/CMakeFiles/resample.dir/main.c.o.provides.build
.PHONY : source/resample/CMakeFiles/resample.dir/main.c.o.provides

source/resample/CMakeFiles/resample.dir/main.c.o.provides.build: source/resample/CMakeFiles/resample.dir/main.c.o


source/resample/CMakeFiles/resample.dir/sample.c.o: source/resample/CMakeFiles/resample.dir/flags.make
source/resample/CMakeFiles/resample.dir/sample.c.o: ../source/resample/sample.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object source/resample/CMakeFiles/resample.dir/sample.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/resample.dir/sample.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/sample.c

source/resample/CMakeFiles/resample.dir/sample.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/resample.dir/sample.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/sample.c > CMakeFiles/resample.dir/sample.c.i

source/resample/CMakeFiles/resample.dir/sample.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/resample.dir/sample.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/sample.c -o CMakeFiles/resample.dir/sample.c.s

source/resample/CMakeFiles/resample.dir/sample.c.o.requires:

.PHONY : source/resample/CMakeFiles/resample.dir/sample.c.o.requires

source/resample/CMakeFiles/resample.dir/sample.c.o.provides: source/resample/CMakeFiles/resample.dir/sample.c.o.requires
	$(MAKE) -f source/resample/CMakeFiles/resample.dir/build.make source/resample/CMakeFiles/resample.dir/sample.c.o.provides.build
.PHONY : source/resample/CMakeFiles/resample.dir/sample.c.o.provides

source/resample/CMakeFiles/resample.dir/sample.c.o.provides.build: source/resample/CMakeFiles/resample.dir/sample.c.o


source/resample/CMakeFiles/resample.dir/samplecl.c.o: source/resample/CMakeFiles/resample.dir/flags.make
source/resample/CMakeFiles/resample.dir/samplecl.c.o: ../source/resample/samplecl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object source/resample/CMakeFiles/resample.dir/samplecl.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/resample.dir/samplecl.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/samplecl.c

source/resample/CMakeFiles/resample.dir/samplecl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/resample.dir/samplecl.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/samplecl.c > CMakeFiles/resample.dir/samplecl.c.i

source/resample/CMakeFiles/resample.dir/samplecl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/resample.dir/samplecl.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/samplecl.c -o CMakeFiles/resample.dir/samplecl.c.s

source/resample/CMakeFiles/resample.dir/samplecl.c.o.requires:

.PHONY : source/resample/CMakeFiles/resample.dir/samplecl.c.o.requires

source/resample/CMakeFiles/resample.dir/samplecl.c.o.provides: source/resample/CMakeFiles/resample.dir/samplecl.c.o.requires
	$(MAKE) -f source/resample/CMakeFiles/resample.dir/build.make source/resample/CMakeFiles/resample.dir/samplecl.c.o.provides.build
.PHONY : source/resample/CMakeFiles/resample.dir/samplecl.c.o.provides

source/resample/CMakeFiles/resample.dir/samplecl.c.o.provides.build: source/resample/CMakeFiles/resample.dir/samplecl.c.o


source/resample/CMakeFiles/resample.dir/sampleco.c.o: source/resample/CMakeFiles/resample.dir/flags.make
source/resample/CMakeFiles/resample.dir/sampleco.c.o: ../source/resample/sampleco.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object source/resample/CMakeFiles/resample.dir/sampleco.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/resample.dir/sampleco.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/sampleco.c

source/resample/CMakeFiles/resample.dir/sampleco.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/resample.dir/sampleco.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/sampleco.c > CMakeFiles/resample.dir/sampleco.c.i

source/resample/CMakeFiles/resample.dir/sampleco.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/resample.dir/sampleco.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/sampleco.c -o CMakeFiles/resample.dir/sampleco.c.s

source/resample/CMakeFiles/resample.dir/sampleco.c.o.requires:

.PHONY : source/resample/CMakeFiles/resample.dir/sampleco.c.o.requires

source/resample/CMakeFiles/resample.dir/sampleco.c.o.provides: source/resample/CMakeFiles/resample.dir/sampleco.c.o.requires
	$(MAKE) -f source/resample/CMakeFiles/resample.dir/build.make source/resample/CMakeFiles/resample.dir/sampleco.c.o.provides.build
.PHONY : source/resample/CMakeFiles/resample.dir/sampleco.c.o.provides

source/resample/CMakeFiles/resample.dir/sampleco.c.o.provides.build: source/resample/CMakeFiles/resample.dir/sampleco.c.o


source/resample/CMakeFiles/resample.dir/point.c.o: source/resample/CMakeFiles/resample.dir/flags.make
source/resample/CMakeFiles/resample.dir/point.c.o: ../source/resample/point.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object source/resample/CMakeFiles/resample.dir/point.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/resample.dir/point.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/point.c

source/resample/CMakeFiles/resample.dir/point.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/resample.dir/point.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/point.c > CMakeFiles/resample.dir/point.c.i

source/resample/CMakeFiles/resample.dir/point.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/resample.dir/point.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample/point.c -o CMakeFiles/resample.dir/point.c.s

source/resample/CMakeFiles/resample.dir/point.c.o.requires:

.PHONY : source/resample/CMakeFiles/resample.dir/point.c.o.requires

source/resample/CMakeFiles/resample.dir/point.c.o.provides: source/resample/CMakeFiles/resample.dir/point.c.o.requires
	$(MAKE) -f source/resample/CMakeFiles/resample.dir/build.make source/resample/CMakeFiles/resample.dir/point.c.o.provides.build
.PHONY : source/resample/CMakeFiles/resample.dir/point.c.o.provides

source/resample/CMakeFiles/resample.dir/point.c.o.provides.build: source/resample/CMakeFiles/resample.dir/point.c.o


# Object files for target resample
resample_OBJECTS = \
"CMakeFiles/resample.dir/main.c.o" \
"CMakeFiles/resample.dir/sample.c.o" \
"CMakeFiles/resample.dir/samplecl.c.o" \
"CMakeFiles/resample.dir/sampleco.c.o" \
"CMakeFiles/resample.dir/point.c.o"

# External object files for target resample
resample_EXTERNAL_OBJECTS =

bin/resample: source/resample/CMakeFiles/resample.dir/main.c.o
bin/resample: source/resample/CMakeFiles/resample.dir/sample.c.o
bin/resample: source/resample/CMakeFiles/resample.dir/samplecl.c.o
bin/resample: source/resample/CMakeFiles/resample.dir/sampleco.c.o
bin/resample: source/resample/CMakeFiles/resample.dir/point.c.o
bin/resample: source/resample/CMakeFiles/resample.dir/build.make
bin/resample: bin/libapp.a
bin/resample: bin/libgeom.a
bin/resample: bin/libpcraster_raster_format.a
bin/resample: bin/libtab.a
bin/resample: bin/libapp.a
bin/resample: bin/libpcraster_raster_format.a
bin/resample: bin/libmathx.a
bin/resample: bin/libpcrcom.a
bin/resample: bin/libmisc.a
bin/resample: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/resample: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/resample: source/resample/CMakeFiles/resample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ../../bin/resample"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/resample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/resample/CMakeFiles/resample.dir/build: bin/resample

.PHONY : source/resample/CMakeFiles/resample.dir/build

source/resample/CMakeFiles/resample.dir/requires: source/resample/CMakeFiles/resample.dir/main.c.o.requires
source/resample/CMakeFiles/resample.dir/requires: source/resample/CMakeFiles/resample.dir/sample.c.o.requires
source/resample/CMakeFiles/resample.dir/requires: source/resample/CMakeFiles/resample.dir/samplecl.c.o.requires
source/resample/CMakeFiles/resample.dir/requires: source/resample/CMakeFiles/resample.dir/sampleco.c.o.requires
source/resample/CMakeFiles/resample.dir/requires: source/resample/CMakeFiles/resample.dir/point.c.o.requires

.PHONY : source/resample/CMakeFiles/resample.dir/requires

source/resample/CMakeFiles/resample.dir/clean:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample && $(CMAKE_COMMAND) -P CMakeFiles/resample.dir/cmake_clean.cmake
.PHONY : source/resample/CMakeFiles/resample.dir/clean

source/resample/CMakeFiles/resample.dir/depend:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0 /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/resample /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/resample/CMakeFiles/resample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/resample/CMakeFiles/resample.dir/depend
