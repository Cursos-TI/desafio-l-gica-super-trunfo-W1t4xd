#include <stdio.h>

int main() {

    // Variáveis para a carta 1
    char Estado[1];
    char codigo_carta1[4];
    char cidade[15];
    unsigned long int populacao;  
    float area;
    float pib;
    int qtdpontosturisticos;

    // Variáveis para a carta 2
    char Estado2[1];
    char codigo_carta2[4];
    char cidade2[15];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int qtdpontosturisticos2;
    printf("INSTRUÇÕES DE USO: NÃO USE ESPAÇOS NO NOME DO ESTADO, QUANDO FOR COLOCAR A POPULAÇÃO, PODE USAR  . E , ASSIM COMO OS OUTROS CRITÉRIOS NUMÉRICOS");
    
    printf("Iniciando pela carta 1: \n\n");
    printf("Digite uma letra de A a H para o estado da carta 1: ");
    scanf("%s", Estado);
    printf("Certo, a letra escolhida foi: %s\n", Estado);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade para a carta 1: ");
    scanf("%s", cidade);

    printf("Digite a população da cidade para a carta 1: ");
    scanf("%lu", &populacao);
    printf("População: %lu\n", populacao);

    printf("Digite a área da cidade em km² para a carta 1: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade para a carta 1: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos para a carta 1: ");
    scanf("%d", &qtdpontosturisticos);

    float densidade = (float)populacao / area;
    float pibpercapita = pib / populacao;

    // Entradas para a carta 2
    printf("\nIniciando pela carta 2: \n\n");
    printf("Digite uma letra de A a H para o estado da carta 2: ");
    scanf("%s", Estado2);
    printf("Certo, a letra escolhida foi: %s\n", Estado2);

    printf("Digite o código da carta 2: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade para a carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade para a carta 2: ");
    scanf("%lu", &populacao2); 
    printf("População: %lu\n", populacao2);

    printf("Digite a área da cidade em km² para a carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade para a carta 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos para a carta 2: ");
    scanf("%d", &qtdpontosturisticos2);

    // Cálculos para a carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // comparação do atributo. Atributo escolhido: PIB

    if ( pib > pib2) {
        printf("A cidade %s venceu com o pib de: %0.2f.\n", cidade, pib);
    } else if ( pib2 > pib) {
        printf("A cidade %s venceu com uma pib de: %0.2f.\n", cidade2, pib2 );
    } else {
        printf("Tivemos um empate.");
    }
    
    // comparação entre as densidades populacionais para determinar o vencedor.
    if ( densidade < densidade2) {
        printf("A cidade %s venceu com a densidade de: %.2f.\n", cidade, densidade);
    } else if ( densidade2 < densidade ) {
        printf("A cidade %s venceu com a densidade de: %.2f\n", cidade2, densidade2);
    } else {
        printf("Teve um empate neste embate.");
    }

    // Um adendo, retirei o mecanismo de super poder porque
    return 0;
}
