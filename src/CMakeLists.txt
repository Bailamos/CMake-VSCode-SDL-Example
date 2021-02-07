cmake_minimum_required(VERSION 3.19.4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_COMPILER "g++")
SET(OUTPUT main)

# Find and Include SDL2 Libaries
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# Look for source files
file(GLOB_RECURSE SRC_FILES lib/*.cpp)

# Add the executable
add_executable("${OUTPUT}" main.cpp ${SRC_FILES})
target_link_libraries("${OUTPUT}" ${SDL2_LIBRARIES})

add_library(${OUTPUT}_lib STATIC ${SRC_FILES})
