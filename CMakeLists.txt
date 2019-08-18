cmake_minimum_required(VERSION 3.2)
project(CPPTesting)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(SFML_DIR "users/lib/cmake/SFML")

add_library(pch include/pch.h src/pch.cpp)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

set(SOURCE_FILES src/mainclass.cpp src/iohandler.cpp include/iohandler.h include/mainclass.h src/main.cpp include/pch.h src/pch.cpp)
set_source_files_properties(${SOURCE_FILES} PROPERTIES COMPILE_FLAGS "-include ${CMAKE_CURRENT_SOURCE_DIR}/include/pch.h")

add_executable(CPPTesting ${SOURCE_FILES})
target_link_libraries(CPPTesting sfml-graphics sfml-audio)