#include <stdio.h>

int main() {
    int cone[3][5] = {0};
    int cruz[3][5] = {0};
    int octaedro[3][5] = {0};

    // Preenchendo padrão Cone
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            cone[i][j] = 1;
        }
    }

    // Preenchendo padrão Cruz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 1 || j == 2) {
                cruz[i][j] = 1;
            }
        }
    }

    // Preenchendo padrão Octaedro
    for (int i = 0; i < 3; i++) {
        int centro = 2;
        int alcance = i == 1 ? 1 : 0;
        for (int j = centro - alcance; j <= centro + alcance; j++) {
            octaedro[i][j] = 1;
        }
    }

    // Exibindo matriz Cone
    printf("Habilidade: Cone\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Exibindo matriz Cruz
    printf("Habilidade: Cruz\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Exibindo matriz Octaedro
    printf("Habilidade: Octaedro\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
