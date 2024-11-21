#include <stdio.h>
#include <string.h>
#include "estudiante.h"

void agregarEstudiante(struct Estudiante *est, const char *nombre, int edad, float promedio) {
    strcpy(est->nombre, nombre);
    est->edad = edad;
    est->promedio = promedio;
}

void imprimirEstudiante(struct Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}
