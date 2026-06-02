#include <stdio.h>

/*
    exercicio 04 - numeros pares
    Programa que lê um número inteiro e armazena em um vetor, depois imprime os números pares.
*/

int main()
{
    int n, i, qtdpares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    qtdpares = 0;
    printf("\nNUMEROS PARES:\n");
    for (i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            printf("%d ", vet[i]);
            qtdpares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d\n", qtdpares);

    return 0;
}