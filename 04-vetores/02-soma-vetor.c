#include <stdio.h>

/*
    exercicio 02 - soma vetor
    Programa que lê um número inteiro e armazena em um vetor, depois imprime a soma e a média dos elementos.
*/

int main()
{
    int n, i;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES = ");
    for (i = 0; i < n; i++) {
        printf("%.1lf ", vet[i]);
    }

    soma = 0;
    for (i = 0; i < n; i++) {
        soma = soma + vet[i];
    }
    printf("\nSOMA = %.2lf\n", soma);

    media = soma / n;
    printf("MEDIA = %.2lf\n", media);

    return 0;
}