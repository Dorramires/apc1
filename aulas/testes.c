#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (){
    int opcao = 0;
    char jogador1[20] = "x";
    char jogador2[20] = "o";

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
            case 1 :
            
                break;
            case 2 :
                system("clear");
                printf("===============================\n\n");
                printf("* * * NOME DOS JOGADORES * * *\n\n");
                printf("===============================\n\n");
                for(int i=1; i!=0; i++){
                    char teste1[20]={0};
                    char teste2[20]={0};
        
                    printf("Digite o nome do jogador 1:\n->");
                    scanf("%s", jogador1);
                    while (getchar() != '\n');
                    for(int j=0; j<strlen(jogador1); j++){
                        teste1[j] = toupper(jogador1[j]);
                    }
                    for(int l=0; l<strlen(jogador2); l++){
                        teste2[l] = toupper(jogador2[l]);
                    }
                    if(strcmp(teste1, teste2)== 0){
                        printf("O nome %s e igual a do jogador 2! Escolha outro nome...\n", jogador1);
                        memset(jogador1, 0, sizeof(jogador1));
                        getchar();
                    }else{
                        for(int k=1; k!=0; k++){
                            printf("\n\nDigite o nome do jogador 2:\n->");
                            scanf("%s", jogador2);
                            while (getchar() != '\n');
                            for(int l=0; l<strlen(jogador2); l++){
                                teste2[l] = toupper(jogador2[l]);
                            }
                            if(strcmp(teste2, teste1)== 0){
                                printf("O nome %s e igual a do jogador 2! Escolha outro nome...\n", jogador2);
                                memset(jogador2, 0, sizeof(jogador2));
                                getchar();
                            }else{
                                i=-1;
                                break;
                            }
                        }
                    }
                }

                break;
            
            case 3 :
                printf("SEUS RECORDES\n");
                break;
            
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

