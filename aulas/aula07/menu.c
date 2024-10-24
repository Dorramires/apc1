#include <stdio.h>
#include <stdlib.h>



int main(){

int opcao;

while (opcao != 5){
    opcao = 0;
    system("clear");
    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer recarga\n");
    printf("3 - Ver recados\n");
    printf("4 - Ultimas ligacoes\n");
    printf("5 - Sair\n");
    printf("Entre com uma opcao => ");
    scanf("%i", &opcao);
    while (getchar() != '\n');

    switch (opcao){
    case 1: 
        system("clear");
        printf("CONSULTA SALDO\n\n");
        printf("Seu saldo eh de R$ 10.00 \n\n");
        printf("Presione ENTER para continuar...");
        getchar();
        break;
    case 2:
        system("clear"); 
        printf("RECARGA AGORA\n\n");
        printf("Escolha um valor de recarga: \n\n"); 
        printf("Presione ENTER para continuar...");
        getchar();
        break;
    case 3: 
        system("clear");
        printf("RECADOS\n\n");
        printf("Voce nao tem recados.\n\n");
        printf("Presione ENTER para continuar...");
        getchar(); 
        break;
    case 4:
        system("clear");
        printf("ULTIMAS LIGACOES\n\n"); 
        printf("99999-0000\n99999-1111\n\n");
        printf("Presione ENTER para continuar...");
        getchar(); 
        break;
    case 5: printf("Ate logo!\n"); break;
    default: 
        system("clear");
        printf("Opcao invalida. Tente de novo!\n\n");
        printf("Presione ENTER para continuar...");
        getchar();
    }

    // if(opcao !=5){
    //     printf("Presione ENTER para continuar...");
    //     getchar();
    // }
}




return 0;
}
