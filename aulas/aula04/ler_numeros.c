#include <stdio.h>


int main(){

  int numero = 0;

  printf("vou adivinhar seu numero\nEscolha um numero e digite aqui: ");
  int deu_certo = scanf("%i", &numero);
  
  printf("Seu numero escolhido é ...\n...\n...\n ESTE! >> %i <<\n", numero);

  printf("A leitura deu certo? %i\n", deu_certo);

  int coord_x = 0;
  int coord_y = 0;

  printf("Entre com as coordenadas de um ponto: ");
  deu_certo = scanf("%i %i", &coord_x, &coord_y);
  printf("Voce digitou: (%i, %i)", coord_x, coord_y);
  

  return 0;
}
