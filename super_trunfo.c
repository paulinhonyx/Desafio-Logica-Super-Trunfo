#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 1 e carta 2
    char estado1;
    int codigo1;
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    char estado2;
    int codigo2;
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada de dados para a carta 1
    printf("Digite o estado (letra):\n");
    scanf(" %c", &estado1);
    printf("Digite o codigo:\n");
    scanf("%d", &codigo1);
    printf("Digite a cidade:\n");
    scanf("%s", cidade1);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);
    printf("Digite a area:\n");
    scanf("%f", &area1);
    printf("Digite o pib:\n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos1); 
    printf("Obrigado pelas informaçoes. Vamos para a carta 2\n");
    
    // Entrada de dados para a carta 2
    printf("Digite o estado (letra):\n");
    scanf(" %c", &estado2);
    printf("Digite o codigo:\n");
    scanf("%d", &codigo2);
    printf("Digite a cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);
    printf("Digite a area:\n");
    scanf("%f", &area2);
    printf("Digite o pib:\n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos2); 

    // Calculo de densidade populacional e pib per capita da carta 1
    float densidade1 = populacao1 / area1;
    float pibPer = pib1 / populacao1;
    // Calculo de densidade populacional e pib per capita da carta 2
    float densidade2 = populacao2 / area2;
    float pibPer2 = pib2 / populacao2;
       
    // Impressão dos dados da carta 1
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);            
    printf("Codigo: %c%02d\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n\n", pibPer);
    // Impressão dos dados da carta 2
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);            
    printf("Codigo: %c%02d\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n\n", pontos2);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n\n", pibPer2);

    return 0;
}