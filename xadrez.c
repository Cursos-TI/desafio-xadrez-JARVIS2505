#include <stdio.h>

int main() {
    // ========================
    // SIMULAÇÃO DO MOVIMENTO DAS PEÇAS DE XADREZ
    // Torre, Bispo e Rainha
    // ========================

    // ========================
    // TORRE → movimenta-se 5 casas para a direita
    // Estrutura de repetição: FOR
    // ========================
    int casas_torre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    // ========================
    // BISPO → movimenta-se 5 casas na diagonal para cima e à direita
    // Estrutura de repetição: WHILE
    // ========================
    int casas_bispo = 5;
    int contador_bispo = 1;
    printf("\nMovimento do BISPO:\n");
    while (contador_bispo <= casas_bispo) {
        printf("Cima, Direita (%d)\n", contador_bispo);
        contador_bispo++;
    }

    // ========================
    // RAINHA → movimenta-se 8 casas para a esquerda
    // Estrutura de repetição: DO-WHILE
    // ========================
    int casas_rainha = 8;
    int contador_rainha = 1;
    printf("\nMovimento da RAINHA:\n");
    do {
        printf("Esquerda (%d)\n", contador_rainha);
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    return 0;
}
