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
CMAKE_COMMAND = /private/var/folders/_m/mn0ddpnj3hs2ly4zb2y44cmw0000gn/T/AppTranslocation/09762603-8B59-4D05-96B1-BB8C7F5119F4/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/_m/mn0ddpnj3hs2ly4zb2y44cmw0000gn/T/AppTranslocation/09762603-8B59-4D05-96B1-BB8C7F5119F4/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/EpicChicken/CLionProjects/CPPTesting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pch.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pch.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pch.dir/flags.make

CMakeFiles/pch.dir/src/Pch.cpp.o: CMakeFiles/pch.dir/flags.make
CMakeFiles/pch.dir/src/Pch.cpp.o: ../src/Pch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pch.dir/src/Pch.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/pch.dir/src/Pch.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Pch.cpp

CMakeFiles/pch.dir/src/Pch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pch.dir/src/Pch.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Pch.cpp > CMakeFiles/pch.dir/src/Pch.cpp.i

CMakeFiles/pch.dir/src/Pch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pch.dir/src/Pch.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Pch.cpp -o CMakeFiles/pch.dir/src/Pch.cpp.s

# Object files for target pch
pch_OBJECTS = \
"CMakeFiles/pch.dir/src/Pch.cpp.o"

# External object files for target pch
pch_EXTERNAL_OBJECTS =

libpch.a: CMakeFiles/pch.dir/src/Pch.cpp.o
libpch.a: CMakeFiles/pch.dir/build.make
libpch.a: CMakeFiles/pch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libpch.a"
	$(CMAKE_COMMAND) -P CMakeFiles/pch.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pch.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pch.dir/build: libpch.a

.PHONY : CMakeFiles/pch.dir/build

CMakeFiles/pch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pch.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pch.dir/clean

CMakeFiles/pch.dir/depend:
	cd /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/EpicChicken/CLionProjects/CPPTesting /Users/EpicChicken/CLionProjects/CPPTesting /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles/pch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pch.dir/depend

