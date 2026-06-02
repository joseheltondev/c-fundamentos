#include <stdio.h>

/*
    exercicio 01 - diagonal negativos
    Programa que lê uma matriz de números inteiros e imprime a diagonal principal e a quantidade de números negativos.
*/

int main()
{
    int n, i, j, negativos;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", mat[i][i]);
    }

    negativos = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] < 0){
                negativos = negativos + 1;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", negativos);

    return 0;
}