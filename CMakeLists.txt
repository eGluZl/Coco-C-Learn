cmake_minimum_required(VERSION 3.17)
project(demo C)

set(CMAKE_C_STANDARD 99)

add_executable(demo src/ADT/main.c src/next.c src/next.h)