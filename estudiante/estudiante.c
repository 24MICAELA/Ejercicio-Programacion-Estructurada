#include "estudiante.h"
#include <string.h>

void agregarEstudiante(struct Estudiante *est, const char *nombre, int edad, float promedio) {
    strncpy(est->nombre, nombre, sizeof(est->nombre) - 1);
    est->edad = edad;
    est->promedio = promedio;
}
