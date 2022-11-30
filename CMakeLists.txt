cmake_minimum_required(VERSION 3.22)
project(Templatecpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(Templatecpp main.cpp Coche.cpp Coche.h ViajeCoche.cpp ViajeCoche.h Linea.cpp Linea.h Empresa.cpp Empresa.h)
