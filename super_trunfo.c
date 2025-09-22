#include <stdio.h>

int main() {
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
    
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);            
    printf("Codigo: %c%02d\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n\n", pontos1);
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);            
    printf("Codigo: %c %d\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n\n", pontos2);

    return 0;
}