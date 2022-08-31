cmake_minimum_required(VERSION 3.23)
project(movies_proj)

set(CMAKE_CXX_STANDARD 14)

add_executable(movies_proj main.cpp Movie.cpp Movie.h Movies.cpp Movies.h)
