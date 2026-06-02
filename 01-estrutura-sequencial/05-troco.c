#include <stdio.h>

/*
    exercicio 05 - troco
    Programa que lê o preço unitário, a quantidade comprada 
    e o dinheiro recebido, calcula e exibe o troco.
 */

int main()
{
    int quantidade;
    double valorUnitario, recebido, total, troco;

    printf("Preço unitario do produto: ");
    scanf("%lf", &valorUnitario);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);

    total = (valorUnitario * quantidade);
    troco = recebido - total;
    printf("TROCO = %.2lf\n", troco);

    return 0;
}