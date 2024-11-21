cmake_minimum_required(VERSION 3.29)
project(Ejercicio_Programacion_Estructurada C)

# Establecer el estándar de C
set(CMAKE_C_STANDARD 11)

# Incluir directorios para los archivos de encabezado
include_directories(.)
include_directories(estudiante)
include_directories(lista)

# Crear el ejecutable a partir de los archivos fuente .c
add_executable(Ejercicio_Programacion_Estructurada
        main.c
        estudiante/estudiante.c
        lista/lista.c
)

