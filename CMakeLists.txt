cmake_minimum_required(VERSION 3.2)
project(CPPTesting)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

add_library(pch include/Pch.h src/Pch.cpp)

set(SFML_DIR ${PROJECT_SOURCE_DIR}/SFML)
#set(SFML_STATIC_LIBRARIES TRUE)

find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)

set(SOURCE_FILES src/Mainclass.cpp src/Iohandler.cpp include/Iohandler.h include/Mainclass.h src/Main.cpp include/Pch.h src/Pch.cpp src/Entity.cpp include/Entity.h src/Hitbox.cpp include/Hitbox.h src/Player.cpp include/Player.h src/Global.cpp include/Global.h src/DustCloud.cpp include/DustCloud.h src/CrackedBlock.cpp include/CrackedBlock.h src/RainCloud.cpp include/RainCloud.h src/Rain.cpp include/Rain.h src/Coin.cpp include/Coin.h src/MiniTroll.cpp include/MiniTroll.h src/BloodParticle.cpp include/BloodParticle.h src/ChestMonster.cpp include/ChestMonster.h src/Dragon.cpp include/Dragon.h src/FireBreath.cpp include/FireBreath.h)
set_source_files_properties(${SOURCE_FILES} PROPERTIES COMPILE_FLAGS "-include ${CMAKE_CURRENT_SOURCE_DIR}/include/Pch.h")

add_subdirectory("ResourceManager-master")
include_directories(${RESOURCE_MANAGER_INCLUDE_DIRS})
rm_embed_resources(RESOURCES "resources/sheet.png" "maps/map1.csv" "maps/map2.csv" "maps/map3.csv" "maps/map4.csv")

add_executable(CPPTesting ${SOURCE_FILES} ${RESOURCES})
target_link_libraries(CPPTesting sfml-graphics sfml-audio)
