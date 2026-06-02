#include <stdio.h>

/*
    exercicio 04 - notas
    Programa que lê as duas notas de um aluno, calcula e exibe a nota final. 
    Se a nota final for menor que 60.00, exibir a mensagem "REPROVADO".
*/

int main() {

    double nota1, nota2, notafinal;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notafinal = nota1 + nota2;
    printf("NOTA FINAL = %.1lf\n", notafinal);

    if (notafinal < 60.00) {
        printf("REPROVADO");
    }

    return 0;
}