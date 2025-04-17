#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Constantes para os atributos
#define POPULACAO 1
#define AREA 2
#define PIB 3
#define PONTOS_TURISTICOS 4
#define DENSIDADE 5

// Função para exibir o nome do atributo
const char* nomeAtributo(int atributo) {
    switch(atributo) {
        case POPULACAO: return "População";
        case AREA: return "Área";
        case PIB: return "PIB";
        case PONTOS_TURISTICOS: return "Pontos Turísticos";
        case DENSIDADE: return "Densidade Demográfica";
        default: return "Atributo Desconhecido";
    }
}

// Função para comparar dois valores de um atributo
int compararAtributo(int atributo, float valor1, float valor2, int int_valor1, int int_valor2) {
    switch(atributo) {
        case DENSIDADE:
            // Para densidade, menor valor vence
            if (valor1 < valor2) return 1;
            else if (valor2 < valor1) return 2;
            else return 0;
        
        case POPULACAO:
        case PONTOS_TURISTICOS:
            // Para atributos inteiros
            if (int_valor1 > int_valor2) return 1;
            else if (int_valor2 > int_valor1) return 2;
            else return 0;
            
        default:
            // Para outros atributos, maior valor vence
            if (valor1 > valor2) return 1;
            else if (valor2 > valor1) return 2;
            else return 0;
    }
}

int main() {
    // === Declaração de variáveis das cartas ===
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    int numero_carta1, numero_carta2;
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float densidade1, densidade2;
    float pib1, pib2;
    int num_pontos1, num_pontos2;

    // ==== Cadastro da Carta 1 ====
    printf("=========  Carta 1  =========\n\n");
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);

    printf("Digite o número da carta (1-4): ");
    scanf("%d", &numero_carta1);
    sprintf(codigo1, "%c%02d", estado1, numero_carta1);

    printf("Digite o nome da Cidade: ");
    scanf("%49s", cidade1);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao1);

    printf("Digite o tamanho da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos1);

    // Calculando densidade
    densidade1 = area1 > 0 ? (float)populacao1 / area1 : 0;

    // ==== Cadastro da Carta 2 ====
    printf("\n\n=========  Carta 2  =========\n\n");
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);

    printf("Digite o número da carta (1-4): ");
    scanf("%d", &numero_carta2);
    sprintf(codigo2, "%c%02d", estado2, numero_carta2);

    printf("Digite o nome da Cidade: ");
    scanf("%49s", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos2);

    // Calculando densidade
    densidade2 = area2 > 0 ? (float)populacao2 / area2 : 0;

    // ==== Menu Principal ====
    int opcao;
    do {
        printf("\n\n=========  SUPER TRUNFO AVANÇADO =========\n");
        printf("1 - Comparar cartas usando dois atributos\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int atributo1 = 0, atributo2 = 0;
            bool atributos_validos = false;
            
            // Seleção do primeiro atributo
            do {
                printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
                printf("%d - %s\n", POPULACAO, nomeAtributo(POPULACAO));
                printf("%d - %s\n", AREA, nomeAtributo(AREA));
                printf("%d - %s\n", PIB, nomeAtributo(PIB));
                printf("%d - %s\n", PONTOS_TURISTICOS, nomeAtributo(PONTOS_TURISTICOS));
                printf("%d - %s (menor valor vence)\n", DENSIDADE, nomeAtributo(DENSIDADE));
                printf("Opção: ");
                scanf("%d", &atributo1);
                
                if (atributo1 < POPULACAO || atributo1 > DENSIDADE) {
                    printf("Atributo inválido! Escolha entre %d e %d.\n", POPULACAO, DENSIDADE);
                }
            } while (atributo1 < POPULACAO || atributo1 > DENSIDADE);
            
            // Seleção do segundo atributo (diferente do primeiro)
            do {
                printf("\nEscolha o SEGUNDO atributo para comparação (diferente do primeiro):\n");
                
                // Mostrar apenas atributos não selecionados
                for (int i = POPULACAO; i <= DENSIDADE; i++) {
                    if (i != atributo1) {
                        printf("%d - %s", i, nomeAtributo(i));
                        if (i == DENSIDADE) printf(" (menor valor vence)");
                        printf("\n");
                    }
                }
                
                printf("Opção: ");
                scanf("%d", &atributo2);
                
                if (atributo2 == atributo1) {
                    printf("Você já selecionou este atributo! Escolha um diferente.\n");
                } else if (atributo2 < POPULACAO || atributo2 > DENSIDADE) {
                    printf("Atributo inválido! Escolha entre %d e %d (exceto %d).\n", 
                           POPULACAO, DENSIDADE, atributo1);
                }
            } while (atributo2 == atributo1 || atributo2 < POPULACAO || atributo2 > DENSIDADE);
            
            // ==== Comparação dos Atributos ====
            printf("\n=========  RESULTADO DA COMPARAÇÃO  =========\n");
            printf("Carta 1: %s (%s)\n", cidade1, codigo1);
            printf("Carta 2: %s (%s)\n\n", cidade2, codigo2);
            
            // Comparação do primeiro atributo
            int resultado1, resultado2;
            float soma1 = 0, soma2 = 0;
            
            printf("1º Atributo: %s\n", nomeAtributo(atributo1));
            
            // Obter valores e comparar o primeiro atributo
            switch(atributo1) {
                case POPULACAO:
                    printf("- %s: %lu habitantes\n", cidade1, populacao1);
                    printf("- %s: %lu habitantes\n", cidade2, populacao2);
                    resultado1 = compararAtributo(atributo1, 0, 0, populacao1, populacao2);
                    soma1 += populacao1;
                    soma2 += populacao2;
                    break;
                    
                case AREA:
                    printf("- %s: %.2f km²\n", cidade1, area1);
                    printf("- %s: %.2f km²\n", cidade2, area2);
                    resultado1 = compararAtributo(atributo1, area1, area2, 0, 0);
                    soma1 += area1;
                    soma2 += area2;
                    break;
                    
                case PIB:
                    printf("- %s: R$ %.2f bilhões\n", cidade1, pib1);
                    printf("- %s: R$ %.2f bilhões\n", cidade2, pib2);
                    resultado1 = compararAtributo(atributo1, pib1, pib2, 0, 0);
                    soma1 += pib1;
                    soma2 += pib2;
                    break;
                    
                case PONTOS_TURISTICOS:
                    printf("- %s: %d pontos\n", cidade1, num_pontos1);
                    printf("- %s: %d pontos\n", cidade2, num_pontos2);
                    resultado1 = compararAtributo(atributo1, 0, 0, num_pontos1, num_pontos2);
                    soma1 += num_pontos1;
                    soma2 += num_pontos2;
                    break;
                    
                case DENSIDADE:
                    printf("- %s: %.2f hab/km²\n", cidade1, densidade1);
                    printf("- %s: %.2f hab/km²\n", cidade2, densidade2);
                    resultado1 = compararAtributo(atributo1, densidade1, densidade2, 0, 0);
                    // Para densidade, menor valor é melhor, então invertemos a soma
                    soma1 += 1/densidade1;
                    soma2 += 1/densidade2;
                    break;
            }
            
            // Exibir resultado da primeira comparação
            printf("\nResultado 1º atributo: ");
            if (resultado1 == 1) printf("%s venceu!\n", cidade1);
            else if (resultado1 == 2) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            
            // Comparação do segundo atributo
            printf("\n2º Atributo: %s\n", nomeAtributo(atributo2));
            
            switch(atributo2) {
                case POPULACAO:
                    printf("- %s: %lu habitantes\n", cidade1, populacao1);
                    printf("- %s: %lu habitantes\n", cidade2, populacao2);
                    resultado2 = compararAtributo(atributo2, 0, 0, populacao1, populacao2);
                    soma1 += populacao1;
                    soma2 += populacao2;
                    break;
                    
                case AREA:
                    printf("- %s: %.2f km²\n", cidade1, area1);
                    printf("- %s: %.2f km²\n", cidade2, area2);
                    resultado2 = compararAtributo(atributo2, area1, area2, 0, 0);
                    soma1 += area1;
                    soma2 += area2;
                    break;
                    
                case PIB:
                    printf("- %s: R$ %.2f bilhões\n", cidade1, pib1);
                    printf("- %s: R$ %.2f bilhões\n", cidade2, pib2);
                    resultado2 = compararAtributo(atributo2, pib1, pib2, 0, 0);
                    soma1 += pib1;
                    soma2 += pib2;
                    break;
                    
                case PONTOS_TURISTICOS:
                    printf("- %s: %d pontos\n", cidade1, num_pontos1);
                    printf("- %s: %d pontos\n", cidade2, num_pontos2);
                    resultado2 = compararAtributo(atributo2, 0, 0, num_pontos1, num_pontos2);
                    soma1 += num_pontos1;
                    soma2 += num_pontos2;
                    break;
                    
                case DENSIDADE:
                    printf("- %s: %.2f hab/km²\n", cidade1, densidade1);
                    printf("- %s: %.2f hab/km²\n", cidade2, densidade2);
                    resultado2 = compararAtributo(atributo2, densidade1, densidade2, 0, 0);
                    // Para densidade, menor valor é melhor, então invertemos a soma
                    soma1 += 1/densidade1;
                    soma2 += 1/densidade2;
                    break;
            }
            
            // Exibir resultado da segunda comparação
            printf("\nResultado 2º atributo: ");
            if (resultado2 == 1) printf("%s venceu!\n", cidade1);
            else if (resultado2 == 2) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            
            // ==== Resultado Final ====
            printf("\n=== RESULTADO FINAL ===\n");
            printf("Soma dos atributos para %s: %.2f\n", cidade1, soma1);
            printf("Soma dos atributos para %s: %.2f\n", cidade2, soma2);
            
            if (soma1 > soma2) {
                printf("\n🏆 %s VENCEU A RODADA! 🏆\n", cidade1);
            } else if (soma2 > soma1) {
                printf("\n🏆 %s VENCEU A RODADA! 🏆\n", cidade2);
            } else {
                printf("\nEMPATE! As cartas são igualmente fortes.\n");
            }
            
            printf("\nPressione Enter para continuar...");
            getchar(); // Limpa o buffer
            getchar(); // Espera Enter
        }
    } while (opcao != 0);

    printf("\nObrigado por jogar Super Trunfo!\n");
    return 0;
}