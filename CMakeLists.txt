cmake_minimum_required(VERSION 3.28)
project(mondex C)

set(CMAKE_C_STANDARD 11)

add_executable(mondex src/mondex/cli/main.c)
