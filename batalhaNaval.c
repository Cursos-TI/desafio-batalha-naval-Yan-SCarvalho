#include <stdio.h>

int main() {
    // Tabuleiro 10x10: linhas 0 a 9, colunas A a J
    int tabuleiro[10][10];

    // Inicializa com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio vertical: começa em linha 2, coluna C (índice 2, 2), tamanho 3
    for (int i = 0; i < 3; i++) {
        tabuleiro[2 + i][2] = 3;
    }

    // Navio horizontal: começa em linha 6, coluna B (índice 6, 1), tamanho 3
    for (int i = 0; i < 3; i++) {
        tabuleiro[6][1 + i] = 3;
    }

    // Navio diagonal 1: começa em linha 0, coluna 0, tamanho 3 (↘)
    for (int i = 0; i < 3; i++) {
        tabuleiro[0 + i][0 + i] = 3;
    }

    // Navio diagonal 2: começa em linha 3, coluna 6, tamanho 3 (↙)
    for (int i = 0; i < 3; i++) {
        tabuleiro[3 + i][6 - i] = 3;
    }

    // Imprime cabeçalho das colunas com letras
    printf("   ");
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    // Imprime linhas com números de 0 a 9
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
