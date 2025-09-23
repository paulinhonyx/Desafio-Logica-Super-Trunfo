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
    estado1 = estado1 - 32; // Converter para maiúscula
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
    printf("Obrigado pelas informacoes. Vamos para a carta 2\n");

    // Entrada de dados para a carta 2
    printf("Digite o estado (letra):\n");
    scanf(" %c", &estado2);
    estado2 = estado2 - 32; // Converter para maiúscula
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

    // Calcular super poder Carta 1
    float inversoDensidade1 = densidade1 * -1;
    float poder1 = populacao1 + area1 + pib1 + pontos1 + pibPer + inversoDensidade1;

    // Calcular super poder Carta 2
    float inversoDensidade2 = densidade2 * -1;
    float poder2 = populacao2 + area2 + pib2 + pontos2 + pibPer2 + inversoDensidade2;

    
    // Impressão dos dados da carta 1
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);            
    printf("Codigo: %c%02d\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/Km\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPer);
    printf("Poder da carta: %.2f\n\n", poder1);
    
    // Impressão dos dados da carta 2
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);            
    printf("Codigo: %c%02d\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/Km\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPer2);
    printf("Poder da carta: %.2f\n\n", poder2);
    
    // Menu interativo
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - Cidade\n");
    printf("2 - Populacao\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - Pontos turisticos\n");
    printf("6 - Densidade populacional\n");
    int escolha;
    scanf("%d", &escolha);
    printf("Você escolheu o atributo %d\n", escolha);

    // Determinar o vencedor
    printf("Comparacao das cartas:\n");
    switch (escolha)
    {
    case 1:
        printf("Cidade carta 1: %s; Cidade carta 2: %s\n", cidade1, cidade2);
        break;
    case 2:
        if (populacao1 > populacao2) {
            printf("Populacao: Carta 1 ganhou (1)\n");
        } else {
            printf("Populacao: Carta 2 ganhou (0)\n");
        }
        break;
    case 3:
        if (area1 > area2) {
            printf("Area: Carta 1 ganhou (1)\n");
        } else {
            printf("Area: Carta 2 ganhou (0)\n");
        }
        break;
    case 4:
        if (pib1 > pib2) {
            printf("PIB: Carta 1 ganhou (1)\n");
        } else {
            printf("PIB: Carta 2 ganhou (0)\n");
        }
        break;
    case 5:
        if (pontos1 > pontos2) {
            printf("Pontos turisticos: Carta 1 ganhou (1)\n");
        } else {
            printf("Pontos turisticos: Carta 2 ganhou (0)\n");
        }
        break;
    case 6:
        if (densidade1 < densidade2) {
            printf("Densidade populacional: Carta 1 ganhou (1)\n");
        } else {
            printf("Densidade populacional: Carta 2 ganhou (0)\n");
        }
        break; 
    default:
        printf("Opção invalida.\n");
        break;
    }
    /* 
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 ganhou (1)\n");
    } else {
        printf("Populacao: Carta 2 ganhou (0)\n");
    }
    if (area1 > area2) {
        printf("Area: Carta 1 ganhou (1)\n");
    } else {
        printf("Area: Carta 2 ganhou (0)\n");
    }
    if (pib1 > pib2) {
        printf("PIB: Carta 1 ganhou (1)\n");
    } else {
        printf("PIB: Carta 2 ganhou (0)\n");
    }
    if (pontos1 > pontos2) {
        printf("Pontos turisticos: Carta 1 ganhou (1)\n");
    } else {
        printf("Pontos turisticos: Carta 2 ganhou (0)\n");
    }   
    if (densidade1 < densidade2) {
        printf("Densidade populacional: Carta 1 ganhou (1)\n");
    } else {
        printf("Densidade populacional: Carta 2 ganhou (0)\n");
    }   
    if (pibPer > pibPer2) {
        printf("PIB per capita: Carta 1 ganhou (1)\n");
    } else {
        printf("PIB per capita: Carta 2 ganhou (0)\n");
    } 
   if (poder1 > poder2) {
       printf("Poder da carta 1: %.2f\n\n", poder1);
       printf("Poder da carta 2: %.2f\n\n", poder2);
       printf("Poder da carta: Carta 1 ganhou (1)\n");
    } else {
        printf("Poder da carta 1: %.2f\n\n", poder1);
        printf("Poder da carta 2: %.2f\n\n", poder2);
        printf("Poder da carta: Carta 2 ganhou (0)\n");
    }   
    */

    return 0;
}