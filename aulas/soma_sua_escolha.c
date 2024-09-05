#include <stdio.h>
#include <string.h> 

int main(){
  int operacao;
  int x = 1;
  char res[] = "s";
  while (x != 0){
  printf("voce quer fazer qual operação?\n 1.multiplicação(1)\n2.soma(2)\n3.subritação(3)\n!use os caraquiteres mostrado!\nqual operação: ");
  scanf("%d", &operacao);
    if(operacao == 1){
      
      int numero01;
      int numero02;
      printf("Digite o primeiro numero: ");
      scanf("%d", &numero01);
      printf("Digite o segundo numero: ");
      scanf("%d", &numero02);
      int mult;
      mult = numero01 * numero02;
      printf("A multiplicação de %d * %d é igual a: %d\n", numero01, numero02, mult);
      
      printf("Voce deseja fazer outra operacao?(s/n) ");
      scanf("%s", &res);
      if (strcmp(res, "s")){
        x = 0;
      }
      else {
        x = 1;
      }
    }
    else if (operacao == 2){
    
      int numero01;
      int numero02;
      printf("Digite o primeiro numero: ");
      scanf("%d", &numero01);
      printf("Digite o segundo numero: ");
      scanf("%d", &numero02);
      int soma;
      soma = numero01 + numero02;
      printf("A soma de %d + %d é igual a: %d\n", numero01, numero02, soma);
      
      printf("Voce deseja fazer outra operacao?(s/n) ");
      scanf("%s", &res);
      if (strcmp(res, "s")){
        x = 0;
      }
      else {
        x = 1;
      }
    }
    else if (operacao == 3){
  
      int numero01;
      int numero02;
      printf("Digite o primeiro numero: ");
      scanf("%d", &numero01);
      printf("Digite o segundo numero: ");
      scanf("%d", &numero02);
      int sub;
      sub = numero01 + numero02;
      printf("A subritação de %d - %d é igual a: %d\n", numero01, numero02, sub);

      printf("Voce deseja fazer outra operacao?(s/n) ");
      scanf("%s", &res);
      if (strcmp(res, "s")){
        x = 0;
      }
      else {
        x = 1;
      }
    }
  }
  return(0);
}