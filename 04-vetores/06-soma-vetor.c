#include <stdio.h>

/*
    exercicio 06 - soma vetor
    Programa que lê dois vetores de números inteiros e imprime a soma dos elementos correspondentes.
*/

int main()
{
    int n, i;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &n);

    int A[n], B[n], C[n];

    printf("\nDigite os valores do vetor A:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("\nDigite os valores do vetor B:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    printf("\nVETOR RESULTANTE:\n");
    for (i = 0; i < n; i++) {
        C[i] = A[i] + B[i];
        printf("%d\n", C[i]);
    }

    return 0;
}