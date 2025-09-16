#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado_1, estado_2; /* Estado = 1 letra */
  char codigo_1[4], codigo_2[4]; /* Código da cidade = 3 letras + \0 */
  char nome_1[50], nome_2[50];  /* Nome da cidade = 49 letras + \0 */
  int populacao_1, populacao_2; /* População = número inteiro */
  float area_1, area_2; /* Área = número real */
  float pib_1, pib_2; /* PIB = número real */
  int pontos_turisticos_1, pontos_turisticos_2; /* Número de pontos turísticos = número inteiro */

  // Área para entrada de dados

  /* Cadastro da primeira carta */
  printf("Faça o cadastro da primeira carta: \n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado_1);

  printf("Digite o código da cidade (ex: A01): ");
  scanf(" %3s", codigo_1);

  printf("Digite o nome da cidade: ");
  scanf(" %49s", nome_1);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao_1);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area_1);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib_1);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &pontos_turisticos_1);

  /* Cadastro da segunda carta */
  printf("\nFaça o cadastro da segunda carta: \n");
  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado_2);

  printf("Digite o código da cidade (ex: A01): ");
  scanf(" %3s", codigo_2);

  printf("Digite o nome da cidade: ");
  scanf(" %49s", nome_2);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao_2);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area_2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib_2);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &pontos_turisticos_2);

  // Área para exibição dos dados da cidade

  /* Exibição dos dados cadastrados */
  printf("\n--- Dados da Cidade Cadastrada 1 ---\n");
  printf("Estado: %c\n", estado_1);
  printf("Código: %s\n", codigo_1);
  printf("Nome da cidade: %s\n", nome_1);
  printf("População: %d\n", populacao_1);
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);

  printf("\n--- Dados da Cidade Cadastrada 2 ---\n");
  printf("Estado: %c\n", estado_2);
  printf("Código: %s\n", codigo_2);
  printf("Nome da cidade: %s\n", nome_2);
  printf("População: %d\n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);

return 0;
} 
