#include <stdio.h>


int main(){
  char tecla;
  printf("Digite uma tecla: ");
  scanf("%c", &tecla);

  printf("Você digitou: %c\n", tecla);

  char nome[31];
  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("Você digitou: %s\n", nome);
  scanf("%[^\n]s", nome);

  return 0;
}
