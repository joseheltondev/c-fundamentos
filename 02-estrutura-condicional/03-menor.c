#include <stdio.h>

/*
    exercicio 03 - menor
    Programa que lê três valores inteiros e exibe o menor deles.
*/

int main() {

    int a, b, c, menor;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    printf("Terceiro valor: ");
    scanf("%d", &c);

    menor = a;
    if (menor > b) {
        menor = b;
    }
    if (menor > c) {
        menor = c;
    }

    printf("Menor = %d", menor);

    return 0;
}