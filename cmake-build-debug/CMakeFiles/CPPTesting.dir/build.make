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
CMAKE_COMMAND = /private/var/folders/_m/mn0ddpnj3hs2ly4zb2y44cmw0000gn/T/AppTranslocation/21A29E79-3688-403C-96A5-11881C1807B3/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/_m/mn0ddpnj3hs2ly4zb2y44cmw0000gn/T/AppTranslocation/21A29E79-3688-403C-96A5-11881C1807B3/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/EpicChicken/CLionProjects/CPPTesting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CPPTesting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CPPTesting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPPTesting.dir/flags.make

CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o: ../src/Mainclass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Mainclass.cpp

CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Mainclass.cpp > CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.i

CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Mainclass.cpp -o CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.s

CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o: ../src/Iohandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Iohandler.cpp

CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Iohandler.cpp > CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.i

CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Iohandler.cpp -o CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.s

CMakeFiles/CPPTesting.dir/src/Main.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Main.cpp.o: ../src/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CPPTesting.dir/src/Main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Main.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Main.cpp

CMakeFiles/CPPTesting.dir/src/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Main.cpp > CMakeFiles/CPPTesting.dir/src/Main.cpp.i

CMakeFiles/CPPTesting.dir/src/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Main.cpp -o CMakeFiles/CPPTesting.dir/src/Main.cpp.s

CMakeFiles/CPPTesting.dir/src/Pch.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Pch.cpp.o: ../src/Pch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CPPTesting.dir/src/Pch.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Pch.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Pch.cpp

CMakeFiles/CPPTesting.dir/src/Pch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Pch.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Pch.cpp > CMakeFiles/CPPTesting.dir/src/Pch.cpp.i

CMakeFiles/CPPTesting.dir/src/Pch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Pch.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Pch.cpp -o CMakeFiles/CPPTesting.dir/src/Pch.cpp.s

CMakeFiles/CPPTesting.dir/src/Entity.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Entity.cpp.o: ../src/Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CPPTesting.dir/src/Entity.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Entity.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Entity.cpp

CMakeFiles/CPPTesting.dir/src/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Entity.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Entity.cpp > CMakeFiles/CPPTesting.dir/src/Entity.cpp.i

CMakeFiles/CPPTesting.dir/src/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Entity.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Entity.cpp -o CMakeFiles/CPPTesting.dir/src/Entity.cpp.s

CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o: ../src/Hitbox.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Hitbox.cpp

CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Hitbox.cpp > CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.i

CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Hitbox.cpp -o CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.s

# Object files for target CPPTesting
CPPTesting_OBJECTS = \
"CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Main.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Pch.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Entity.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o"

# External object files for target CPPTesting
CPPTesting_EXTERNAL_OBJECTS =

CPPTesting: CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Main.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Pch.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Entity.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/build.make
CPPTesting: /usr/local/lib/libsfml-graphics.2.5.1.dylib
CPPTesting: /usr/local/lib/libsfml-audio.2.5.1.dylib
CPPTesting: /usr/local/lib/libsfml-window.2.5.1.dylib
CPPTesting: /usr/local/lib/libsfml-system.2.5.1.dylib
CPPTesting: CMakeFiles/CPPTesting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable CPPTesting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPPTesting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPPTesting.dir/build: CPPTesting

.PHONY : CMakeFiles/CPPTesting.dir/build

CMakeFiles/CPPTesting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPPTesting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPPTesting.dir/clean

CMakeFiles/CPPTesting.dir/depend:
	cd /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/EpicChicken/CLionProjects/CPPTesting /Users/EpicChicken/CLionProjects/CPPTesting /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles/CPPTesting.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPPTesting.dir/depend

