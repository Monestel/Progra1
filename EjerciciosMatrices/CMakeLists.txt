cmake_minimum_required(VERSION 4.1)
project(EjerciciosMatrices)

set(CMAKE_CXX_STANDARD 20)

add_executable(EjerciciosMatrices main.cpp
        MatrizEnteros.cpp
        MatrizEnteros.h
        MatrizOperaciones.cpp
        MatrizOperaciones.h
        MatrizCaracteres.cpp
        MatrizCaracteres.h
        MatrizPuntuaciones.cpp
        MatrizPuntuaciones.h
        MatrizTemperaturas.cpp
        MatrizTemperaturas.h)
