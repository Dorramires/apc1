#include <stdio.h>


int main(){
    // char letra[5] = "a1c2";
    // int num = letra[0] - 'b';
    // int num2 = 8 - (letra[1] - '0');
    // printf("%i\n", num2);
    // printf("%i\n", num);

    char tabuleiro [5][5] = {
        {' ','|',' ','|',' '},
        {'-','|','-','|','-'},
        {' ','|',' ','|',' '},
        {'-','|','-','|','-'},
        {' ','|',' ','|',' '},
    };
    int i,j;
    printf("  a b c d e\n");
        for (i = 0; i < 5; i++) {  // Usando a variável i declarada anteriormente
            printf("%d ", 5 - i);
            for (j = 0; j < 5; j++) {  // Usando a variável j declarada anteriormente
                printf("%c ", tabuleiro[i][j]);
            }
            printf("%d\n", 5 - i);
        }
        printf("  a b c d e\n");



    return 0;
}
