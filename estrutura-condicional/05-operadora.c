#include <stdio.h>

/*
    exercicio 05 - operadora
    Programa que lê a quantidade de minutos de uma telefônica e calcula o valor a ser pago.
*/

int main()
{
    double valor;
    int minutos;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if (minutos <= 100) {
        valor = 50;
    }
    else {
        valor = ((minutos - 100) * 2.0) + 50;
    }

    printf("Valor a pagar: R$ %.2lf\n", valor);

    return 0;
}