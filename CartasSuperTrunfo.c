#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado_1, estado_2;
    char codigo_1[4], codigo_2[4];
    char nome_1[50], nome_2[50];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;

    // Primeira carta
    printf("Faça o cadastro da primeira carta: \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da cidade (ex: A01): ");
    scanf(" %3s", codigo_1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf(" %49s", nome_1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_1);

    float densidade_1 = (float) populacao_1 / area_1;
    float pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;

    // Segunda carta
    printf("\nFaça o cadastro da segunda carta: \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da cidade (ex: A01): ");
    scanf(" %3s", codigo_2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf(" %49s", nome_2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_2);

    float densidade_2 = (float) populacao_2 / area_2;
    float pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;

    // Exibição
    printf("\n--- Dados da Cidade Cadastrada 1 ---\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nome_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Demográfica: %.2f habitantes/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);

    printf("\n--- Dados da Cidade Cadastrada 2 ---\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nome_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Demográfica: %.2f habitantes/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);

    return 0;
}