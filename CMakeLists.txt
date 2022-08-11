cmake_minimum_required(VERSION 3.16)
project(FirstCProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(FirstCProject main.cpp time_class.cpp time_class.h box.cpp box.h line.cpp line.h Person.cpp Person.h)
