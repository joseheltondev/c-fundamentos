#include <stdio.h>

/*
    exercicio 06 - matriz geral
    Programa que lê uma matriz de números reais e realiza várias operações sobre ela.
*/

int main() {

    int n, i, j, linha, coluna;
    double somaP;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    double mat[n][n], alterada[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    somaP = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] > 0) {
                somaP = somaP + mat[i][j];
            }
        }
    }
    printf("\nSOMA DOS POSITIVOS: %.1lf\n", somaP);

    printf("\nEscolha uma linha: ");
    scanf("%d", &linha);

    printf("LINHA ESCOLHIDA: ");
    for (j = 0; j < n; j++) {
        printf("%.1lf ", mat[linha][j]);
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &coluna);

    printf("COLUNA ESCOLHIDA: ");
    for (i = 0; i < n; i++) {
        printf("%.1lf ", mat[i][coluna]);
    }

    printf("\n\nDIAGONAL PRINCIPAL: ");
    for (i = 0; i < n; i++) {
        printf("%.1lf ", mat[i][i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            alterada[i][j] = mat[i][j];
            if (mat[i][j] < 0) {
                alterada[i][j] = alterada[i][j] * alterada[i][j];
            }
        }
    }

    printf("\n\nMATRIZ ALTERADA:");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++) {
            printf("%.1lf ", alterada[i][j]);
        }
    }

    return 0;
}