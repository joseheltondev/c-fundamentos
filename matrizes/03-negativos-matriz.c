#include <stdio.h>

/*
    exercicio 03 - maior elemento de cada linha
    Programa que lê uma matriz de números inteiros e imprime o maior elemento de cada linha.
*/

int main()
{
    int n, i, j;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n], maior[n];

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++){
        maior[i] = mat[i][0];

        for (j = 0; j < n; j++){

            if(maior[i] < mat[i][j]){
                maior[i] = mat[i][j];
            }
        }
    }

    printf("MAIOR ELEMENTO DE CADA LINHA:\n");
    for (i = 0; i < n; i++){
        printf("%d\n", maior[i]);
    }

    return 0;
}