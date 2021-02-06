cmake_minimum_required(VERSION 3.19.4)

project (GOOGLETESTEXAMPLE)

# include headers from src folder recursively
set(myDesiredRootForHeaderFileSearch src/headers)
file(GLOB my_include_directories ${myDesiredRootForHeaderFileSearch})
include_directories(${my_include_directories})

add_subdirectory (src) 
add_subdirectory (tests)