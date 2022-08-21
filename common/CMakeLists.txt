cmake_minimum_required(VERSION 3.16)
project(common)

file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.c)

add_library(${PROJECT_NAME} SHARED ${SRC_FILES})
