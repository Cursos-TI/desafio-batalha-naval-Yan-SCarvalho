#include <stdio.h>

int main() {
    // Tabuleiro com 11 linhas (0 a 10) e 10 colunas (A a J)
    char tabuleiro[11][10];

    // Inicializa com água (~)
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '~';
        }
    }

    // Navio vertical: começa em linha 2, coluna C (índice 2, 2), tamanho 3
    for (int i = 0; i < 3; i++) {
        tabuleiro[2 + i][2] = 'N';
    }

    // Navio horizontal: começa em linha 6, coluna B (índice 6, 1), tamanho 3
    for (int i = 0; i < 3; i++) {
        tabuleiro[6][1 + i] = 'N';
    }

    // Imprime cabeçalho das colunas com letras
    printf("   ");
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    // Imprime linhas com números de 0 a 10
    for (int i = 0; i < 11; i++) {
        printf("%2d ", i); // número da linha
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
