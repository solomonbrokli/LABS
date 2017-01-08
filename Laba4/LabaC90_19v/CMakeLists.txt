cmake_minimum_required(VERSION 3.6)
project(LabaC90_19v)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(LabaC90_19v ${SOURCE_FILES})
target_link_libraries(LabaC90_19v m)
