#include<stdio.h>

int main ()
{
  int arreglo[] = {1,3,5,7,9};
  int contador, contador_arreglo = 0, no_elementos = 5;

  for (contador = 0; contador < no_elementos; contador ++)
  {
    printf("%d\n", arreglo[contador_arreglo]);
    contador_arreglo ++;
  }
  return 0;
}
