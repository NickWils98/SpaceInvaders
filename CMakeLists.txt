cmake_minimum_required(VERSION 3.15)
project(SpaceInvaders)

#add_executable(SpaceInvaders main.cpp)

# Extend the CMake module path to find the FindSFML.cmake
# file in {project root}/cmake/Modules
SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/Modules/")

# Look for SFML >= 2.0, with the specific subcomponents listed below
FIND_PACKAGE(SFML 2 COMPONENTS system window graphics)

# The source files to compile
SET(SRC main.cpp Model/Entity.cpp Model/Entity.h Controller/Game.cpp Controller/Game.h View/Game_sfml.cpp View/Game_sfml.h Model/World.cpp Model/World.h Model/EnemyShip.cpp Model/EnemyShip.h Model/PlayerTank.cpp Model/PlayerTank.h View/PlayerTank_sfml.cpp View/PlayerTank_sfml.h)

# Add include dirs for SFML
# (The SFML_INCLUDE_DIR variable is defined by FindSFML.cmake, if SFML was found)
INCLUDE_DIRECTORIES(${SFML_INCLUDE_DIR})

# The program we're compiling with the sources set above
ADD_EXECUTABLE(SpaceInvaders_sfml ${SRC})

# Link target to SFML libs
# (The SFML_LIBRARIES variable is defined by FindSFML.cmake, if SFML was found)
TARGET_LINK_LIBRARIES(SpaceInvaders_sfml ${SFML_LIBRARIES})

INSTALL(TARGETS SpaceInvaders_sfml DESTINATION ${PROJECT_SOURCE_DIR}/bin)
