#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //Declarando variáveis para armazenar as escolhas do jogador e do computador
    int escolhaDoJogador, escolhaDoComputador;
    //Semente para gerar números aleatórios
    srand(time(0));
    //variável para controlar o loop do jogo
    char jogarNovamente;

    //Exibindo o título do jogo
    printf("===============================\n");
    printf("         ** JOKENPO ** \n");
    printf("===============================\n");
    
    while (jogarNovamente != 'N' && jogarNovamente != 'n') {
        printf("Faca Sua escolha:\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Escolha uma opção de 1 até 3 para fazer sua escolha: ");
        scanf("%d", &escolhaDoJogador);

        escolhaDoComputador = rand() % 3 + 1;

        switch (escolhaDoJogador) {
            case 1:
                printf("Jogador: Pedra -");
            break;
            case 2:
                printf("Jogador: Papel -");
            break;
            case 3:
                printf("Jogador: Tesoura -");
            break;
        default:
                printf("Opcao Invalida");
            break;
        }  

            switch (escolhaDoComputador) {
            case 1:
                printf(" Computador: Pedra\n");
            break;
            case 2:
                printf(" Computador: Papel\n");
            break;
            case 3:
                printf(" Computador: Tesoura\n");
            break;
        }

        if (escolhaDoComputador == escolhaDoJogador){
            printf("**EMPATOU**\n");
        }
        else if (escolhaDoJogador == 1 && escolhaDoComputador == 3) {
            printf("**VOCE VENCEU**\n");
        }
        else if (escolhaDoJogador == 2 && escolhaDoComputador == 1) {
            printf("**VOCE VENCEU**\n");
        }
        else if (escolhaDoJogador == 3 && escolhaDoComputador == 2) {
            printf("**VOCE VENCEU**\n");
        }
        else {
            printf("**VOCE PERDEU**\n");
        }
        printf("===============================\n");
        printf("Deseja jogar novamente? (S/N): ");
        scanf(" %c", &jogarNovamente);   
    }

    
        return 0;
    }