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
CMAKE_SOURCE_DIR = /home/alexdockermother/Documents/AlgorithmInAction

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexdockermother/Documents/AlgorithmInAction/build

# Include any dependencies generated for this target.
include CMakeFiles/Exe2_1_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Exe2_1_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exe2_1_2.dir/flags.make

CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o: CMakeFiles/Exe2_1_2.dir/flags.make
CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o: ../Chapter2/Array/Exe2_1_2.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexdockermother/Documents/AlgorithmInAction/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o -c /home/alexdockermother/Documents/AlgorithmInAction/Chapter2/Array/Exe2_1_2.cc

CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexdockermother/Documents/AlgorithmInAction/Chapter2/Array/Exe2_1_2.cc > CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.i

CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexdockermother/Documents/AlgorithmInAction/Chapter2/Array/Exe2_1_2.cc -o CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.s

CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o.requires:

.PHONY : CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o.requires

CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o.provides: CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o.requires
	$(MAKE) -f CMakeFiles/Exe2_1_2.dir/build.make CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o.provides.build
.PHONY : CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o.provides

CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o.provides.build: CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o


# Object files for target Exe2_1_2
Exe2_1_2_OBJECTS = \
"CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o"

# External object files for target Exe2_1_2
Exe2_1_2_EXTERNAL_OBJECTS =

Exe2_1_2: CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o
Exe2_1_2: CMakeFiles/Exe2_1_2.dir/build.make
Exe2_1_2: CMakeFiles/Exe2_1_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alexdockermother/Documents/AlgorithmInAction/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Exe2_1_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exe2_1_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exe2_1_2.dir/build: Exe2_1_2

.PHONY : CMakeFiles/Exe2_1_2.dir/build

CMakeFiles/Exe2_1_2.dir/requires: CMakeFiles/Exe2_1_2.dir/Chapter2/Array/Exe2_1_2.cc.o.requires

.PHONY : CMakeFiles/Exe2_1_2.dir/requires

CMakeFiles/Exe2_1_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exe2_1_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exe2_1_2.dir/clean

CMakeFiles/Exe2_1_2.dir/depend:
	cd /home/alexdockermother/Documents/AlgorithmInAction/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexdockermother/Documents/AlgorithmInAction /home/alexdockermother/Documents/AlgorithmInAction /home/alexdockermother/Documents/AlgorithmInAction/build /home/alexdockermother/Documents/AlgorithmInAction/build /home/alexdockermother/Documents/AlgorithmInAction/build/CMakeFiles/Exe2_1_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exe2_1_2.dir/depend
