#include <stdio.h>

/**
 * DESAFIO XADREZ - MATECHECK (NÍVEL NOVATO)
 * Objetivo: Simular a movimentação de peças utilizando estruturas de repetição.
 * 
 * Regras de Movimentação:
 * - Bispo: 5 casas (Diagonal Superior Direita)
 * - Torre: 5 casas (Direita)
 * - Rainha: 8 casas (Esquerda)
 */

int main() {
    // Definição de constantes para os limites de movimentação
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    // --- MOVIMENTAÇÃO DO BISPO ---
    // Utilizando a estrutura FOR
    // O Bispo se move na diagonal combinando "Cima" e "Direita"
    printf("--- Movimentação do Bispo (%d casas) ---\n", MOV_BISPO);
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Cima, Direita\n");
    }

    // --- MOVIMENTAÇÃO DA TORRE ---
    // Utilizando a estrutura WHILE
    printf("\n--- Movimentação da Torre (%d casas) ---\n", MOV_TORRE);
    int t = 1;
    while (t <= MOV_TORRE) {
        printf("Direita\n");
        t++;
    }

    // --- MOVIMENTAÇÃO DA RAINHA ---
    // Utilizando a estrutura DO-WHILE
    printf("\n--- Movimentação da Rainha (%d casas) ---\n", MOV_RAINHA);
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= MOV_RAINHA);

    return 0;
}

