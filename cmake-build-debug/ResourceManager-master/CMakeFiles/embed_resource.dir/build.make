# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /private/var/folders/_m/mn0ddpnj3hs2ly4zb2y44cmw0000gn/T/AppTranslocation/4B9B7856-601A-4C31-97F4-0B68283A0E7D/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/_m/mn0ddpnj3hs2ly4zb2y44cmw0000gn/T/AppTranslocation/4B9B7856-601A-4C31-97F4-0B68283A0E7D/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/EpicChicken/CLionProjects/CPPTesting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug

# Include any dependencies generated for this target.
include ResourceManager-master/CMakeFiles/embed_resource.dir/depend.make

# Include the progress variables for this target.
include ResourceManager-master/CMakeFiles/embed_resource.dir/progress.make

# Include the compile flags for this target's objects.
include ResourceManager-master/CMakeFiles/embed_resource.dir/flags.make

ResourceManager-master/CMakeFiles/embed_resource.dir/src/embed_resource.cpp.o: ResourceManager-master/CMakeFiles/embed_resource.dir/flags.make
ResourceManager-master/CMakeFiles/embed_resource.dir/src/embed_resource.cpp.o: ../ResourceManager-master/src/embed_resource.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ResourceManager-master/CMakeFiles/embed_resource.dir/src/embed_resource.cpp.o"
	cd /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/ResourceManager-master && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/embed_resource.dir/src/embed_resource.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/ResourceManager-master/src/embed_resource.cpp

ResourceManager-master/CMakeFiles/embed_resource.dir/src/embed_resource.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/embed_resource.dir/src/embed_resource.cpp.i"
	cd /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/ResourceManager-master && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/EpicChicken/CLionProjects/CPPTesting/ResourceManager-master/src/embed_resource.cpp > CMakeFiles/embed_resource.dir/src/embed_resource.cpp.i

ResourceManager-master/CMakeFiles/embed_resource.dir/src/embed_resource.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/embed_resource.dir/src/embed_resource.cpp.s"
	cd /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/ResourceManager-master && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/EpicChicken/CLionProjects/CPPTesting/ResourceManager-master/src/embed_resource.cpp -o CMakeFiles/embed_resource.dir/src/embed_resource.cpp.s

# Object files for target embed_resource
embed_resource_OBJECTS = \
"CMakeFiles/embed_resource.dir/src/embed_resource.cpp.o"

# External object files for target embed_resource
embed_resource_EXTERNAL_OBJECTS =

ResourceManager-master/embed_resource: ResourceManager-master/CMakeFiles/embed_resource.dir/src/embed_resource.cpp.o
ResourceManager-master/embed_resource: ResourceManager-master/CMakeFiles/embed_resource.dir/build.make
ResourceManager-master/embed_resource: ResourceManager-master/CMakeFiles/embed_resource.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable embed_resource"
	cd /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/ResourceManager-master && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/embed_resource.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ResourceManager-master/CMakeFiles/embed_resource.dir/build: ResourceManager-master/embed_resource

.PHONY : ResourceManager-master/CMakeFiles/embed_resource.dir/build

ResourceManager-master/CMakeFiles/embed_resource.dir/clean:
	cd /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/ResourceManager-master && $(CMAKE_COMMAND) -P CMakeFiles/embed_resource.dir/cmake_clean.cmake
.PHONY : ResourceManager-master/CMakeFiles/embed_resource.dir/clean

ResourceManager-master/CMakeFiles/embed_resource.dir/depend:
	cd /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/EpicChicken/CLionProjects/CPPTesting /Users/EpicChicken/CLionProjects/CPPTesting/ResourceManager-master /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/ResourceManager-master /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/ResourceManager-master/CMakeFiles/embed_resource.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ResourceManager-master/CMakeFiles/embed_resource.dir/depend
