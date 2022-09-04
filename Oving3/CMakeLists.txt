cmake_minimum_required(VERSION 3.1)

project(Oving3)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(Oppg1and2 oppg1and2.cpp)
add_executable(Commodity commodity.cpp)
add_executable(Strings strings.cpp)
