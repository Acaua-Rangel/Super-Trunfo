#include <stdio.h>
#include <string.h> // Para strcmp

int main() {
    // === Declaração de variáveis das cartas ===
    char estado1, estado2;                  // Estado representado por uma letra de A a H
    char codigo1[4], codigo2[4];            // Código da carta no formato 'A01'
    int numero_carta1, numero_carta2;       // Número da carta (1 a 4)
    char cidade1[50], cidade2[50];          // Nome da cidade

    unsigned long int populacao1, populacao2;  // População

    float area1, area2;                     // Área da cidade em km²
    float densidade1, densidade2;           // Densidade populacional
    float pib1, pib2;                       // PIB da cidade (em bilhões)
    float percapta1, percapta2;             // PIB per capita
    int num_pontos1, num_pontos2;           // Pontos turísticos

    // ==== Cadastro da Carta 1 ====
    printf("=========  Carta 1  =========\n\n");
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o número da carta (1-4): ");
    scanf("%d", &numero_carta1);
    sprintf(codigo1, "%c%02d", estado1, numero_carta1);  // Gera código como A01

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao1);

    printf("Digite o tamanho da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos1);

    // Calculando densidade e PIB per capita da Carta 1
    densidade1 = (float)populacao1 / area1;
    percapta1 = pib1 / (float)populacao1;

    // ==== Cadastro da Carta 2 ====
    printf("\n\n=========  Carta 2  =========\n\n");
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o número da carta (1-4): ");
    scanf("%d", &numero_carta2);
    sprintf(codigo2, "%c%02d", estado2, numero_carta2);  // Gera código como B02

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos2);

    // Calculando densidade e PIB per capita da Carta 2
    densidade2 = (float)populacao2 / area2;
    percapta2 = pib2 / (float)populacao2;

    // ==== Menu de Seleção de Atributo ====
    int opcao;
    do {
        printf("\n\n=========  SUPER TRUNFO  =========\n");
        printf("Escolha o atributo para comparar as cartas:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        // ==== Comparação entre as Cartas ====
        printf("\n=========  Comparação de Cartas  =========\n");
        
        switch(opcao) {
            case 1: // População
                printf("Atributo utilizado: População\n\n");
                printf("Carta 1 - %s (%c): %lu habitantes\n", cidade1, estado1, populacao1);
                printf("Carta 2 - %s (%c): %lu habitantes\n", cidade2, estado2, populacao2);
                
                if (populacao1 > populacao2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
                } else if (populacao2 > populacao1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("\nResultado: Empate entre as cartas!\n");
                }
                break;
                
            case 2: // Área
                printf("Atributo utilizado: Área\n\n");
                printf("Carta 1 - %s (%c): %.2f km²\n", cidade1, estado1, area1);
                printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);
                
                if (area1 > area2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
                } else if (area2 > area1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("\nResultado: Empate entre as cartas!\n");
                }
                break;
                
            case 3: // PIB
                printf("Atributo utilizado: PIB\n\n");
                printf("Carta 1 - %s (%c): R$ %.2f bilhões\n", cidade1, estado1, pib1);
                printf("Carta 2 - %s (%c): R$ %.2f bilhões\n", cidade2, estado2, pib2);
                
                if (pib1 > pib2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
                } else if (pib2 > pib1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("\nResultado: Empate entre as cartas!\n");
                }
                break;
                
            case 4: // Pontos Turísticos
                printf("Atributo utilizado: Pontos Turísticos\n\n");
                printf("Carta 1 - %s (%c): %d pontos\n", cidade1, estado1, num_pontos1);
                printf("Carta 2 - %s (%c): %d pontos\n", cidade2, estado2, num_pontos2);
                
                if (num_pontos1 > num_pontos2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
                } else if (num_pontos2 > num_pontos1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("\nResultado: Empate entre as cartas!\n");
                }
                break;
                
            case 5: // Densidade Demográfica (regra invertida)
                printf("Atributo utilizado: Densidade Demográfica (menor valor vence)\n\n");
                printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade1);
                printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade2);
                
                if (densidade1 < densidade2) {
                    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
                } else if (densidade2 < densidade1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("\nResultado: Empate entre as cartas!\n");
                }
                break;
                
            case 0:
                printf("Saindo do jogo...\n");
                break;
                
            default:
                printf("Opção inválida! Por favor, escolha uma opção entre 0 e 5.\n");
        }
        
        if (opcao != 0) {
            printf("\nPressione Enter para continuar...");
            getchar(); // Limpa o buffer
            getchar(); // Espera Enter
        }
    } while (opcao != 0);

    return 0;
}