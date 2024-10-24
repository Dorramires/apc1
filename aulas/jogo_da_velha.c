#include <stdio.h>
#include <stdlib.h>

int main(){
    char tabuleiro [5][5] = {
        {' ','|',' ','|',' '},
        {'-','|','-','|','-'},
        {' ','|',' ','|',' '},
        {'-','|','-','|','-'},
        {' ','|',' ','|',' '},
    };
    char move[3];
    char varMove;
    int dest_x, dest_y;
    int turno = 1;
    char quem;

    while(1){

        int i, j;

        // Exibir de quem é a vez
        if (turno == 1) {
            printf("Vez do x!\n");
        } else {
            printf("Vez do o!\n");
        }

        printf("  a   b   c \n");
        for (i = 0; i < 5; i++) {
            if((5-i) % 2 != 0){
                switch (5-i)
                {
                case 1:
                    printf("%d ", 5 - i);
                    break;
                case 3:
                    printf("%d ", (5-i)-1);
                    break;
                default:
                    printf("%d ", (5-i)-2);
                    break;
                }
            } else{
                printf("  ");
            }
            for (j = 0; j < 5; j++) {
                printf("%c ", tabuleiro[i][j]);
            }
            if((5-i) % 2 != 0){
                switch (5-i)
                {
                case 1:
                    printf("%d\n", 5 - i);
                    break;
                case 3:
                    printf("%d\n", (5-i)-1);
                    break;
                default:
                    printf("%d\n", (5-i)-2);
                    break;
                }
            } else{
                printf(" \n");
            }
        }
        printf("  a   b   c \n");


        // Converter o movimento para coordenadas da matriz
        int set = 1;
        while (set==1){
            printf("Digite seu movimento (ex: a3) ou 'q' para sair: ");
                scanf("%s", move);

            if (move[0] == 'q') {
                break;
            }

            switch (move[1]){
            case '1':
                dest_x = 4;
                break;
            case '2':
                dest_x = 2;
                break;
            case '3':
                dest_x = 0;
                break;
            default:
                printf("Coordenadas invalidas, por favor insira novamente! l1\n");
                continue;
            }
            switch (move[0]){
            case 'a':
                dest_y = 0;
                set = 0;
                break;
            case 'b':
                dest_y = 2;
                set = 0;
                break;
            case 'c':
                dest_y = 4;
                set = 0;
                break;
            default:
                printf("Coordenadas invalidas, por favor insira novamente!l2\n");
                continue;
            }

            //validar movimento e alocar na matrix
            varMove = tabuleiro[dest_x][dest_y];
            if(varMove != ' '){
                system("clear");
                printf("Movimento invalido! Jogue novamente.\n");
            }else{
                if(turno == 1){
                    tabuleiro[dest_x][dest_y] = 'x';
                    //teste
                    tabuleiro[0][0] = 'x';
                    tabuleiro[2][2] = 'x';
                    tabuleiro[4][4] = 'x';
                    //Alguem ganhou?
                    switch (turno)
                    {
                    case 1:quem = 'x';break;
                    
                    default:quem = 'o';
                    }
                    if((tabuleiro[0][0] == tabuleiro[2][2] == tabuleiro[4][4]) || (tabuleiro[0][4] == tabuleiro[2][2] && tabuleiro[2][2] == tabuleiro[4][0])){
                        system("clear");
                        printf("TEMOS UM VENCENDOR!\n\n");
                        printf("O jogador %s venceu o jogo!\n\n", quem);
                        printf("deu certo");
                        move[0] = 'q';
                    }else if ((tabuleiro[0][0] == tabuleiro[2][0] == tabuleiro[4][0]) || (tabuleiro[0][2] == tabuleiro[2][2] == tabuleiro[4][2]) || (tabuleiro[0][4] == tabuleiro[2][4] == tabuleiro[4][4])){
                        system("clear");
                        printf("TEMOS UM VENCENDOR!\n\n");
                        printf("O jogador %s venceu o jogo!\n\n", quem);
                        move[0] = 'q';
                    }else if((tabuleiro[0][0] == tabuleiro[0][2] == tabuleiro[0][4]) || (tabuleiro[2][0] == tabuleiro[2][2] == tabuleiro[2][4]) || (tabuleiro[4][0] == tabuleiro[4][2] == tabuleiro[4][4])){
                        system("clear");
                        printf("TEMOS UM VENCENDOR!\n\n");
                        printf("O jogador %s venceu o jogo!\n\n", quem);
                        move[0] = 'q';
                    }
                    --turno;
                    system("clear");
                }else{
                    tabuleiro[dest_x][dest_y] = 'o';
                    //Alguem ganhou?
                    switch (turno)
                    {
                    case 1:quem = 'x';break;
                    
                    default:quem = 'o';
                    }
                    if((tabuleiro[0][0] && tabuleiro[2][2] && tabuleiro[4][4]) || (tabuleiro[0][4] && tabuleiro[2][2] && tabuleiro[4][0])== quem){
                        system("clear");
                        printf("TEMOS UM VENCENDOR!\n\n");
                        printf("O jogador %s venceu o jogo!\n\n", quem);
                        move[0] = 'q';
                    }else if ((tabuleiro[0][0] && tabuleiro[2][0] && tabuleiro[4][0]) || (tabuleiro[0][2] && tabuleiro[2][2] && tabuleiro[4][2]) || (tabuleiro[0][4] && tabuleiro[2][4] && tabuleiro[4][4])== quem){
                        system("clear");
                        printf("TEMOS UM VENCENDOR!\n\n");
                        printf("O jogador %s venceu o jogo!\n\n", quem);
                        move[0] = 'q';
                    }else if((tabuleiro[0][0] && tabuleiro[0][2] && tabuleiro[0][4]) || (tabuleiro[2][0] && tabuleiro[2][2] && tabuleiro[2][4]) || (tabuleiro[4][0] && tabuleiro[4][2] && tabuleiro[4][4])== quem){
                        system("clear");
                        printf("TEMOS UM VENCENDOR!\n\n");
                        printf("O jogador %s venceu o jogo!\n\n", quem);
                        move[0] = 'q';
                    }
                    ++turno;
                    system("clear");
                }
            }
            if (move[0] == 'q') {
                break;
            }
        }
        if (move[0] == 'q') {
            break;
        }

    }

    return 0;
}
