#include <stdio.h>


int main(){
    char tabuleiro [5][5] = {
        {' ','|',' ','|',' '},
        {'-','|','-','|','-'},
        {' ','|',' ','|',' '},
        {'-','|','-','|','-'},
        {' ','|',' ','|',' '},
    };
    int i, j;
    for (i = 0; i < 5; i++) { 
            for (j = 0; j < 5; j++) { 
                printf("%c ", tabuleiro[i][j]);
            }
            printf("\n");
        }


    return 0;
}
