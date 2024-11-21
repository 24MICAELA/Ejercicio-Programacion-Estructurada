cmake_minimum_required(VERSION 3.29)
project(Ejercicio_Programacion_Estructurada C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(estudiante)

add_executable(Ejercicio_Programacion_Estructurada
    estudiante/estudiante.c
    estudiante/estudiante.h
    main.c
    main.h)
