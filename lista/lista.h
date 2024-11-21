#ifndef LISTA_H
#define LISTA_H

#include "estudiante/estudiante.h"

// Nodo de la lista
struct Nodo {
    struct Estudiante estudiante;
    struct Nodo *siguiente;
};

// Lista de estudiantes
struct ListaEstudiantes {
    struct Nodo *cabeza;
};

// Funciones de lista
struct ListaEstudiantes crearLista();
void agregarEstudiante(struct ListaEstudiantes *lista, const char *nombre, int edad, float promedio);
void imprimirLista(struct ListaEstudiantes lista);
void eliminarEstudiante(struct ListaEstudiantes *lista, const char *nombre);
void liberarLista(struct ListaEstudiantes *lista);

#endif
