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
include CMakeFiles/CPPTesting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CPPTesting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPPTesting.dir/flags.make

RM_generated_files/resources/sheet.png.cpp: ../resources/sheet.png
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating RM_generated_files/resources/sheet.png.cpp"
	/private/var/folders/_m/mn0ddpnj3hs2ly4zb2y44cmw0000gn/T/AppTranslocation/09762603-8B59-4D05-96B1-BB8C7F5119F4/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E make_directory RM_generated_files/resources
	ResourceManager-master/embed_resource -data resources/sheet.png ../resources/sheet.png RM_generated_files/resources/sheet.png.cpp

RM_generated_files/maps/map1.csv.cpp: ../maps/map1.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating RM_generated_files/maps/map1.csv.cpp"
	/private/var/folders/_m/mn0ddpnj3hs2ly4zb2y44cmw0000gn/T/AppTranslocation/09762603-8B59-4D05-96B1-BB8C7F5119F4/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E make_directory RM_generated_files/maps
	ResourceManager-master/embed_resource -data maps/map1.csv ../maps/map1.csv RM_generated_files/maps/map1.csv.cpp

RM_generated_files/maps/map2.csv.cpp: ../maps/map2.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating RM_generated_files/maps/map2.csv.cpp"
	/private/var/folders/_m/mn0ddpnj3hs2ly4zb2y44cmw0000gn/T/AppTranslocation/09762603-8B59-4D05-96B1-BB8C7F5119F4/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E make_directory RM_generated_files/maps
	ResourceManager-master/embed_resource -data maps/map2.csv ../maps/map2.csv RM_generated_files/maps/map2.csv.cpp

RM_generated_files/maps/map3.csv.cpp: ../maps/map3.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating RM_generated_files/maps/map3.csv.cpp"
	/private/var/folders/_m/mn0ddpnj3hs2ly4zb2y44cmw0000gn/T/AppTranslocation/09762603-8B59-4D05-96B1-BB8C7F5119F4/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E make_directory RM_generated_files/maps
	ResourceManager-master/embed_resource -data maps/map3.csv ../maps/map3.csv RM_generated_files/maps/map3.csv.cpp

RM_generated_files/__resources__config.cpp: RM_generated_files/resources/sheet.png.cpp
RM_generated_files/__resources__config.cpp: RM_generated_files/maps/map1.csv.cpp
RM_generated_files/__resources__config.cpp: RM_generated_files/maps/map2.csv.cpp
RM_generated_files/__resources__config.cpp: RM_generated_files/maps/map3.csv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating RM_generated_files/__resources__config.cpp"
	ResourceManager-master/embed_resource -config "resources/sheet.png;maps/map1.csv;maps/map2.csv;maps/map3.csv" RM_generated_files/__resources__config.cpp

CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o: ../src/Mainclass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Mainclass.cpp

CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Mainclass.cpp > CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.i

CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Mainclass.cpp -o CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.s

CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o: ../src/Iohandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Iohandler.cpp

CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Iohandler.cpp > CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.i

CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Iohandler.cpp -o CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.s

CMakeFiles/CPPTesting.dir/src/Main.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Main.cpp.o: ../src/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/CPPTesting.dir/src/Main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Main.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Main.cpp

CMakeFiles/CPPTesting.dir/src/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Main.cpp > CMakeFiles/CPPTesting.dir/src/Main.cpp.i

CMakeFiles/CPPTesting.dir/src/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Main.cpp -o CMakeFiles/CPPTesting.dir/src/Main.cpp.s

CMakeFiles/CPPTesting.dir/src/Pch.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Pch.cpp.o: ../src/Pch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/CPPTesting.dir/src/Pch.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Pch.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Pch.cpp

CMakeFiles/CPPTesting.dir/src/Pch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Pch.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Pch.cpp > CMakeFiles/CPPTesting.dir/src/Pch.cpp.i

CMakeFiles/CPPTesting.dir/src/Pch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Pch.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Pch.cpp -o CMakeFiles/CPPTesting.dir/src/Pch.cpp.s

CMakeFiles/CPPTesting.dir/src/Entity.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Entity.cpp.o: ../src/Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/CPPTesting.dir/src/Entity.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Entity.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Entity.cpp

CMakeFiles/CPPTesting.dir/src/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Entity.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Entity.cpp > CMakeFiles/CPPTesting.dir/src/Entity.cpp.i

CMakeFiles/CPPTesting.dir/src/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Entity.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Entity.cpp -o CMakeFiles/CPPTesting.dir/src/Entity.cpp.s

CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o: ../src/Hitbox.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Hitbox.cpp

CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Hitbox.cpp > CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.i

CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Hitbox.cpp -o CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.s

CMakeFiles/CPPTesting.dir/src/Player.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/CPPTesting.dir/src/Player.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Player.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Player.cpp

CMakeFiles/CPPTesting.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Player.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Player.cpp > CMakeFiles/CPPTesting.dir/src/Player.cpp.i

CMakeFiles/CPPTesting.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Player.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Player.cpp -o CMakeFiles/CPPTesting.dir/src/Player.cpp.s

CMakeFiles/CPPTesting.dir/src/Global.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Global.cpp.o: ../src/Global.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/CPPTesting.dir/src/Global.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Global.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Global.cpp

CMakeFiles/CPPTesting.dir/src/Global.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Global.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Global.cpp > CMakeFiles/CPPTesting.dir/src/Global.cpp.i

CMakeFiles/CPPTesting.dir/src/Global.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Global.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Global.cpp -o CMakeFiles/CPPTesting.dir/src/Global.cpp.s

CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.o: ../src/DustCloud.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/DustCloud.cpp

CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/DustCloud.cpp > CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.i

CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/DustCloud.cpp -o CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.s

CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.o: ../src/CrackedBlock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/CrackedBlock.cpp

CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/CrackedBlock.cpp > CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.i

CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/CrackedBlock.cpp -o CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.s

CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.o: ../src/RainCloud.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/RainCloud.cpp

CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/RainCloud.cpp > CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.i

CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/RainCloud.cpp -o CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.s

CMakeFiles/CPPTesting.dir/src/Rain.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Rain.cpp.o: ../src/Rain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/CPPTesting.dir/src/Rain.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Rain.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Rain.cpp

CMakeFiles/CPPTesting.dir/src/Rain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Rain.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Rain.cpp > CMakeFiles/CPPTesting.dir/src/Rain.cpp.i

CMakeFiles/CPPTesting.dir/src/Rain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Rain.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Rain.cpp -o CMakeFiles/CPPTesting.dir/src/Rain.cpp.s

CMakeFiles/CPPTesting.dir/src/Coin.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/src/Coin.cpp.o: ../src/Coin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/CPPTesting.dir/src/Coin.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -o CMakeFiles/CPPTesting.dir/src/Coin.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/src/Coin.cpp

CMakeFiles/CPPTesting.dir/src/Coin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/src/Coin.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -E /Users/EpicChicken/CLionProjects/CPPTesting/src/Coin.cpp > CMakeFiles/CPPTesting.dir/src/Coin.cpp.i

CMakeFiles/CPPTesting.dir/src/Coin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/src/Coin.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -include /Users/EpicChicken/CLionProjects/CPPTesting/include/Pch.h -S /Users/EpicChicken/CLionProjects/CPPTesting/src/Coin.cpp -o CMakeFiles/CPPTesting.dir/src/Coin.cpp.s

CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.o: RM_generated_files/resources/sheet.png.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/resources/sheet.png.cpp

CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/resources/sheet.png.cpp > CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.i

CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/resources/sheet.png.cpp -o CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.s

CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.o: RM_generated_files/maps/map1.csv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/maps/map1.csv.cpp

CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/maps/map1.csv.cpp > CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.i

CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/maps/map1.csv.cpp -o CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.s

CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.o: RM_generated_files/maps/map2.csv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building CXX object CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/maps/map2.csv.cpp

CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/maps/map2.csv.cpp > CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.i

CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/maps/map2.csv.cpp -o CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.s

CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.o: RM_generated_files/maps/map3.csv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building CXX object CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/maps/map3.csv.cpp

CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/maps/map3.csv.cpp > CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.i

CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/maps/map3.csv.cpp -o CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.s

CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.o: CMakeFiles/CPPTesting.dir/flags.make
CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.o: RM_generated_files/__resources__config.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Building CXX object CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.o -c /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/__resources__config.cpp

CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/__resources__config.cpp > CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.i

CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/RM_generated_files/__resources__config.cpp -o CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.s

# Object files for target CPPTesting
CPPTesting_OBJECTS = \
"CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Main.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Pch.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Entity.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Player.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Global.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Rain.cpp.o" \
"CMakeFiles/CPPTesting.dir/src/Coin.cpp.o" \
"CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.o" \
"CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.o" \
"CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.o" \
"CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.o" \
"CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.o"

# External object files for target CPPTesting
CPPTesting_EXTERNAL_OBJECTS =

CPPTesting: CMakeFiles/CPPTesting.dir/src/Mainclass.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Iohandler.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Main.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Pch.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Entity.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Hitbox.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Player.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Global.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/DustCloud.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/CrackedBlock.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/RainCloud.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Rain.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/src/Coin.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/RM_generated_files/resources/sheet.png.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map1.csv.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map2.csv.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/RM_generated_files/maps/map3.csv.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/RM_generated_files/__resources__config.cpp.o
CPPTesting: CMakeFiles/CPPTesting.dir/build.make
CPPTesting: ../SFML/lib/libsfml-graphics.2.5.1.dylib
CPPTesting: ../SFML/lib/libsfml-audio.2.5.1.dylib
CPPTesting: ../SFML/lib/libsfml-window.2.5.1.dylib
CPPTesting: ../SFML/lib/libsfml-system.2.5.1.dylib
CPPTesting: CMakeFiles/CPPTesting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Linking CXX executable CPPTesting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPPTesting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPPTesting.dir/build: CPPTesting

.PHONY : CMakeFiles/CPPTesting.dir/build

CMakeFiles/CPPTesting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPPTesting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPPTesting.dir/clean

CMakeFiles/CPPTesting.dir/depend: RM_generated_files/resources/sheet.png.cpp
CMakeFiles/CPPTesting.dir/depend: RM_generated_files/maps/map1.csv.cpp
CMakeFiles/CPPTesting.dir/depend: RM_generated_files/maps/map2.csv.cpp
CMakeFiles/CPPTesting.dir/depend: RM_generated_files/maps/map3.csv.cpp
CMakeFiles/CPPTesting.dir/depend: RM_generated_files/__resources__config.cpp
	cd /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/EpicChicken/CLionProjects/CPPTesting /Users/EpicChicken/CLionProjects/CPPTesting /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug /Users/EpicChicken/CLionProjects/CPPTesting/cmake-build-debug/CMakeFiles/CPPTesting.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPPTesting.dir/depend

