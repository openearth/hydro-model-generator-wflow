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
include source/tab/CMakeFiles/tab.dir/depend.make

# Include the progress variables for this target.
include source/tab/CMakeFiles/tab.dir/progress.make

# Include the compile flags for this target's objects.
include source/tab/CMakeFiles/tab.dir/flags.make

source/tab/CMakeFiles/tab.dir/cross.c.o: source/tab/CMakeFiles/tab.dir/flags.make
source/tab/CMakeFiles/tab.dir/cross.c.o: ../source/tab/cross.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object source/tab/CMakeFiles/tab.dir/cross.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tab.dir/cross.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/cross.c

source/tab/CMakeFiles/tab.dir/cross.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tab.dir/cross.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/cross.c > CMakeFiles/tab.dir/cross.c.i

source/tab/CMakeFiles/tab.dir/cross.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tab.dir/cross.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/cross.c -o CMakeFiles/tab.dir/cross.c.s

source/tab/CMakeFiles/tab.dir/cross.c.o.requires:

.PHONY : source/tab/CMakeFiles/tab.dir/cross.c.o.requires

source/tab/CMakeFiles/tab.dir/cross.c.o.provides: source/tab/CMakeFiles/tab.dir/cross.c.o.requires
	$(MAKE) -f source/tab/CMakeFiles/tab.dir/build.make source/tab/CMakeFiles/tab.dir/cross.c.o.provides.build
.PHONY : source/tab/CMakeFiles/tab.dir/cross.c.o.provides

source/tab/CMakeFiles/tab.dir/cross.c.o.provides.build: source/tab/CMakeFiles/tab.dir/cross.c.o


source/tab/CMakeFiles/tab.dir/looktab.c.o: source/tab/CMakeFiles/tab.dir/flags.make
source/tab/CMakeFiles/tab.dir/looktab.c.o: ../source/tab/looktab.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object source/tab/CMakeFiles/tab.dir/looktab.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tab.dir/looktab.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/looktab.c

source/tab/CMakeFiles/tab.dir/looktab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tab.dir/looktab.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/looktab.c > CMakeFiles/tab.dir/looktab.c.i

source/tab/CMakeFiles/tab.dir/looktab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tab.dir/looktab.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/looktab.c -o CMakeFiles/tab.dir/looktab.c.s

source/tab/CMakeFiles/tab.dir/looktab.c.o.requires:

.PHONY : source/tab/CMakeFiles/tab.dir/looktab.c.o.requires

source/tab/CMakeFiles/tab.dir/looktab.c.o.provides: source/tab/CMakeFiles/tab.dir/looktab.c.o.requires
	$(MAKE) -f source/tab/CMakeFiles/tab.dir/build.make source/tab/CMakeFiles/tab.dir/looktab.c.o.provides.build
.PHONY : source/tab/CMakeFiles/tab.dir/looktab.c.o.provides

source/tab/CMakeFiles/tab.dir/looktab.c.o.provides.build: source/tab/CMakeFiles/tab.dir/looktab.c.o


source/tab/CMakeFiles/tab.dir/lookup.c.o: source/tab/CMakeFiles/tab.dir/flags.make
source/tab/CMakeFiles/tab.dir/lookup.c.o: ../source/tab/lookup.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object source/tab/CMakeFiles/tab.dir/lookup.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tab.dir/lookup.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/lookup.c

source/tab/CMakeFiles/tab.dir/lookup.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tab.dir/lookup.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/lookup.c > CMakeFiles/tab.dir/lookup.c.i

source/tab/CMakeFiles/tab.dir/lookup.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tab.dir/lookup.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/lookup.c -o CMakeFiles/tab.dir/lookup.c.s

source/tab/CMakeFiles/tab.dir/lookup.c.o.requires:

.PHONY : source/tab/CMakeFiles/tab.dir/lookup.c.o.requires

source/tab/CMakeFiles/tab.dir/lookup.c.o.provides: source/tab/CMakeFiles/tab.dir/lookup.c.o.requires
	$(MAKE) -f source/tab/CMakeFiles/tab.dir/build.make source/tab/CMakeFiles/tab.dir/lookup.c.o.provides.build
.PHONY : source/tab/CMakeFiles/tab.dir/lookup.c.o.provides

source/tab/CMakeFiles/tab.dir/lookup.c.o.provides.build: source/tab/CMakeFiles/tab.dir/lookup.c.o


source/tab/CMakeFiles/tab.dir/readltab.c.o: source/tab/CMakeFiles/tab.dir/flags.make
source/tab/CMakeFiles/tab.dir/readltab.c.o: ../source/tab/readltab.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object source/tab/CMakeFiles/tab.dir/readltab.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tab.dir/readltab.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/readltab.c

source/tab/CMakeFiles/tab.dir/readltab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tab.dir/readltab.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/readltab.c > CMakeFiles/tab.dir/readltab.c.i

source/tab/CMakeFiles/tab.dir/readltab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tab.dir/readltab.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/readltab.c -o CMakeFiles/tab.dir/readltab.c.s

source/tab/CMakeFiles/tab.dir/readltab.c.o.requires:

.PHONY : source/tab/CMakeFiles/tab.dir/readltab.c.o.requires

source/tab/CMakeFiles/tab.dir/readltab.c.o.provides: source/tab/CMakeFiles/tab.dir/readltab.c.o.requires
	$(MAKE) -f source/tab/CMakeFiles/tab.dir/build.make source/tab/CMakeFiles/tab.dir/readltab.c.o.provides.build
.PHONY : source/tab/CMakeFiles/tab.dir/readltab.c.o.provides

source/tab/CMakeFiles/tab.dir/readltab.c.o.provides.build: source/tab/CMakeFiles/tab.dir/readltab.c.o


source/tab/CMakeFiles/tab.dir/table.c.o: source/tab/CMakeFiles/tab.dir/flags.make
source/tab/CMakeFiles/tab.dir/table.c.o: ../source/tab/table.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object source/tab/CMakeFiles/tab.dir/table.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tab.dir/table.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/table.c

source/tab/CMakeFiles/tab.dir/table.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tab.dir/table.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/table.c > CMakeFiles/tab.dir/table.c.i

source/tab/CMakeFiles/tab.dir/table.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tab.dir/table.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/table.c -o CMakeFiles/tab.dir/table.c.s

source/tab/CMakeFiles/tab.dir/table.c.o.requires:

.PHONY : source/tab/CMakeFiles/tab.dir/table.c.o.requires

source/tab/CMakeFiles/tab.dir/table.c.o.provides: source/tab/CMakeFiles/tab.dir/table.c.o.requires
	$(MAKE) -f source/tab/CMakeFiles/tab.dir/build.make source/tab/CMakeFiles/tab.dir/table.c.o.provides.build
.PHONY : source/tab/CMakeFiles/tab.dir/table.c.o.provides

source/tab/CMakeFiles/tab.dir/table.c.o.provides.build: source/tab/CMakeFiles/tab.dir/table.c.o


source/tab/CMakeFiles/tab.dir/writltab.c.o: source/tab/CMakeFiles/tab.dir/flags.make
source/tab/CMakeFiles/tab.dir/writltab.c.o: ../source/tab/writltab.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object source/tab/CMakeFiles/tab.dir/writltab.c.o"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tab.dir/writltab.c.o   -c /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/writltab.c

source/tab/CMakeFiles/tab.dir/writltab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tab.dir/writltab.c.i"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/writltab.c > CMakeFiles/tab.dir/writltab.c.i

source/tab/CMakeFiles/tab.dir/writltab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tab.dir/writltab.c.s"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab/writltab.c -o CMakeFiles/tab.dir/writltab.c.s

source/tab/CMakeFiles/tab.dir/writltab.c.o.requires:

.PHONY : source/tab/CMakeFiles/tab.dir/writltab.c.o.requires

source/tab/CMakeFiles/tab.dir/writltab.c.o.provides: source/tab/CMakeFiles/tab.dir/writltab.c.o.requires
	$(MAKE) -f source/tab/CMakeFiles/tab.dir/build.make source/tab/CMakeFiles/tab.dir/writltab.c.o.provides.build
.PHONY : source/tab/CMakeFiles/tab.dir/writltab.c.o.provides

source/tab/CMakeFiles/tab.dir/writltab.c.o.provides.build: source/tab/CMakeFiles/tab.dir/writltab.c.o


# Object files for target tab
tab_OBJECTS = \
"CMakeFiles/tab.dir/cross.c.o" \
"CMakeFiles/tab.dir/looktab.c.o" \
"CMakeFiles/tab.dir/lookup.c.o" \
"CMakeFiles/tab.dir/readltab.c.o" \
"CMakeFiles/tab.dir/table.c.o" \
"CMakeFiles/tab.dir/writltab.c.o"

# External object files for target tab
tab_EXTERNAL_OBJECTS =

bin/libtab.a: source/tab/CMakeFiles/tab.dir/cross.c.o
bin/libtab.a: source/tab/CMakeFiles/tab.dir/looktab.c.o
bin/libtab.a: source/tab/CMakeFiles/tab.dir/lookup.c.o
bin/libtab.a: source/tab/CMakeFiles/tab.dir/readltab.c.o
bin/libtab.a: source/tab/CMakeFiles/tab.dir/table.c.o
bin/libtab.a: source/tab/CMakeFiles/tab.dir/writltab.c.o
bin/libtab.a: source/tab/CMakeFiles/tab.dir/build.make
bin/libtab.a: source/tab/CMakeFiles/tab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library ../../bin/libtab.a"
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && $(CMAKE_COMMAND) -P CMakeFiles/tab.dir/cmake_clean_target.cmake
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/tab/CMakeFiles/tab.dir/build: bin/libtab.a

.PHONY : source/tab/CMakeFiles/tab.dir/build

source/tab/CMakeFiles/tab.dir/requires: source/tab/CMakeFiles/tab.dir/cross.c.o.requires
source/tab/CMakeFiles/tab.dir/requires: source/tab/CMakeFiles/tab.dir/looktab.c.o.requires
source/tab/CMakeFiles/tab.dir/requires: source/tab/CMakeFiles/tab.dir/lookup.c.o.requires
source/tab/CMakeFiles/tab.dir/requires: source/tab/CMakeFiles/tab.dir/readltab.c.o.requires
source/tab/CMakeFiles/tab.dir/requires: source/tab/CMakeFiles/tab.dir/table.c.o.requires
source/tab/CMakeFiles/tab.dir/requires: source/tab/CMakeFiles/tab.dir/writltab.c.o.requires

.PHONY : source/tab/CMakeFiles/tab.dir/requires

source/tab/CMakeFiles/tab.dir/clean:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab && $(CMAKE_COMMAND) -P CMakeFiles/tab.dir/cmake_clean.cmake
.PHONY : source/tab/CMakeFiles/tab.dir/clean

source/tab/CMakeFiles/tab.dir/depend:
	cd /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0 /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/source/tab /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab /opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/source/tab/CMakeFiles/tab.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/tab/CMakeFiles/tab.dir/depend

