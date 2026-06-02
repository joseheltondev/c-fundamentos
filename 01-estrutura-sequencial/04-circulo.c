#include <stdio.h>

/*
    exercicio 04 - circulo
    Programa que lê o valor do raio de um círculo, 
    calcula e exibe sua área.
*/

int main()
{
    double area, r;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    area = (r * r) * 3.14159;
    printf("AREA = %.3lf", area);

    return 0;
}