#include <stdio.h>


int main(){
    char tabuleiro [5][5] = {
        {' ','|',' ','|',' '},
        {'-','|','-','|','-'},
        {' ','|',' ','|',' '},
        {'-','|','-','|','-'},
        {' ','|',' ','|',' '},
    };
    char move[3];
    int dest_x, dest_y;
    
    while(1){

        int i, j;

        printf("  a   b   c \n");
        for (i = 0; i < 5; i++) {  // Usando a variável i declarada anteriormente
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
            for (j = 0; j < 5; j++) {  // Usando a variável j declarada anteriormente
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
                printf("Coordenadas invalidas, por favor insira novamente!\n");
            }
            switch (move[0]){
            case 'a':
                dest_y = 0;
                break;
            case 'b':
                dest_y = 2;
                break;
            case 'c':
                dest_y = 4;
                break;
            default:
                printf("Coordenadas invalidas, por favor insira novamente!\n");
            }
            //teste
            printf("%i,", dest_x);
            printf(" %i\n", dest_y);
            set = 0;
        }
        if (move[0] == 'q') {
            break;
        }
        char dest = tabuleiro[dest_x][dest_y];

    }
 
    return 0;
}
