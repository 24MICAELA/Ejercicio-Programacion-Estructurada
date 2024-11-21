#ifndef LISTA_H
#define LISTA_H

#include "estudiante.h"

struct Nodo {
    struct Estudiante estudiante;
    struct Nodo *siguiente;
};

struct ListaEstudiantes {
    struct Nodo *inicio;
};

void inicializarLista(struct ListaEstudiantes *lista);
void agregarEstudiante(struct ListaEstudiantes *lista, const char *nombre, int edad, float promedio);
void imprimirLista(struct ListaEstudiantes lista);
void eliminarEstudiante(struct ListaEstudiantes *lista, const char *nombre);
void liberarLista(struct ListaEstudiantes *lista);

#endif // LISTA_H
