#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  #include <stdio.h>

int main() {
    //DECLARAÇÃO DE VARIÁVEIS
    char estado1, estado2;
    int numero1, numero2; 
    char codigo1[5], codigo2[5]; 
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    //CARTA 01
    printf("Insira os dados da Carta 1:\n");

    printf("Estado (Insira uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Número da carta (de 1 a 4): ");
    scanf("%d", &numero1);

    sprintf(codigo1, "%c%02d", estado1, numero1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    //CARTA 02
    printf("\nInsira os dados da Carta 2:\n");

    printf("Estado (Insira uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Número da carta (de 1 a 4): ");
    scanf("%d", &numero2);

    sprintf(codigo2, "%c%02d", estado2, numero2);
    
    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    //RESULTADO
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  
    return 0;
}


return 0;
} 
