#include <stdio.h>

/*
    exercicio 02 - soma impares
    Programa que lê dois números e calcula a soma dos números ímpares entre eles.
*/

int main()
{
    int x, y, i, somaI, troca;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        troca = y;
        y = x;
        x = troca;
    }

    somaI = 0;
    for (i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            somaI = somaI + i;
        }
    }

    printf("SOMA DOS IMPARES = %d\n", somaI);

    return 0;