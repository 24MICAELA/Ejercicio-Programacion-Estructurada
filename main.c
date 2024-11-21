#include <stdio.h>
#include "main.h"

void ejecutarPrograma() {
    struct ListaEstudiantes lista;
    inicializarLista(&lista);

    agregarEstudiante(&lista, "Juan", 20, 9.5);
    agregarEstudiante(&lista, "Ana", 22, 9.8);

    printf("Lista de estudiantes:\n");
    imprimirLista(lista);

    eliminarEstudiante(&lista, "Juan");

    printf("\nLista de estudiantes después de eliminar a Juan:\n");
    imprimirLista(lista);

    liberarLista(&lista);
}

int main() {
    ejecutarPrograma();
    return 0;
}
