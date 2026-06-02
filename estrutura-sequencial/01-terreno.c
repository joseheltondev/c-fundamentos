#include <stdio.h>

/*
    exercicio 01 - terreno
    Programa que calcula a área de um terreno retangular e seu valor
    com base no preço do metro quadrado.
*/

int main() {
   
    double larg, compri, area, metq, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &larg);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &compri);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &metq);

    area = (larg * compri);
    printf("Area do terreno = %.2lf\n", area);

    preco = (area * metq);
    printf("Preco do terreno = %.2lf", preco);

    return 0;
}