#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //Declarando variáveis para armazenar as escolhas do jogador e do computador
    int escolhaDoJogador, escolhaDoComputador;
    //Semente para gerar números aleatórios
    srand(time(0));
    //variável para quantidade de partidas
    int rodadas;
    //variável para armazenar o placar do jogo
    int placarJogador = 0, placarComputador = 0, empates = 0;
    //variável para calcular a taxa de vitórias do jogador
    double taxaVitorias;
    
    //Exibindo o título do jogo
    printf("===============================\n");
    printf("         ** JOKENPO ** \n");
    printf("===============================\n");
    
    printf("Quantas rodadas voce deseja jogar? ");
    scanf("%d", &rodadas);
    //Validação da quantidade de rodadas
    while (rodadas < 1) {
        printf("Numero de rodadas invalido! Digite um numero maior que 0: ");
        scanf("%d", &rodadas);
    }

    for (int i = 0; i < rodadas; i++) {
        printf("\n=== Rodada %d de %d ===\n", i + 1, rodadas);
        printf("Faca Sua escolha:\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Escolha uma opção de 1 até 3 para fazer sua escolha: ");
        scanf("%d", &escolhaDoJogador);

        while (escolhaDoJogador < 1 || escolhaDoJogador > 3) {
            printf("Opcao invalida! Digite uma opcao de 1 a 3: ");
            scanf("%d", &escolhaDoJogador);
        }

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
            empates++;
        }
        else if (escolhaDoJogador == 1 && escolhaDoComputador == 3) {
            printf("**VOCE VENCEU**\n");
            placarJogador++;
        }
        else if (escolhaDoJogador == 2 && escolhaDoComputador == 1) {
            printf("**VOCE VENCEU**\n");
            placarJogador++;
        }
        else if (escolhaDoJogador == 3 && escolhaDoComputador == 2) {
            printf("**VOCE VENCEU**\n");
            placarJogador++;
        }
        else {
            printf("**VOCE PERDEU**\n");
            placarComputador++;
        }
        printf("===============================\n");
    }

    //Calculando a taxa de vitórias do jogador
    taxaVitorias = (double)placarJogador / rodadas * 100;

    //Exibindo o placar final do jogo
    printf("         * PLACAR * \n");
    printf("      Jogador: %d\n", placarJogador);
    printf("      Computador: %d\n", placarComputador);
    printf("      Empates: %d\n", empates);
    printf("      Taxa de Vitórias: %.2f%%\n", taxaVitorias);
    printf("===============================\n");

    return 0;
}