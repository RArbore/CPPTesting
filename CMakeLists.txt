cmake_minimum_required(VERSION 3.2)
project(CPPTesting)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(SFML_DIR "users/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(CPPTesting src/mainclass.cpp src/iohandler.cpp include/iohandler.h include/mainclass.h src/main.cpp)
target_link_libraries(CPPTesting sfml-graphics sfml-audio)