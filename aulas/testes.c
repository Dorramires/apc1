#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao = 0;
    char jogador1[20];
    char jogador2[20];

    while ( opcao != 4){
    opcao = 0;
    system("clear");
    printf("MENU PRINCIPAL\n\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Nome dos jogadores\n");
    printf("3 - Recordes\n");
    printf("4 - sair\n");
    printf("Entre com uma opcao:");
    scanf("%i", &opcao);
    while (getchar() != '\n');

    switch (opcao) {
        case 1 :{ 
        
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
            printf("jogador 1 =%s e jogador 2 =%s", jogador1, jogador2);
            getchar();
            break;
        }
        case 3 :{
        printf("SEUS RECORDES\n");
            break;
        }
        case 4 :
        printf("Ate mais");
            break;
        default: ("Opcao invalida. Tente novamente!");
    }
    if (opcao != 4){
            printf("Pressione ENTER para continuar...");
            getchar();
    }
    }



    return 0;
}