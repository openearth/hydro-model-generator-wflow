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
include source/api/CMakeFiles/api.dir/depend.make

# Include the progress variables for this target.
include source/api/CMakeFiles/api.dir/progress.make

# Include the compile flags for this target's objects.
include source/api/CMakeFiles/api.dir/flags.make

source/api/CMakeFiles/api.dir/bootapi.c.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/bootapi.c.o: ../source/api/bootapi.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object source/api/CMakeFiles/api.dir/bootapi.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/api.dir/bootapi.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/bootapi.c

source/api/CMakeFiles/api.dir/bootapi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/api.dir/bootapi.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/bootapi.c > CMakeFiles/api.dir/bootapi.c.i

source/api/CMakeFiles/api.dir/bootapi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/api.dir/bootapi.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/bootapi.c -o CMakeFiles/api.dir/bootapi.c.s

source/api/CMakeFiles/api.dir/bootapi.c.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/bootapi.c.o.requires

source/api/CMakeFiles/api.dir/bootapi.c.o.provides: source/api/CMakeFiles/api.dir/bootapi.c.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/bootapi.c.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/bootapi.c.o.provides

source/api/CMakeFiles/api.dir/bootapi.c.o.provides.build: source/api/CMakeFiles/api.dir/bootapi.c.o


source/api/CMakeFiles/api.dir/ranuint1.c.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/ranuint1.c.o: ../source/api/ranuint1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object source/api/CMakeFiles/api.dir/ranuint1.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/api.dir/ranuint1.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranuint1.c

source/api/CMakeFiles/api.dir/ranuint1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/api.dir/ranuint1.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranuint1.c > CMakeFiles/api.dir/ranuint1.c.i

source/api/CMakeFiles/api.dir/ranuint1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/api.dir/ranuint1.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranuint1.c -o CMakeFiles/api.dir/ranuint1.c.s

source/api/CMakeFiles/api.dir/ranuint1.c.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/ranuint1.c.o.requires

source/api/CMakeFiles/api.dir/ranuint1.c.o.provides: source/api/CMakeFiles/api.dir/ranuint1.c.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/ranuint1.c.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/ranuint1.c.o.provides

source/api/CMakeFiles/api.dir/ranuint1.c.o.provides.build: source/api/CMakeFiles/api.dir/ranuint1.c.o


source/api/CMakeFiles/api.dir/ranint4.c.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/ranint4.c.o: ../source/api/ranint4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object source/api/CMakeFiles/api.dir/ranint4.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/api.dir/ranint4.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranint4.c

source/api/CMakeFiles/api.dir/ranint4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/api.dir/ranint4.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranint4.c > CMakeFiles/api.dir/ranint4.c.i

source/api/CMakeFiles/api.dir/ranint4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/api.dir/ranint4.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranint4.c -o CMakeFiles/api.dir/ranint4.c.s

source/api/CMakeFiles/api.dir/ranint4.c.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/ranint4.c.o.requires

source/api/CMakeFiles/api.dir/ranint4.c.o.provides: source/api/CMakeFiles/api.dir/ranint4.c.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/ranint4.c.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/ranint4.c.o.provides

source/api/CMakeFiles/api.dir/ranint4.c.o.provides.build: source/api/CMakeFiles/api.dir/ranint4.c.o


source/api/CMakeFiles/api.dir/ranreal8.c.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/ranreal8.c.o: ../source/api/ranreal8.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object source/api/CMakeFiles/api.dir/ranreal8.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/api.dir/ranreal8.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranreal8.c

source/api/CMakeFiles/api.dir/ranreal8.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/api.dir/ranreal8.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranreal8.c > CMakeFiles/api.dir/ranreal8.c.i

source/api/CMakeFiles/api.dir/ranreal8.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/api.dir/ranreal8.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranreal8.c -o CMakeFiles/api.dir/ranreal8.c.s

source/api/CMakeFiles/api.dir/ranreal8.c.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/ranreal8.c.o.requires

source/api/CMakeFiles/api.dir/ranreal8.c.o.provides: source/api/CMakeFiles/api.dir/ranreal8.c.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/ranreal8.c.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/ranreal8.c.o.provides

source/api/CMakeFiles/api.dir/ranreal8.c.o.provides.build: source/api/CMakeFiles/api.dir/ranreal8.c.o


source/api/CMakeFiles/api.dir/testapi.c.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/testapi.c.o: ../source/api/testapi.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object source/api/CMakeFiles/api.dir/testapi.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/api.dir/testapi.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/testapi.c

source/api/CMakeFiles/api.dir/testapi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/api.dir/testapi.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/testapi.c > CMakeFiles/api.dir/testapi.c.i

source/api/CMakeFiles/api.dir/testapi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/api.dir/testapi.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/testapi.c -o CMakeFiles/api.dir/testapi.c.s

source/api/CMakeFiles/api.dir/testapi.c.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/testapi.c.o.requires

source/api/CMakeFiles/api.dir/testapi.c.o.provides: source/api/CMakeFiles/api.dir/testapi.c.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/testapi.c.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/testapi.c.o.provides

source/api/CMakeFiles/api.dir/testapi.c.o.provides.build: source/api/CMakeFiles/api.dir/testapi.c.o


source/api/CMakeFiles/api.dir/mapdim.c.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/mapdim.c.o: ../source/api/mapdim.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object source/api/CMakeFiles/api.dir/mapdim.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/api.dir/mapdim.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/mapdim.c

source/api/CMakeFiles/api.dir/mapdim.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/api.dir/mapdim.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/mapdim.c > CMakeFiles/api.dir/mapdim.c.i

source/api/CMakeFiles/api.dir/mapdim.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/api.dir/mapdim.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/mapdim.c -o CMakeFiles/api.dir/mapdim.c.s

source/api/CMakeFiles/api.dir/mapdim.c.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/mapdim.c.o.requires

source/api/CMakeFiles/api.dir/mapdim.c.o.provides: source/api/CMakeFiles/api.dir/mapdim.c.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/mapdim.c.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/mapdim.c.o.provides

source/api/CMakeFiles/api.dir/mapdim.c.o.provides.build: source/api/CMakeFiles/api.dir/mapdim.c.o


source/api/CMakeFiles/api.dir/ranpriv.c.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/ranpriv.c.o: ../source/api/ranpriv.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object source/api/CMakeFiles/api.dir/ranpriv.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/api.dir/ranpriv.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranpriv.c

source/api/CMakeFiles/api.dir/ranpriv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/api.dir/ranpriv.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranpriv.c > CMakeFiles/api.dir/ranpriv.c.i

source/api/CMakeFiles/api.dir/ranpriv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/api.dir/ranpriv.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/ranpriv.c -o CMakeFiles/api.dir/ranpriv.c.s

source/api/CMakeFiles/api.dir/ranpriv.c.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/ranpriv.c.o.requires

source/api/CMakeFiles/api.dir/ranpriv.c.o.provides: source/api/CMakeFiles/api.dir/ranpriv.c.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/ranpriv.c.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/ranpriv.c.o.provides

source/api/CMakeFiles/api.dir/ranpriv.c.o.provides.build: source/api/CMakeFiles/api.dir/ranpriv.c.o


source/api/CMakeFiles/api.dir/fieldapi_common.cc.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/fieldapi_common.cc.o: ../source/api/fieldapi_common.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object source/api/CMakeFiles/api.dir/fieldapi_common.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/api.dir/fieldapi_common.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_common.cc

source/api/CMakeFiles/api.dir/fieldapi_common.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/api.dir/fieldapi_common.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_common.cc > CMakeFiles/api.dir/fieldapi_common.cc.i

source/api/CMakeFiles/api.dir/fieldapi_common.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/api.dir/fieldapi_common.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_common.cc -o CMakeFiles/api.dir/fieldapi_common.cc.s

source/api/CMakeFiles/api.dir/fieldapi_common.cc.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/fieldapi_common.cc.o.requires

source/api/CMakeFiles/api.dir/fieldapi_common.cc.o.provides: source/api/CMakeFiles/api.dir/fieldapi_common.cc.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/fieldapi_common.cc.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/fieldapi_common.cc.o.provides

source/api/CMakeFiles/api.dir/fieldapi_common.cc.o.provides.build: source/api/CMakeFiles/api.dir/fieldapi_common.cc.o


source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o: ../source/api/fieldapi_scalardomaincheck.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_scalardomaincheck.cc

source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_scalardomaincheck.cc > CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.i

source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_scalardomaincheck.cc -o CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.s

source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o.requires

source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o.provides: source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o.provides

source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o.provides.build: source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o


source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o: ../source/api/fieldapi_interface.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/api.dir/fieldapi_interface.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_interface.cc

source/api/CMakeFiles/api.dir/fieldapi_interface.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/api.dir/fieldapi_interface.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_interface.cc > CMakeFiles/api.dir/fieldapi_interface.cc.i

source/api/CMakeFiles/api.dir/fieldapi_interface.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/api.dir/fieldapi_interface.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_interface.cc -o CMakeFiles/api.dir/fieldapi_interface.cc.s

source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o.requires

source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o.provides: source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o.provides

source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o.provides.build: source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o


source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o: source/api/CMakeFiles/api.dir/flags.make
source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o: ../source/api/fieldapi_templates.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/api.dir/fieldapi_templates.cc.o -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_templates.cc

source/api/CMakeFiles/api.dir/fieldapi_templates.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/api.dir/fieldapi_templates.cc.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_templates.cc > CMakeFiles/api.dir/fieldapi_templates.cc.i

source/api/CMakeFiles/api.dir/fieldapi_templates.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/api.dir/fieldapi_templates.cc.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api/fieldapi_templates.cc -o CMakeFiles/api.dir/fieldapi_templates.cc.s

source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o.requires:

.PHONY : source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o.requires

source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o.provides: source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o.requires
	$(MAKE) -f source/api/CMakeFiles/api.dir/build.make source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o.provides.build
.PHONY : source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o.provides

source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o.provides.build: source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o


# Object files for target api
api_OBJECTS = \
"CMakeFiles/api.dir/bootapi.c.o" \
"CMakeFiles/api.dir/ranuint1.c.o" \
"CMakeFiles/api.dir/ranint4.c.o" \
"CMakeFiles/api.dir/ranreal8.c.o" \
"CMakeFiles/api.dir/testapi.c.o" \
"CMakeFiles/api.dir/mapdim.c.o" \
"CMakeFiles/api.dir/ranpriv.c.o" \
"CMakeFiles/api.dir/fieldapi_common.cc.o" \
"CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o" \
"CMakeFiles/api.dir/fieldapi_interface.cc.o" \
"CMakeFiles/api.dir/fieldapi_templates.cc.o"

# External object files for target api
api_EXTERNAL_OBJECTS =

bin/libapi.a: source/api/CMakeFiles/api.dir/bootapi.c.o
bin/libapi.a: source/api/CMakeFiles/api.dir/ranuint1.c.o
bin/libapi.a: source/api/CMakeFiles/api.dir/ranint4.c.o
bin/libapi.a: source/api/CMakeFiles/api.dir/ranreal8.c.o
bin/libapi.a: source/api/CMakeFiles/api.dir/testapi.c.o
bin/libapi.a: source/api/CMakeFiles/api.dir/mapdim.c.o
bin/libapi.a: source/api/CMakeFiles/api.dir/ranpriv.c.o
bin/libapi.a: source/api/CMakeFiles/api.dir/fieldapi_common.cc.o
bin/libapi.a: source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o
bin/libapi.a: source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o
bin/libapi.a: source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o
bin/libapi.a: source/api/CMakeFiles/api.dir/build.make
bin/libapi.a: source/api/CMakeFiles/api.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX static library ../../bin/libapi.a"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && $(CMAKE_COMMAND) -P CMakeFiles/api.dir/cmake_clean_target.cmake
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/api.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/api/CMakeFiles/api.dir/build: bin/libapi.a

.PHONY : source/api/CMakeFiles/api.dir/build

source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/bootapi.c.o.requires
source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/ranuint1.c.o.requires
source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/ranint4.c.o.requires
source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/ranreal8.c.o.requires
source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/testapi.c.o.requires
source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/mapdim.c.o.requires
source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/ranpriv.c.o.requires
source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/fieldapi_common.cc.o.requires
source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/fieldapi_scalardomaincheck.cc.o.requires
source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/fieldapi_interface.cc.o.requires
source/api/CMakeFiles/api.dir/requires: source/api/CMakeFiles/api.dir/fieldapi_templates.cc.o.requires

.PHONY : source/api/CMakeFiles/api.dir/requires

source/api/CMakeFiles/api.dir/clean:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api && $(CMAKE_COMMAND) -P CMakeFiles/api.dir/cmake_clean.cmake
.PHONY : source/api/CMakeFiles/api.dir/clean

source/api/CMakeFiles/api.dir/depend:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0 /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/api /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/api/CMakeFiles/api.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/api/CMakeFiles/api.dir/depend

