#include <stdio.h>

/*
    exercicio 05 - elementos acima diagonal principal
    Programa que lê uma matriz de números inteiros e imprime a soma dos elementos acima da diagonal principal.
*/

int main() {

    int n, i, j, somaAcimaD;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    somaAcimaD = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j > i) {
                somaAcimaD = somaAcimaD + mat[i][j];
            }
        }
    }

    printf("\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", somaAcimaD);

    return 0;
}