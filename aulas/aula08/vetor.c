#include <stdio.h>


int main(){
    int numeros[10];

    numeros[0] = 5;
    numeros[1] = 7;
    numeros[2] = 4;
    numeros[3] = 8;
    numeros[4] = 2;
    numeros[5] = 3;
    numeros[6] = 9;
    numeros[7] = 1;
    numeros[8] = 6;
    numeros[9] = 10;

    for(int i=0; i<10; i++){
        printf("%i, ", numeros[i]);
    }
    printf("\n");

    int numeros2[5][5];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
                numeros2[i][j] = i+j;
                printf("%i ", numeros2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
