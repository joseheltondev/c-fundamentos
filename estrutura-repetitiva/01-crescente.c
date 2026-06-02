#include <stdio.h>

/*
    exercicio 01 - crescente
    Programa que lê dois números e exibe se estão em ordem crescente.
*/

int main()
{
    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y) {
        if (x > y) {
            printf("DECRESCENTE!\n");
        }
        else {
            printf("CRESCENTE!\n");
        }

        printf("Digite outros dois numeros:\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }

    return 0;
}