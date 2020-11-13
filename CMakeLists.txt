cmake_minimum_required(VERSION 3.15)
project(search)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -Werror")

add_executable(search main.cpp profile.h iterator_range.h parse.cpp parse.h search_server.cpp search_server.h synchronized.h test_runner.h)