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
include source/misc/CMakeFiles/misc.dir/depend.make

# Include the progress variables for this target.
include source/misc/CMakeFiles/misc.dir/progress.make

# Include the compile flags for this target's objects.
include source/misc/CMakeFiles/misc.dir/flags.make

source/misc/CMakeFiles/misc.dir/aterror.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/aterror.c.o: ../source/misc/aterror.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object source/misc/CMakeFiles/misc.dir/aterror.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/aterror.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/aterror.c

source/misc/CMakeFiles/misc.dir/aterror.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/aterror.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/aterror.c > CMakeFiles/misc.dir/aterror.c.i

source/misc/CMakeFiles/misc.dir/aterror.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/aterror.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/aterror.c -o CMakeFiles/misc.dir/aterror.c.s

source/misc/CMakeFiles/misc.dir/aterror.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/aterror.c.o.requires

source/misc/CMakeFiles/misc.dir/aterror.c.o.provides: source/misc/CMakeFiles/misc.dir/aterror.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/aterror.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/aterror.c.o.provides

source/misc/CMakeFiles/misc.dir/aterror.c.o.provides.build: source/misc/CMakeFiles/misc.dir/aterror.c.o


source/misc/CMakeFiles/misc.dir/bitset2d.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/bitset2d.c.o: ../source/misc/bitset2d.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object source/misc/CMakeFiles/misc.dir/bitset2d.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/bitset2d.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/bitset2d.c

source/misc/CMakeFiles/misc.dir/bitset2d.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/bitset2d.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/bitset2d.c > CMakeFiles/misc.dir/bitset2d.c.i

source/misc/CMakeFiles/misc.dir/bitset2d.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/bitset2d.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/bitset2d.c -o CMakeFiles/misc.dir/bitset2d.c.s

source/misc/CMakeFiles/misc.dir/bitset2d.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/bitset2d.c.o.requires

source/misc/CMakeFiles/misc.dir/bitset2d.c.o.provides: source/misc/CMakeFiles/misc.dir/bitset2d.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/bitset2d.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/bitset2d.c.o.provides

source/misc/CMakeFiles/misc.dir/bitset2d.c.o.provides.build: source/misc/CMakeFiles/misc.dir/bitset2d.c.o


source/misc/CMakeFiles/misc.dir/bitset.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/bitset.c.o: ../source/misc/bitset.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object source/misc/CMakeFiles/misc.dir/bitset.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/bitset.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/bitset.c

source/misc/CMakeFiles/misc.dir/bitset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/bitset.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/bitset.c > CMakeFiles/misc.dir/bitset.c.i

source/misc/CMakeFiles/misc.dir/bitset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/bitset.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/bitset.c -o CMakeFiles/misc.dir/bitset.c.s

source/misc/CMakeFiles/misc.dir/bitset.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/bitset.c.o.requires

source/misc/CMakeFiles/misc.dir/bitset.c.o.provides: source/misc/CMakeFiles/misc.dir/bitset.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/bitset.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/bitset.c.o.provides

source/misc/CMakeFiles/misc.dir/bitset.c.o.provides.build: source/misc/CMakeFiles/misc.dir/bitset.c.o


source/misc/CMakeFiles/misc.dir/chkmem.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/chkmem.c.o: ../source/misc/chkmem.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object source/misc/CMakeFiles/misc.dir/chkmem.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/chkmem.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/chkmem.c

source/misc/CMakeFiles/misc.dir/chkmem.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/chkmem.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/chkmem.c > CMakeFiles/misc.dir/chkmem.c.i

source/misc/CMakeFiles/misc.dir/chkmem.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/chkmem.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/chkmem.c -o CMakeFiles/misc.dir/chkmem.c.s

source/misc/CMakeFiles/misc.dir/chkmem.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/chkmem.c.o.requires

source/misc/CMakeFiles/misc.dir/chkmem.c.o.provides: source/misc/CMakeFiles/misc.dir/chkmem.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/chkmem.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/chkmem.c.o.provides

source/misc/CMakeFiles/misc.dir/chkmem.c.o.provides.build: source/misc/CMakeFiles/misc.dir/chkmem.c.o


source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o: ../source/misc/cnvrtnum.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/cnvrtnum.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/cnvrtnum.c

source/misc/CMakeFiles/misc.dir/cnvrtnum.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/cnvrtnum.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/cnvrtnum.c > CMakeFiles/misc.dir/cnvrtnum.c.i

source/misc/CMakeFiles/misc.dir/cnvrtnum.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/cnvrtnum.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/cnvrtnum.c -o CMakeFiles/misc.dir/cnvrtnum.c.s

source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o.requires

source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o.provides: source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o.provides

source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o.provides.build: source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o


source/misc/CMakeFiles/misc.dir/error.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/error.c.o: ../source/misc/error.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object source/misc/CMakeFiles/misc.dir/error.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/error.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/error.c

source/misc/CMakeFiles/misc.dir/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/error.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/error.c > CMakeFiles/misc.dir/error.c.i

source/misc/CMakeFiles/misc.dir/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/error.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/error.c -o CMakeFiles/misc.dir/error.c.s

source/misc/CMakeFiles/misc.dir/error.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/error.c.o.requires

source/misc/CMakeFiles/misc.dir/error.c.o.provides: source/misc/CMakeFiles/misc.dir/error.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/error.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/error.c.o.provides

source/misc/CMakeFiles/misc.dir/error.c.o.provides.build: source/misc/CMakeFiles/misc.dir/error.c.o


source/misc/CMakeFiles/misc.dir/exstring.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/exstring.c.o: ../source/misc/exstring.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object source/misc/CMakeFiles/misc.dir/exstring.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/exstring.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/exstring.c

source/misc/CMakeFiles/misc.dir/exstring.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/exstring.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/exstring.c > CMakeFiles/misc.dir/exstring.c.i

source/misc/CMakeFiles/misc.dir/exstring.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/exstring.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/exstring.c -o CMakeFiles/misc.dir/exstring.c.s

source/misc/CMakeFiles/misc.dir/exstring.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/exstring.c.o.requires

source/misc/CMakeFiles/misc.dir/exstring.c.o.provides: source/misc/CMakeFiles/misc.dir/exstring.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/exstring.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/exstring.c.o.provides

source/misc/CMakeFiles/misc.dir/exstring.c.o.provides.build: source/misc/CMakeFiles/misc.dir/exstring.c.o


source/misc/CMakeFiles/misc.dir/fileio.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/fileio.c.o: ../source/misc/fileio.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object source/misc/CMakeFiles/misc.dir/fileio.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/fileio.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/fileio.c

source/misc/CMakeFiles/misc.dir/fileio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/fileio.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/fileio.c > CMakeFiles/misc.dir/fileio.c.i

source/misc/CMakeFiles/misc.dir/fileio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/fileio.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/fileio.c -o CMakeFiles/misc.dir/fileio.c.s

source/misc/CMakeFiles/misc.dir/fileio.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/fileio.c.o.requires

source/misc/CMakeFiles/misc.dir/fileio.c.o.provides: source/misc/CMakeFiles/misc.dir/fileio.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/fileio.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/fileio.c.o.provides

source/misc/CMakeFiles/misc.dir/fileio.c.o.provides.build: source/misc/CMakeFiles/misc.dir/fileio.c.o


source/misc/CMakeFiles/misc.dir/fileset.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/fileset.c.o: ../source/misc/fileset.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object source/misc/CMakeFiles/misc.dir/fileset.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/fileset.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/fileset.c

source/misc/CMakeFiles/misc.dir/fileset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/fileset.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/fileset.c > CMakeFiles/misc.dir/fileset.c.i

source/misc/CMakeFiles/misc.dir/fileset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/fileset.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/fileset.c -o CMakeFiles/misc.dir/fileset.c.s

source/misc/CMakeFiles/misc.dir/fileset.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/fileset.c.o.requires

source/misc/CMakeFiles/misc.dir/fileset.c.o.provides: source/misc/CMakeFiles/misc.dir/fileset.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/fileset.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/fileset.c.o.provides

source/misc/CMakeFiles/misc.dir/fileset.c.o.provides.build: source/misc/CMakeFiles/misc.dir/fileset.c.o


source/misc/CMakeFiles/misc.dir/filestat.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/filestat.c.o: ../source/misc/filestat.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object source/misc/CMakeFiles/misc.dir/filestat.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/filestat.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/filestat.c

source/misc/CMakeFiles/misc.dir/filestat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/filestat.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/filestat.c > CMakeFiles/misc.dir/filestat.c.i

source/misc/CMakeFiles/misc.dir/filestat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/filestat.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/filestat.c -o CMakeFiles/misc.dir/filestat.c.s

source/misc/CMakeFiles/misc.dir/filestat.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/filestat.c.o.requires

source/misc/CMakeFiles/misc.dir/filestat.c.o.provides: source/misc/CMakeFiles/misc.dir/filestat.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/filestat.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/filestat.c.o.provides

source/misc/CMakeFiles/misc.dir/filestat.c.o.provides.build: source/misc/CMakeFiles/misc.dir/filestat.c.o


source/misc/CMakeFiles/misc.dir/mallocxd.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/mallocxd.c.o: ../source/misc/mallocxd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object source/misc/CMakeFiles/misc.dir/mallocxd.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/mallocxd.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/mallocxd.c

source/misc/CMakeFiles/misc.dir/mallocxd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/mallocxd.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/mallocxd.c > CMakeFiles/misc.dir/mallocxd.c.i

source/misc/CMakeFiles/misc.dir/mallocxd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/mallocxd.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/mallocxd.c -o CMakeFiles/misc.dir/mallocxd.c.s

source/misc/CMakeFiles/misc.dir/mallocxd.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/mallocxd.c.o.requires

source/misc/CMakeFiles/misc.dir/mallocxd.c.o.provides: source/misc/CMakeFiles/misc.dir/mallocxd.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/mallocxd.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/mallocxd.c.o.provides

source/misc/CMakeFiles/misc.dir/mallocxd.c.o.provides.build: source/misc/CMakeFiles/misc.dir/mallocxd.c.o


source/misc/CMakeFiles/misc.dir/qsortcmp.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/qsortcmp.c.o: ../source/misc/qsortcmp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object source/misc/CMakeFiles/misc.dir/qsortcmp.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/qsortcmp.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/qsortcmp.c

source/misc/CMakeFiles/misc.dir/qsortcmp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/qsortcmp.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/qsortcmp.c > CMakeFiles/misc.dir/qsortcmp.c.i

source/misc/CMakeFiles/misc.dir/qsortcmp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/qsortcmp.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/qsortcmp.c -o CMakeFiles/misc.dir/qsortcmp.c.s

source/misc/CMakeFiles/misc.dir/qsortcmp.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/qsortcmp.c.o.requires

source/misc/CMakeFiles/misc.dir/qsortcmp.c.o.provides: source/misc/CMakeFiles/misc.dir/qsortcmp.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/qsortcmp.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/qsortcmp.c.o.provides

source/misc/CMakeFiles/misc.dir/qsortcmp.c.o.provides.build: source/misc/CMakeFiles/misc.dir/qsortcmp.c.o


source/misc/CMakeFiles/misc.dir/recmem.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/recmem.c.o: ../source/misc/recmem.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object source/misc/CMakeFiles/misc.dir/recmem.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/recmem.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/recmem.c

source/misc/CMakeFiles/misc.dir/recmem.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/recmem.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/recmem.c > CMakeFiles/misc.dir/recmem.c.i

source/misc/CMakeFiles/misc.dir/recmem.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/recmem.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/recmem.c -o CMakeFiles/misc.dir/recmem.c.s

source/misc/CMakeFiles/misc.dir/recmem.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/recmem.c.o.requires

source/misc/CMakeFiles/misc.dir/recmem.c.o.provides: source/misc/CMakeFiles/misc.dir/recmem.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/recmem.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/recmem.c.o.provides

source/misc/CMakeFiles/misc.dir/recmem.c.o.provides.build: source/misc/CMakeFiles/misc.dir/recmem.c.o


source/misc/CMakeFiles/misc.dir/simplex.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/simplex.c.o: ../source/misc/simplex.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object source/misc/CMakeFiles/misc.dir/simplex.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/simplex.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/simplex.c

source/misc/CMakeFiles/misc.dir/simplex.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/simplex.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/simplex.c > CMakeFiles/misc.dir/simplex.c.i

source/misc/CMakeFiles/misc.dir/simplex.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/simplex.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/simplex.c -o CMakeFiles/misc.dir/simplex.c.s

source/misc/CMakeFiles/misc.dir/simplex.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/simplex.c.o.requires

source/misc/CMakeFiles/misc.dir/simplex.c.o.provides: source/misc/CMakeFiles/misc.dir/simplex.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/simplex.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/simplex.c.o.provides

source/misc/CMakeFiles/misc.dir/simplex.c.o.provides.build: source/misc/CMakeFiles/misc.dir/simplex.c.o


source/misc/CMakeFiles/misc.dir/swapbyte.c.o: source/misc/CMakeFiles/misc.dir/flags.make
source/misc/CMakeFiles/misc.dir/swapbyte.c.o: ../source/misc/swapbyte.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object source/misc/CMakeFiles/misc.dir/swapbyte.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/misc.dir/swapbyte.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/swapbyte.c

source/misc/CMakeFiles/misc.dir/swapbyte.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/misc.dir/swapbyte.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/swapbyte.c > CMakeFiles/misc.dir/swapbyte.c.i

source/misc/CMakeFiles/misc.dir/swapbyte.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/misc.dir/swapbyte.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc/swapbyte.c -o CMakeFiles/misc.dir/swapbyte.c.s

source/misc/CMakeFiles/misc.dir/swapbyte.c.o.requires:

.PHONY : source/misc/CMakeFiles/misc.dir/swapbyte.c.o.requires

source/misc/CMakeFiles/misc.dir/swapbyte.c.o.provides: source/misc/CMakeFiles/misc.dir/swapbyte.c.o.requires
	$(MAKE) -f source/misc/CMakeFiles/misc.dir/build.make source/misc/CMakeFiles/misc.dir/swapbyte.c.o.provides.build
.PHONY : source/misc/CMakeFiles/misc.dir/swapbyte.c.o.provides

source/misc/CMakeFiles/misc.dir/swapbyte.c.o.provides.build: source/misc/CMakeFiles/misc.dir/swapbyte.c.o


# Object files for target misc
misc_OBJECTS = \
"CMakeFiles/misc.dir/aterror.c.o" \
"CMakeFiles/misc.dir/bitset2d.c.o" \
"CMakeFiles/misc.dir/bitset.c.o" \
"CMakeFiles/misc.dir/chkmem.c.o" \
"CMakeFiles/misc.dir/cnvrtnum.c.o" \
"CMakeFiles/misc.dir/error.c.o" \
"CMakeFiles/misc.dir/exstring.c.o" \
"CMakeFiles/misc.dir/fileio.c.o" \
"CMakeFiles/misc.dir/fileset.c.o" \
"CMakeFiles/misc.dir/filestat.c.o" \
"CMakeFiles/misc.dir/mallocxd.c.o" \
"CMakeFiles/misc.dir/qsortcmp.c.o" \
"CMakeFiles/misc.dir/recmem.c.o" \
"CMakeFiles/misc.dir/simplex.c.o" \
"CMakeFiles/misc.dir/swapbyte.c.o"

# External object files for target misc
misc_EXTERNAL_OBJECTS =

bin/libmisc.a: source/misc/CMakeFiles/misc.dir/aterror.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/bitset2d.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/bitset.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/chkmem.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/error.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/exstring.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/fileio.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/fileset.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/filestat.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/mallocxd.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/qsortcmp.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/recmem.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/simplex.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/swapbyte.c.o
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/build.make
bin/libmisc.a: source/misc/CMakeFiles/misc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking C static library ../../bin/libmisc.a"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && $(CMAKE_COMMAND) -P CMakeFiles/misc.dir/cmake_clean_target.cmake
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/misc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/misc/CMakeFiles/misc.dir/build: bin/libmisc.a

.PHONY : source/misc/CMakeFiles/misc.dir/build

source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/aterror.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/bitset2d.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/bitset.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/chkmem.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/cnvrtnum.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/error.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/exstring.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/fileio.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/fileset.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/filestat.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/mallocxd.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/qsortcmp.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/recmem.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/simplex.c.o.requires
source/misc/CMakeFiles/misc.dir/requires: source/misc/CMakeFiles/misc.dir/swapbyte.c.o.requires

.PHONY : source/misc/CMakeFiles/misc.dir/requires

source/misc/CMakeFiles/misc.dir/clean:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc && $(CMAKE_COMMAND) -P CMakeFiles/misc.dir/cmake_clean.cmake
.PHONY : source/misc/CMakeFiles/misc.dir/clean

source/misc/CMakeFiles/misc.dir/depend:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0 /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/misc /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/misc/CMakeFiles/misc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/misc/CMakeFiles/misc.dir/depend

