#include<stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

 // Área para definição das variáveis para armazenar as propriedades das cidades
int main() {
    setbuf(stdin, NULL); // limpa o buffer padrão
    char estado;
    int codigo;
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turistico;

    // Área para entrada de dados
    //dados da primeira carta
    printf("Carta 1: \n");

    printf("Escolha uma letra de A a H que represente o estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código composto por a letra do estado e um número de 01 a 04: \n");
    scanf(" %i", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade);

    printf("Digite a população da cidade: \n");
    scanf(" %i", &populacao);

    printf("Digite a área em km2: \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite quantos pontos turísticos essa cidade tem: \n");
    scanf(" %i", &turistico);

     // Área para exibição dos dados da cidade


    //dados da segunda carta
    printf("Carta 2: \n");

    printf("Escolha uma letra de A a H que represente o estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código composto por a letra do estado e um número de 01 a 04: \n");
    scanf(" %i", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade);

    printf("Digite a população da cidade: \n");
    scanf(" %i", &populacao);

    printf("Digite a área em km2: \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite quantos pontos turísticos essa cidade tem: \n");
    scanf(" %i", &turistico);

    return 0;

}

