# calc/CMakeLists.txt

cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(calc)

add_library(maths adder.cpp)

if(NOT BUILD_SHARED_LIBS)
	add_definitions(-Dmaths_STATIC)
endif()

add_executable(calc calc.cpp)

target_link_libraries(calc maths)

#/calc/CMakeLists.txt