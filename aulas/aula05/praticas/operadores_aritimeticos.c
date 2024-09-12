#include <stdio.h>


int main(){
  //Entrada
  
  int numero1;
  int numero2;
  float numero3;

  printf("Entre um numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com outro numero: ");
  deu_certo = scanf("%i", &numero2);
  
  printf("Entre com um numero flutuante: ");
  deu_certo = scanf("%f", &numero3);
  
  //Processamento

  int soma = numero1 + numero2;
  int subtracao = numero1 - numero2;
  int multiplicacao = numero1 * numero2;
  int divisao = numero1 / numero2;
  int resto_divisao = numero1 % numero2;
  float fracao = numero1 / numero3;
  
  

  //Saida

  printf("A soma de %i com %i é igual a %i\n", numero1, numero2, soma);

  printf("A subtração de %i com %i é %i\n", numero1, numero2, subtracao);

  printf("A multiplicação de %i e %i é igual a %i\n", numero1, numero2, multiplicacao);

  printf("A divisão de %i e %i é igual a %i\n", numero1, numero2, divisao);
  printf("%i %% %i = %i\n", numero1, numero2, resto_divisao);
  printf("%i / %f = %f\n", numero1, numero3, fracao);
  


  
  return 0;
}
