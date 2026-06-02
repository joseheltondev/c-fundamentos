#include <stdio.h>

/*
    exercicio 04 - soma matrizes
    Programa que lê duas matrizes de números inteiros e imprime a soma dos elementos correspondentes.
*/

int main()
{
    int m, n, i, j;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &m);

    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &n);

    int A[m][n], B[m][n], soma[m][n];

    printf("Digite os valores da matriz A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++){
            soma[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("MATRIZ SOMA:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++){
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}