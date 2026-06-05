#include <stdio.h>
#include "conversoes.h"

int main() {
    
    //Criando as variáveis para armazenar as opções do usuário
    int opcao, origem, destino;
    //Criando as variáveis para armazenar o valor a ser convertido e o resultado da conversão
    double valor, resultado;

    printf("====Conversor de Unidades====\n");
    //Exibição do menu
    printf("Escolha a unidade de origem:\n");
    printf("1. Comprimento:\n");
    printf("2. Massa:\n");
    printf("3. Temperatura:\n");
    printf("4. Tempo:\n");
    printf("5. Sair:\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    //Validação da opção escolhida
    while(opcao < 1 || opcao > 5) {
        printf("Opção inválida. Digite uma opção de 1 a 5: ");
        scanf("%d", &opcao);
    }

    printf("------------------------------\n");
    switch(opcao) {
        case 1:
            //Menu de opções para conversão de comprimento
            printf("Comprimento selecionado!\n");
            printf("Escolha a unidade de origem:\n");
            printf("1. Metro (m)\n");
            printf("2. Centímetro (cm)\n");
            printf("3. Milímetro (mm)\n");
            printf("4. Quilômetro (km)\n");
            printf("Digite a opção da unidade da origem: ");
            scanf("%d", &origem);
            //Validação da opção escolhida
            while(origem < 1 || origem > 4) {
                printf("Opção inválida. Digite uma opção de 1 a 4: ");
                scanf("%d", &origem);
            }
            printf("-------------------------------\n");  

            printf("Agora escolha a unidade de destino:\n");
            printf("1. Metro (m)\n");
            printf("2. Centímetro (cm)\n");
            printf("3. Milímetro (mm)\n");
            printf("4. Quilômetro (km)\n");
            printf("Digite a opção da unidade de destino: ");
            scanf("%d", &destino);
            
            //Validação da opção escolhida
            while(destino < 1 || destino > 4) {
                printf("Opção inválida. Digite uma opção de 1 a 4: ");
                scanf("%d", &destino);
            }
            printf("-------------------------------\n");

            //fazendo a conversão de comprimento
            printf("Digite o Valor a ser convertido: ");
            scanf("%lf", &valor);

            resultado = converter_comprimento(origem, destino, valor);
            printf("Resultado: %.2lf\n", resultado);
            
            break;
        case 2:
            //Menu de opções para conversão de massa
            printf("Massa selecionada!\n");
            printf("Escolha a unidade de origem: \n");
            printf("1. Quilograma (kg)\n");
            printf("2. Grama (g)\n");
            printf("3. Miligrama (mg)\n");
            printf("4. Tonelada (t)\n");
            printf("Digite a opção da unidade de origem: ");
            scanf("%d", &origem);
            
            //Validação da opção escolhida
            while(origem < 1 || origem > 4) {
                printf("Opção inválida. Digite uma opção de 1 a 4: ");
                scanf("%d", &origem);
            }
            printf("-------------------------------\n"); 

            printf("Agora escolha a unidade de destino:\n");
            printf("1. Quilograma (kg)\n");
            printf("2. Grama (g)\n");
            printf("3. Miligrama (mg)\n");
            printf("4. Tonelada (t)\n");
            printf("Digite a opção da unidade de destino: ");
            scanf("%d", &destino);
            
            //Validação da opção escolhida
            while(destino < 1 || destino > 4) {
                printf("Opção inválida. Digite uma opção de 1 a 4: ");
                scanf("%d", &destino);
            }
            printf("-------------------------------\n");  

            //fazendo a conversão de massa
            printf("Digite o Valor a ser convertido: ");
            scanf("%lf", &valor);
            resultado = converter_massa(origem, destino, valor);
            printf("Resultado: %.2lf\n", resultado);

            break;
        case 3:
            //Menu de opções para conversão de temperatura
            printf("Temperatura selecionada!\n");
            printf("Escolha a unidade de origem: \n");
            printf("1. Celsius (°C)\n");
            printf("2. Fahrenheit (°F)\n");
            printf("3. Kelvin (K)\n");
            printf("Digite a opção da unidade da origem: ");
            scanf("%d", &origem);
            
            //Validação da opção escolhida
            while(origem < 1 || origem > 3) {
                printf("Opção inválida. Digite uma opção de 1 a 3: ");
                scanf("%d", &origem);
            }
            printf("-------------------------------\n"); 

            printf("Agora escolha a unidade de destino:\n");
            printf("1. Celsius (°C)\n");
            printf("2. Fahrenheit (°F)\n");
            printf("3. Kelvin (K)\n");
            printf("Digite a opção da unidade de destino: ");
            scanf("%d", &destino);
            
            //Validação da opção escolhida
            while(destino < 1 || destino > 3) {
                printf("Opção inválida. Digite uma opção de 1 a 3: ");
                scanf("%d", &destino);
            }
            printf("-------------------------------\n");

            //fazendo a conversão de temperatura
            printf("Digite o Valor a ser convertido: ");
            scanf("%lf", &valor);
            resultado = converter_temperatura(origem, destino, valor);
            printf("Resultado: %.2lf\n", resultado);

            break;
        case 4:
            printf("Tempo selecionado!\n");
            printf("Escolha a unidade de origem:\n");
            printf("1. Segundo (s)\n");
            printf("2. Minuto (min)\n");
            printf("3. Hora (h)\n");
            printf("Digite a opção da unidade de origem: ");
            scanf("%d", &origem);
            
            //Validação da opção escolhida
            while(origem < 1 || origem > 3) {
                printf("Opção inválida. Digite uma opção de 1 a 3: ");
                scanf("%d", &origem);
            }
            printf("-------------------------------\n"); 

            printf("Agora escolha a unidade de destino:\n");
            printf("1. Segundo (s)\n");
            printf("2. Minuto (min)\n");
            printf("3. Hora (h)\n");
            printf("Digite a opção da unidade de destino: ");
            scanf("%d", &destino);

            //Validação da opção escolhida
            while(destino < 1 || destino > 3) {
                printf("Opção inválida. Digite uma opção de 1 a 3: ");
                scanf("%d", &destino);
            }
            printf("-------------------------------\n");  

            //fazendo a conversão de tempo
            printf("Digite o Valor a ser convertido: ");
            scanf("%lf", &valor);
            resultado = converter_tempo(origem, destino, valor);
            printf("Resultado: %.2lf\n", resultado);

            break;
        case 5:
            printf("Saindo...\n");
            break;
    }

    return 0;
}