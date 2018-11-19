cmake_minimum_required(VERSION 3.12)
project(RJscholls2 C)

set(CMAKE_C_STANDARD 99)

add_executable(RJscholls2 main.c tab_csv.h tab_csv.c project_includes.h functions.h functions.c)