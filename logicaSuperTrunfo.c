#include <stdio.h>

typedef struct {
    char Estado[2];
    char codigo_carta[4];
    char cidade[30];
    unsigned long int populacao;
    float area, pib, densidade, pibpercapita;
    int pontosTuristicos;
} Carta;

// Funções de comparação para os atributos
float compararPopulacao(Carta c1, Carta c2) {
    return c1.populacao - c2.populacao;
}

float compararArea(Carta c1, Carta c2) {
    return c1.area - c2.area;
}

float compararPIB(Carta c1, Carta c2) {
    return c1.pib - c2.pib;
}

float compararPontosTuristicos(Carta c1, Carta c2) {
    return c1.pontosTuristicos - c2.pontosTuristicos;
}

float compararDensidade(Carta c1, Carta c2) {
    return c1.densidade - c2.densidade;
}

// Função para exibir o resultado da comparação
void exibirResultado(char* atributo, Carta c1, Carta c2, float resultado1, float resultado2) {
    printf("\nAtributo Comparado: %s\n", atributo);
    printf("Carta 1 - %s: %.2f\n", c1.cidade, resultado1);
    printf("Carta 2 - %s: %.2f\n", c2.cidade, resultado2);

    if (resultado1 > resultado2) {
        printf("Carta 1 vence este atributo!\n");
    } else if (resultado1 < resultado2) {
        printf("Carta 2 vence este atributo!\n");
    } else {
        printf("Empate neste atributo!\n");
    }
}

// Função para escolher os atributos para comparação
void menuEscolherAtributos(int* atributo1, int* atributo2) {
    int escolha1, escolha2;

    // Menu de seleção de atributos
    printf("Escolha o primeiro atributo (1- População, 2- Área, 3- PIB, 4- Pontos Turísticos, 5- Densidade): ");
    scanf("%d", &escolha1);

    // Garantir que o segundo atributo escolhido não seja o mesmo do primeiro
    do {
        printf("Escolha o segundo atributo (1- População, 2- Área, 3- PIB, 4- Pontos Turísticos, 5- Densidade): ");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1);

    *atributo1 = escolha1;
    *atributo2 = escolha2;
}

int main() {
    // Cartas pré-cadastradas (exemplo de 2 cartas)
    Carta carta1 = {
        "BR", "A01", "São Paulo", 213993437, 8515767, 2105310000, 213993437 / 8515767.0, 2105310000 / 213993437.0, 250000
    };

    Carta carta2 = {
        "AR", "A02", "Buenos Aires", 45600000, 2780400, 450000000, 45600000 / 2780400.0, 450000000 / 45600000.0, 100000
    };

    int atributo1, atributo2;
    float resultado1, resultado2;

    // Escolher os atributos a serem comparados
    menuEscolherAtributos(&atributo1, &atributo2);

    // Comparar o primeiro atributo
    switch (atributo1) {
        case 1: resultado1 = compararPopulacao(carta1, carta2); break;
        case 2: resultado1 = compararArea(carta1, carta2); break;
        case 3: resultado1 = compararPIB(carta1, carta2); break;
        case 4: resultado1 = compararPontosTuristicos(carta1, carta2); break;
        case 5: resultado1 = compararDensidade(carta1, carta2); break;
        default: resultado1 = 0; break;
    }

    // Comparar o segundo atributo
    switch (atributo2) {
        case 1: resultado2 = compararPopulacao(carta1, carta2); break;
        case 2: resultado2 = compararArea(carta1, carta2); break;
        case 3: resultado2 = compararPIB(carta1, carta2); break;
        case 4: resultado2 = compararPontosTuristicos(carta1, carta2); break;
        case 5: resultado2 = compararDensidade(carta1, carta2); break;
        default: resultado2 = 0; break;
    }

    // Exibir resultados da comparação dos atributos
    exibirResultado("Atributo 1", carta1, carta2, resultado1, resultado2);

    // Somar os resultados dos atributos escolhidos
    float soma1 = resultado1 + resultado2;
    float soma2 = resultado1 + resultado2;

    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    // Determinar o vencedor
    if (soma1 > soma2) {
        printf("\nCarta 1 vence a rodada!\n");
    } else if (soma1 < soma2) {
        printf("\nCarta 2 vence a rodada!\n");
    } else {
        printf("\nEmpate na rodada!\n");
    }

    return 0;
}
