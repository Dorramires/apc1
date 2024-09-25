#include <stdio.h>


int main(){
  // 1 - c
  // 2 - a
  // 3 - b
  // 4 - a
  // 5 - b
  // 6 - c
  // 7 - e
  // 8 - b
  //09
  int x;
  float y;
  x = 5 - 3 % 2 + 10 / 3;
  printf("%i\n", x);
  y = 10.0 * 2 + 1 - 6 / 3;
  printf("%f\n", y);
  x = 9 + 2 * 3 % 2 - 15 / 4;
  printf("%i\n", x);
  y = 4 / 6 + 2 - 8 * 2.0;
  printf("%f\n", y);

  //10
  // linha 5 - Não foi feito a alocacão na memoria da variavel "a", teria que ser assim scanf("%f", &a);
  // linha 6 - falta colocar o ";" no final do codigo, ficando int b = a-100;
  // linha 9 - o "return" não esta retornando nada, deve ficar assim return 0;




return 0;
}
