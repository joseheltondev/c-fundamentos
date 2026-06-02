#include <stdio.h>

/*
    exercicio 05 - maior posicao
    Programa que lê um número inteiro e armazena em um vetor, depois imprime o maior valor e sua posição.
*/

int main()
{
    int n, i, posicao;
    double maior;

    printf("Quanto numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    posicao = 0;
    maior = vet[0];

    for (i = 1; i < n; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            posicao = i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d\n", posicao);

    return 0;
}