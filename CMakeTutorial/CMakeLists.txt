cmake_minimum_required (VERSION 2.6)
project (CMakeTutorial)
# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)
 
# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/CMakeTutorial/TutorialConfig.h"
  "${PROJECT_BINARY_DIR}/CMakeTutorial/TutorialConfig.h"
  )
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")
 
# add the executable
add_executable(CMakeTutorial CMakeTutorial/CMakeTutorial.cpp)