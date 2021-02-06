cmake_minimum_required(VERSION 3.19.4)

# Set the project name
set(SDL2_DIR='D:/Projects/Libaries/SDL2-2.0.14/x86_64-w64-mingw32/lib/cmake/SDL2')
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_COMPILER "g++")
SET(OUTPUT main)

# Find and Include SDL2 Libaries
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# include headers from src folder recursively
set(myDesiredRootForHeaderFileSearch headers)
file(GLOB my_include_directories ${myDesiredRootForHeaderFileSearch})
include_directories(${my_include_directories})

# Include source files
include_directories(headers)
file(GLOB_RECURSE SRC_FILES lib/*.cpp)

# Add the executable
add_executable("${OUTPUT}" main.cpp ${SRC_FILES})
target_link_libraries("${OUTPUT}" ${SDL2_LIBRARIES})

add_library(${OUTPUT}_lib STATIC ${SRC_FILES})
