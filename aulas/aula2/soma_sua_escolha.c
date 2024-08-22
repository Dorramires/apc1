#include <stdio.h>

int main(){
  int operacao;
  printf("voce quer fazer qual operação?\n 1.multiplicação(1)\n2.soma(2)\n3.subritação(3)\n!use os caraquiteres mostrado!\nqual operação: ");
  scanf("%d", &operacao);
  while (x != 0){
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
    }
  }
  return(0);
}