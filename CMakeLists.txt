cmake_minimum_required(VERSION 3.2)
project(CPPTesting)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(SFML_DIR "users/lib/cmake/SFML")

add_library(pch include/Pch.h src/Pch.cpp)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(SOURCE_FILES src/Mainclass.cpp src/Iohandler.cpp include/Iohandler.h include/Mainclass.h src/Main.cpp include/Pch.h src/Pch.cpp src/Entity.cpp include/Entity.h src/Hitbox.cpp include/Hitbox.h src/Player.cpp include/Player.h src/Global.cpp include/Global.h src/DustCloud.cpp include/DustCloud.h)
set_source_files_properties(${SOURCE_FILES} PROPERTIES COMPILE_FLAGS "-include ${CMAKE_CURRENT_SOURCE_DIR}/include/Pch.h")

add_executable(CPPTesting ${SOURCE_FILES})
target_link_libraries(CPPTesting sfml-graphics sfml-audio)