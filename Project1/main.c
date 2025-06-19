// main.c
/**
 * @file main.c
 * @brief Programa principal para registro e consulta de pessoas.
 *
 * Utiliza as funções addPerson e infoPerson para:
 * 1. Registrar dados de um conjunto de pessoas.
 * 2. Solicitar um ID ao usuário e exibir os dados correspondentes.
 *
 * @date 2025-06-19
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pessoa.h"

#define MAX 3  ///< Número de pessoas a serem cadastradas

int main() {
    setlocale(LC_ALL, "");  // Configura acentuação conforme locale do sistema
    Person persons[MAX];      // Vetor de structs Person

    // Passo 1: registrar dados de MAX pessoas
    addPerson(persons, MAX);

    // Passo 2: solicitar ID ao usuário
    int queryId;
    printf("\nWhich person ID would you like to view? (0-%d): ", MAX - 1);
    if (scanf("%d", &queryId) != 1 || queryId < 0 || queryId >= MAX) {
        printf("Invalid ID or input.\n");
        return EXIT_FAILURE;
    }

    // Passo 3: exibir dados da pessoa selecionada
    infoPerson(persons, queryId);
    return EXIT_SUCCESS;
}
