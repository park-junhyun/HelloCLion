cmake_minimum_required(VERSION 3.12)
project(HelloCLion)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp gcd.hpp)
add_executable(HelloCLion main.cpp gcd.hpp)