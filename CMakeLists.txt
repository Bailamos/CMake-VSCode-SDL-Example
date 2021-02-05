cmake_minimum_required(VERSION 3.19.4)

# set the project name
project("Tutorial")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_COMPILER "g++")

set(myDesiredRootForHeaderFileSearch ${PROJECT_SOURCE_DIR}/src/headers)
file(GLOB my_include_directories ${myDesiredRootForHeaderFileSearch})
include_directories(${my_include_directories})

include_directories(src)
file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)

# add the executable
add_executable("${PROJECT_NAME}" ${SRC_FILES})