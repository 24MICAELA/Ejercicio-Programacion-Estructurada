#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "estudiante/estudiante.h"
#include "lista/lista.h"

int main() {
    // Crear una lista de estudiantes
    ListaEstudiantes lista = crearLista();

    // Añadir estudiantes
    agregarEstudiante(&lista, "Juan", 20, 9.5);
    agregarEstudiante(&lista, "Ana", 22, 9.8);

    // Imprimir la lista
    printf("Lista de estudiantes:\n");
    imprimirLista(lista);

    // Eliminar un estudiante
    eliminarEstudiante(&lista, "Juan");
    printf("Lista después de eliminar a Juan:\n");
    imprimirLista(lista);

    // Liberar memoria
    liberarLista(&lista);

    return 0;
}
