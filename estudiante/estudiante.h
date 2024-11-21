#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

struct Estudiante {
    char nombre[100];
    int edad;
    float promedio;
};

void agregarEstudiante(struct Estudiante *est, const char *nombre, int edad, float promedio);

#endif // ESTUDIANTE_H
