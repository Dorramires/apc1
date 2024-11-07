#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao = 0;
    int fora;
    char jogador1[10] = "x";
    char jogador2[10] = "o";

    while ( opcao != 4){
        opcao = 0;
        system("clear");
        printf("MENU PRINCIPAL\n\n");
        printf("1 - Iniciar jogo\n");
        printf("2 - Nomes dos jogadores\n");
        printf("3 - Recordes\n");
        printf("4 - sair\n");
        printf("Entre com uma opcao:");
        scanf("%i", &opcao);
        while (getchar() != '\n');

        switch (opcao) {
            case 1 : 
                while(1){
                    char tabuleiro[5][5] = {
                        {' ', '|', ' ', '|', ' '},
                        {'-', '|', '-', '|', '-'},
                        {' ', '|', ' ', '|', ' '},
                        {'-', '|', '-', '|', '-'},
                        {' ', '|', ' ', '|', ' '},
                    };
                    char move[3];
                    int dest_x, dest_y;
                    int turno = 1;
                    char quem;
                    int usados = 0;
                    fora = 1;

                    while (fora == 1) {
                        system("clear");
                        // Exibir de quem é a vez
                        printf("Vez do %s!\n", turno == 1 ? jogador1 : jogador2);

                        // Mostrar o tabuleiro
                        printf("  a   b   c \n");
                        for (int i = 0; i < 5; i++) {
                            if ((5 - i) % 2 != 0) {
                                printf("%d ", (5 - i) / 2 + 1);
                            } else {
                                printf("  ");
                            }
                            for (int j = 0; j < 5; j++) {
                                printf("%c ", tabuleiro[i][j]);
                            }
                            if ((5 - i) % 2 != 0) {
                                printf("%d\n", (5 - i) / 2 + 1);
                            } else {
                                printf("\n");
                            }
                        }
                        printf("  a   b   c \n");

                        // Capturar o movimento
                        int set = 1;
                        while (set == 1 && fora == 1) {
                            printf("Digite seu movimento (ex: a3) ou 'q' para sair: ");
                            scanf("%s", move);
                            while (getchar() != '\n');

                            if (move[0] == 'q') {
                                fora =2;
                                break;
                            }

                            switch (move[1]) {
                                case '1': dest_x = 4; break;
                                case '2': dest_x = 2; break;
                                case '3': dest_x = 0; break;
                                default:
                                    printf("Coordenadas invalidas, tente novamente.\n");
                                    continue;
                            }

                            
                            switch (move[0]) {
                                case 'a': dest_y = 0; set = 0; break;
                                case 'b': dest_y = 2; set = 0; break;
                                case 'c': dest_y = 4; set = 0; break;
                                default:
                                    printf("Coordenadas invalidas, tente novamente.\n");
                                    continue;
                            }

                            // Validar movimento
                            if (tabuleiro[dest_x][dest_y] != ' ') {
                                printf("Movimento invalido! Jogue novamente.\n");
                                set = 1;
                            } else {
                                quem = (turno == 1) ? 'x' : 'o';
                                tabuleiro[dest_x][dest_y] = quem;
                                ++usados;

                                // Verificar condições de vitória ou velha
                                if ((tabuleiro[0][0] == quem && tabuleiro[2][2] == quem && tabuleiro[4][4] == quem) ||  // Diagonal 1
                                    (tabuleiro[0][4] == quem && tabuleiro[2][2] == quem && tabuleiro[4][0] == quem) ||  // Diagonal 2
                                    (tabuleiro[0][0] == quem && tabuleiro[2][0] == quem && tabuleiro[4][0] == quem) ||  // Coluna a
                                    (tabuleiro[0][2] == quem && tabuleiro[2][2] == quem && tabuleiro[4][2] == quem) ||  // Coluna b
                                    (tabuleiro[0][4] == quem && tabuleiro[2][4] == quem && tabuleiro[4][4] == quem) ||  // Coluna c
                                    (tabuleiro[0][0] == quem && tabuleiro[0][2] == quem && tabuleiro[0][4] == quem) ||  // Linha 3
                                    (tabuleiro[2][0] == quem && tabuleiro[2][2] == quem && tabuleiro[2][4] == quem) ||  // Linha 2
                                    (tabuleiro[4][0] == quem && tabuleiro[4][2] == quem && tabuleiro[4][4] == quem)) {  // Linha 1
                                    system("clear");
                                    printf("  a   b   c \n");
                                    for (int i = 0; i < 5; i++) {
                                        if ((5 - i) % 2 != 0) {
                                            printf("%d ", (5 - i) / 2 + 1);
                                        } else {
                                            printf("  ");
                                        }
                                        for (int j = 0; j < 5; j++) {
                                            printf("%c ", tabuleiro[i][j]);
                                        }
                                        if ((5 - i) % 2 != 0) {
                                            printf("%d\n", (5 - i) / 2 + 1);
                                        } else {
                                            printf("\n");
                                        }
                                    }
                                    printf("  a   b   c \n");
                                    printf("TEMOS UM VENCEDOR!\n");
                                    printf("O jogador %s venceu o jogo!\n", turno == 1 ? jogador1 : jogador2);
                                    fora = 0;
                                } else if (usados == 9) {
                                    printf("Que pena, o jogo deu velha.\nVamos jogar novamente?\n");
                                    fora = 0;
                                }

                                turno = 3 - turno;  // Alterna entre 1 e 2
                            }
                        }

                        if (fora == 0) {
                            // Pausar para reiniciar o jogo
                            printf("Pressione Enter para jogar novamente...\n");
                            getchar();
                        }else if(fora ==2){
                           break;
                        }
                    }
                    if(fora ==2){
                       break;
                    }
                }
                break;
            case 2 :
                system("clear");
                printf("===============================\n\n");
                printf("* * * NOME DOS JOGADORES * * *\n\n");
                printf("===============================\n\n");
                printf("Digite o nome do jogador 1:\n->");
                scanf("%s", jogador1);
                printf("\n\nDigite o nome do jogador 2:\n->");
                scanf("%s", jogador2);

                //teste
                // printf("jogador 1 =%s e jogador 2 =%s", jogador1, jogador2);
                // getchar();
                break;
            case 3 :
            printf("SEUS RECORDES\n");
                break;
            case 4 :
            printf("Ate mais");
                break;
            default: ("Opcao invalida. Tente novamente!");
        }

    }
    
    return 0;
}
