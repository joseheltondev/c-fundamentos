#include <stdio.h>

/*
    exercicio 03 - alturas
    Programa que lê dados de várias pessoas e calcula informações sobre suas alturas.
*/

int main()
{
    int n, i, quantM;
    double somaAlt, mediaAlt, porcMenor;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    int idade[n];
    double altura[n];
    char nome[n][50];

    for (i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    somaAlt = 0;
    for (i = 0; i < n; i++) {
        somaAlt = somaAlt + altura[i];
    }
    mediaAlt = somaAlt / n;
    printf("\nAltura media: %.2lf\n", mediaAlt);

    quantM = 0;
    for (i = 0; i < n; i++) {
        if (idade[i] < 16) {
            quantM = quantM + 1;
        }
    }

    porcMenor = quantM * 100.0 / n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", porcMenor);

    for (i = 0; i < n; i++) {
        if (idade[i] < 16) {
            printf("%s\n", nome[i]);
        }

    }

    return 0;
}