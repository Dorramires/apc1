#include <stdio.h>


int main(){
  int matricula;
  float a1, a2, media;

  printf("Digite a matricula: ");
  scanf("%i", &matricula);
  getchar();
  printf("Digite a A1: ");
  scanf("%f", &a1);
  getchar();
  printf("Digite a A2: ");
  scanf("%f", &a2);
  getchar();
  media = (a1+a2)/2;
  printf("Matricula\tA1\tA2\tMadia\n%i\t%.1f\t%.1f\t%.1f\n", matricula, a1, a2, media);
  

  return 0;
}
