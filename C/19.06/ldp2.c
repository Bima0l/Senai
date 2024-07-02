
#include <stdio.h>

  //Funcao que recebe dois inteiros e retorna a soma deles
  int somar (int a, int b){
  int resultado = a + b;
  return resultado;

}

int main ()
{
  int x = 5;
  int y = 3;

  int soma = somar (x, y);
  printf ("A soma de %d e %d é %d\n", x, y, soma);

  return 0;


}
