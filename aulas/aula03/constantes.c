#include <stdio.h>

#define PI 3.1416
int main(){

  printf("O valor da constante PI eh %f\n", PI);
  // PI = 3.14156239; nao pode!!!(const ja foi definida, const não muda)

  const int MESES_NO_ANO = 12;
  printf("um ano tem %i meses\n", MESES_NO_ANO);
  return 0;
}