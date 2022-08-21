cmake_minimum_required(VERSION 3.16)
project(test)

add_executable(parse_args parse_args.c)

target_link_libraries(parse_args common)
