#include <stdio.h>



int main(){

    int numero =0;

    printf("Entre com um numero: ");
    int deu_certo = scanf("%i", &numero);

    int eh_divisivel_por_2 = numero % 2 == 0;

    if (eh_divisivel_por_2){
        printf("O numero %i eh par!\n", numero);
    }
    else{
        printf("O numero %i eh impar!\n", numero);
    }

return 0;
}
