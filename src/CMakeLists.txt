cmake_minimum_required(VERSION 3.19.4)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME game)

# Find and Include SDL2 Libaries
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${SDL2_IMAGE_INCLUDE_DIRS})

# Look for source files
add_executable(${PROJECT_NAME} main.cpp lib/example.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_BINARY_DIR}/src)
target_link_libraries(${PROJECT_NAME} PUBLIC ${ENGINE_LIB} ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})

# Create lib for tests
add_library(${PROJECT_NAME}_lib STATIC main.cpp lib/example.cpp)
target_include_directories (${PROJECT_NAME}_lib PUBLIC ${PROJECT_SOURCE_DIR}/src)