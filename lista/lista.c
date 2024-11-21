#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

struct ListaEstudiantes crearLista() {
    struct ListaEstudiantes lista;
    lista.cabeza = NULL;
    return lista;
}

void agregarEstudiante(struct ListaEstudiantes *lista, const char *nombre, int edad, float promedio) {
    struct Nodo *nuevoNodo = (struct Nodo *) malloc(sizeof(struct Nodo));
    agregarEstudiante(&nuevoNodo->estudiante, nombre, edad, promedio);
    nuevoNodo->siguiente = lista->cabeza;
    lista->cabeza = nuevoNodo;
}

void imprimirLista(struct ListaEstudiantes lista) {
    struct Nodo *actual = lista.cabeza;
    while (actual != NULL) {
        imprimirEstudiante(&actual->estudiante);
        actual = actual->siguiente;
    }
}

void eliminarEstudiante(struct ListaEstudiantes *lista, const char *nombre) {
    struct Nodo *actual = lista->cabeza;
    struct Nodo *anterior = NULL;

    while (actual != NULL && strcmp(actual->estudiante.nombre, nombre) != 0) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == NULL) {
        printf("Estudiante no encontrado.\n");
        return;
    }

    if (anterior == NULL) {
        lista->cabeza = actual->siguiente;
    } else {
        anterior->siguiente = actual->siguiente;
    }

    free(actual);
}

void liberarLista(struct ListaEstudiantes *lista) {
    struct Nodo *actual = lista->cabeza;
    while (actual != NULL) {
        struct Nodo *temp = actual;
        actual = actual->siguiente;
        free(temp);
    }
    lista->cabeza = NULL;
}
