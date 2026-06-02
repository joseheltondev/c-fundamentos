#include <stdio.h>

/*
    exercicio 06 - sequencia impares
    Programa que lê um número inteiro e imprime todos os números ímpares de 0 até esse número.
*/

int main()
{
    int x, i;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for (i = 0; i <= x; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}