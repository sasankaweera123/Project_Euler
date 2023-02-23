cmake_minimum_required(VERSION 3.24)
project(Project_Euler)

set(CMAKE_CXX_STANDARD 14)

include_directories("Project Euler/src/Q1")
include_directories("Project Euler/src/Q2")

add_executable(Project_Euler
        "Project Euler/src/Q1/main.cpp"
        "Project Euler/src/Q1/Q1.cpp"
        "Project Euler/src/Q1/Q1.h"
        "Project Euler/src/Q2/Q2.cpp"
        "Project Euler/src/Q2/Q2.h"
        "Project Euler/src/Q2/Q2_Main.cpp")
