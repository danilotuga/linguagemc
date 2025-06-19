// pessoa.h
/**
 * @file pessoa.h
 * @brief Definições da struct Person e protótipos das funções de gerenciamento de pessoas.
 *
 * Este módulo define a estrutura Person, utilizada para armazenar informações
 * de uma pessoa (ID, nome, peso e altura), e declara as funções:
 *  - addPerson: Preenche um array de Person com dados do usuário.
 *  - infoPerson: Exibe os dados de uma pessoa a partir de seu ID.
 *
 * @author Danilo Côrtes Gonçalves
 * @date 2025-06-19
 */
#ifndef PESSOA_H
#define PESSOA_H

#include <stdio.h>
#include <string.h>

#define NAME_LEN 50  ///< Limite de caracteres para o nome (incluindo o terminador '\0')

/**
 * @struct Person
 * @brief Representa os dados básicos de uma pessoa.
 *
 * Campos:
 *  - idPerson: identificador único atribuído automaticamente.
 *  - nmName: nome completo da pessoa.
 *  - vlWeight: peso em quilogramas.
 *  - vlTall: altura em metros.
 */
typedef struct {
    int idPerson;
    char nmName[NAME_LEN];
    float vlWeight;
    float vlTall;
} Person;

/**
 * @brief Preenche um array de Person com informações lidas do usuário.
 *
 * Solicita ao usuário o nome, peso e altura para cada elemento do array.
 * O campo idPerson é atribuído automaticamente como o índice do array.
 *
 * @param[out] persons Vetor de Person a ser preenchido.
 * @param[in] count Número de elementos no vetor.
 */
void addPerson(Person persons[], int count);

/**
 * @brief Exibe os dados de uma pessoa a partir do seu ID.
 *
 * Imprime nome, peso e altura da pessoa localizada no índice id do array.
 *
 * @param[in] persons Vetor de Person preenchido.
 * @param[in] id Índice da pessoa a ser exibida (0 <= id < número de pessoas).
 */
void infoPerson(const Person persons[], int id);

#endif // PESSOA_H