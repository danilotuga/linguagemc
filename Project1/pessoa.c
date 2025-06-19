// pessoa.c
/**
 * @file pessoa.c
 * @brief Implementação das funções de gerenciamento de Person.
 *
 * Implementa addPerson e infoPerson declaradas em pessoa.h.
 *
 * addPerson: faz leituras de stdin para preencher cada struct.
 * infoPerson: imprime no stdout os dados de uma única Person.
 *
 * @author Danilo Côrtes Gonçalves
 * @date 2025-06-19
 */
#include <stdio.h>
#include <string.h>
#include "pessoa.h"

void addPerson(Person persons[], int count) {
    for (int i = 0; i < count; i++) {
        Person *p = &persons[i];
        p->idPerson = i;
        printf("\n-- Registering Person #%d --\n", i + 1);
        printf("Assigned ID: %d\n", p->idPerson);

        // Limpa o \n residual antes do primeiro fgets
        if (i == 0) getchar();

        // Lê nome completo (com espaços), removendo o '\n' final
        printf("Name: ");
        fgets(p->nmName, sizeof(p->nmName), stdin);
        p->nmName[strcspn(p->nmName, "\n")] = '\0';

        // Lê peso (float)
        printf("Weight: ");
        scanf("%f", &p->vlWeight);
        // Lê altura (float)
        printf("Height: ");
        scanf("%f", &p->vlTall);

        // Descarta '\n' restante no buffer para próximas leituras
        getchar();
    }
}

void infoPerson(const Person persons[], int id) {
    const Person *p = &persons[id];
    printf("\n-- Info for Person ID %d --\n", id);
    printf("Name: %s\n", p->nmName);
    printf("Weight: %.2f kg\n", p->vlWeight);
    printf("Height: %.2f m\n", p->vlTall);
}