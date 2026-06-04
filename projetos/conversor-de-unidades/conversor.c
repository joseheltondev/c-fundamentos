#include <stdio.h>

float converter_comprimento(int origem, int destino, float valor) {
    //convertendo a unidade de origem para a unidade metros
    switch (origem) {
    case 1:
        valor = valor * 1; // Metro para metro
        break;
    case 2:
        valor = valor / 100; // Centímetro para metro
        break;
    case 3:
        valor = valor / 1000; // Milímetro para metro
        break;
    case 4:
        valor = valor * 1000; // Quilômetro para metro
        break;
    }

    //convertendo de metros para a unidade de destino
    switch (destino) {
    case 1:
        valor = valor * 1; // Metro para metro
        break;
    case 2:
        valor = valor * 100; // Metro para Centímetro
        break;
    case 3:
        valor = valor * 1000; // Metro para Milímetro
        break;
    case 4:
        valor = valor / 1000; // Metro para Quilômetro
        break;
    }

    return valor;
}

float converter_massa(int origem, int destino, float valor) {
    //convertendo a unidade de origem para a unidade grama
    switch (origem) {
    case 1:
        valor = valor * 1000; // Quilograma para grama
        break;
    case 2:
        valor = valor * 1; // Grama para grama
        break;
    case 3:
        valor = valor / 1000; // Miligrama para grama
        break;
    case 4:
        valor = valor * 1000000; // Tonelada para grama
        break;
    }

    //convertendo de gramas para a unidade de destino
    switch (destino) {
    case 1:
        valor = valor / 1000; // Grama para quilograma
        break;
    case 2:
        valor = valor * 1; // Grama para grama
        break;
    case 3:
        valor = valor * 1000; // Grama para miligrama
        break;
    case 4:
        valor = valor / 1000000; // Grama para tonelada
        break;
    }

    return valor;
}



int main(){
    
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
            printf("Digite a opção da unidade de destino:");
            scanf("%d", &destino);

            //Validação da opção escolhida
            while(destino < 1 || destino > 3) {
                printf("Opção inválida. Digite uma opção de 1 a 3: ");
                scanf("%d", &destino);
            }

            break;
        case 5:
            printf("Saindo...\n");
            break;
    }

    return 0;
}