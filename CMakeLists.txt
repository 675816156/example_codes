cmake_minimum_required(VERSION 3.16)
project(test)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH         ${PROJECT_BINARY_DIR}/bin)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(common)
add_subdirectory(src)
add_subdirectory(test)
