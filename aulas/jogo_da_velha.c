#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int fora;
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
        char jogador1[10] = "Matheus";
        char jogador2[10] = "Lucas";
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

                if (move[0] == 'q') {
                    return 0;
                }

                
                dest_x = -1;
                dest_y = -1;

                
                switch (move[1]) {
                    case '1': dest_x = 4; break;
                    case '2': dest_x = 2; break;
                    case '3': dest_x = 0; break;
                    default:
                        printf("Coordenadas inválidas, tente novamente.\n");
                        continue;
                }

                
                switch (move[0]) {
                    case 'a': dest_y = 0; set = 0; break;
                    case 'b': dest_y = 2; set = 0; break;
                    case 'c': dest_y = 4; set = 0; break;
                    default:
                        printf("Coordenadas inválidas, tente novamente.\n");
                        continue;
                }

                // Se dest_x ou dest_y ainda tiverem valores inválidos, pedir nova entrada
                if (dest_x == -1 || dest_y == -1) {
                    printf("Coordenadas inválidas, tente novamente.\n");
                    continue;
                }

                // Validar movimento
                if (tabuleiro[dest_x][dest_y] != ' ') {
                    printf("Movimento inválido! Jogue novamente.\n");
                    set = 1;
                } else {
                    quem = (turno == 1) ? 'x' : 'o';
                    tabuleiro[dest_x][dest_y] = quem;
                    ++usados;

                    // Verificar condições de vitória ou velha
                    if ((tabuleiro[0][0] == quem && tabuleiro[2][2] == quem && tabuleiro[4][4] == quem) ||  // Diagonal principal
                        (tabuleiro[0][4] == quem && tabuleiro[2][2] == quem && tabuleiro[4][0] == quem) ||  // Diagonal secundária
                        (tabuleiro[0][0] == quem && tabuleiro[2][0] == quem && tabuleiro[4][0] == quem) ||  // Coluna esquerda
                        (tabuleiro[0][2] == quem && tabuleiro[2][2] == quem && tabuleiro[4][2] == quem) ||  // Coluna central
                        (tabuleiro[0][4] == quem && tabuleiro[2][4] == quem && tabuleiro[4][4] == quem) ||  // Coluna direita
                        (tabuleiro[0][0] == quem && tabuleiro[0][2] == quem && tabuleiro[0][4] == quem) ||  // Linha superior
                        (tabuleiro[2][0] == quem && tabuleiro[2][2] == quem && tabuleiro[2][4] == quem) ||  // Linha central
                        (tabuleiro[4][0] == quem && tabuleiro[4][2] == quem && tabuleiro[4][4] == quem)) {  // Linha inferior

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
                getchar();  // Segunda chamada para garantir a pausa após o prompt, teve muitos casos de não pausar.
            }
        }
    }
    return 0;
}
