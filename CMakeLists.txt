cmake_minimum_required(VERSION 3.21)
project(SP_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(SP_3 main.cpp Shape.cpp Shape.h Square.cpp Square.h Circle.cpp Circle.h OrthogonalTriangle.cpp OrthogonalTriangle.h Array.cpp Array.h)
