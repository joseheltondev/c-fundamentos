#include <stdio.h>

/*
    exercicio 02 - glicose
    Programa que lê a medida da glicose no sangue e classifica o paciente.
*/

int main()
{
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    printf("Classificacao: ");
    if (glicose <= 100) {
        printf("Normal\n");
    }
    else if (glicose <= 140) {
        printf("Elevado\n");
    }
    else {
        printf("Diabetes\n");
    }

    return 0;
}