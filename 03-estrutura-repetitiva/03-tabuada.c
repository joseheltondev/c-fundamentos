#include <stdio.h>

/*
    exercicio 03 - tabuada
    Programa que lê um número inteiro e imprime a tabuada de multiplicação desse número.
*/

int main()
{
    int n, i, result;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for (i = 1; i < 11; i++) {
        result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }
    return 0;
}