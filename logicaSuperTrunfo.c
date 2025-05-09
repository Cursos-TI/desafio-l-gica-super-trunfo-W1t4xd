#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char Estado[2];
    char codigo_carta1[4];
    char cidade[30];
    unsigned long int populacao;
    float area, pib, densidade, pibpercapita;
    int qtdpontosturisticos;

    // Variáveis da carta 2
    char Estado2[2];
    char codigo_carta2[4];
    char cidade2[30];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibpercapita2;
    int qtdpontosturisticos2;

    printf("Iniciando pela carta 1:\n\n");

    printf("Digite uma letra de A a H para o estado da carta 1: ");
    scanf("%s", Estado);
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("Digite o nome da cidade para a carta 1: ");
    scanf("%s", cidade);
    printf("Digite a população da cidade para a carta 1: ");
    scanf("%lu", &populacao);
    printf("Digite a área da cidade em km² para a carta 1: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade para a carta 1: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos para a carta 1: ");
    scanf("%d", &qtdpontosturisticos);

    densidade = populacao / area;
    pibpercapita = pib / populacao;

    printf("\nResumo da carta 1:\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2f\nPIB per capita: %.2f\n",
           Estado, codigo_carta1, cidade, populacao, area, pib, qtdpontosturisticos, densidade, pibpercapita);

    printf("\nIniciando pela carta 2:\n\n");

    printf("Digite uma letra de A a H para o estado da carta 2: ");
    scanf("%s", Estado2);
    printf("Digite o código da carta 2 (ex: A02): ");
    scanf("%s", codigo_carta2);
    printf("Digite o nome da cidade para a carta 2: ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade para a carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade em km² para a carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade para a carta 2: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos para a carta 2: ");
    scanf("%d", &qtdpontosturisticos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("\nResumo da carta 2:\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2f\nPIB per capita: %.2f\n",
           Estado2, codigo_carta2, cidade2, populacao2, area2, pib2, qtdpontosturisticos2, densidade2, pibpercapita2);

    // Menu de comparação
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha um atributo para comparar (1-5): ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s...\n", cidade, cidade2);

    switch(opcao) {
        case 1:
            printf("População: %lu vs %lu\n", populacao, populacao2);
            if (populacao > populacao2)
                printf("Vencedor: %s\n", cidade);
            else if (populacao < populacao2)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %.2f vs %.2f\n", area, area2);
            if (area > area2)
                printf("Vencedor: %s\n", cidade);
            else if (area < area2)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2f vs %.2f\n", pib, pib2);
            if (pib > pib2)
                printf("Vencedor: %s\n", cidade);
            else if (pib < pib2)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %d vs %d\n", qtdpontosturisticos, qtdpontosturisticos2);
            if (qtdpontosturisticos > qtdpontosturisticos2)
                printf("Vencedor: %s\n", cidade);
            else if (qtdpontosturisticos < qtdpontosturisticos2)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Populacional: %.2f vs %.2f\n", densidade, densidade2);
            if (densidade < densidade2)
                printf("Vencedor: %s (menor densidade)\n", cidade);
            else if (densidade > densidade2)
                printf("Vencedor: %s (menor densidade)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 5.\n");
    }

    return 0;
}
