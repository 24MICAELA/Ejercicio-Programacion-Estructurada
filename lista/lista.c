#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicializarLista(struct ListaEstudiantes *lista) {
    lista->inicio = NULL;
}

void agregarEstudiante(struct ListaEstudiantes *lista, const char *nombre, int edad, float promedio) {
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    agregarEstudiante(&nuevoNodo->estudiante, nombre, edad, promedio);
    nuevoNodo->siguiente = lista->inicio;
    lista->inicio = nuevoNodo;
}

void imprimirLista(struct ListaEstudiantes lista) {
    struct Nodo *actual = lista.inicio;
    while (actual != NULL) {
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", actual->estudiante.nombre, actual->estudiante.edad, actual->estudiante.promedio);
        actual = actual->siguiente;
    }
}

void eliminarEstudiante(struct ListaEstudiantes *lista, const char *nombre) {
    struct Nodo *actual = lista->inicio;
    struct Nodo *anterior = NULL;

    while (actual != NULL && strcmp(actual->estudiante.nombre, nombre) != 0) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == NULL) {
        return; // Estudiante no encontrado
    }

    if (anterior == NULL) {
        lista->inicio = actual->siguiente;
    } else {
        anterior->siguiente = actual->siguiente;
    }

    free(actual);
}

void liberarLista(struct ListaEstudiantes *lista) {
    struct Nodo *actual = lista->inicio;
    struct Nodo *temp;

    while (actual != NULL) {
        temp = actual;
        actual = actual->siguiente;
        free(temp);
    }

    lista->inicio = NULL;
}

