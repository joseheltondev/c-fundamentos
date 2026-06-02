#include <stdio.h>

/*
    exercicio 06 - caixa
    Programa que lê o preço unitário de um produto, a quantidade comprada e o dinheiro recebido,
    e calcula o troco ou o valor que falta.
*/

int main()
{
    int quantidade;
    double valorUnitario, recebido, total, troco, falta;

    printf("Preco unitario do produto: ");
    scanf("%lf", &valorUnitario);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);

    total = valorUnitario * quantidade;

    if (total < recebido) {
        troco = recebido - total;
        printf("TROCO = %.2lf", troco);
    }
    else {
        falta = total - recebido;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", falta);
    }


    return 0;
}