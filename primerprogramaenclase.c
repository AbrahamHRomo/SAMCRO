#include<stdio.h>

void main()
{
  char caracter = 'e';
  int valor_ascii = (int) caracter;
  printf("El valor del caracter %c es %d\n", caracter, valor_ascii);

  int valor1 = 36, valor2 = 47;
  int suma = valor1 + valor2;
  int resta = valor1 - valor2;
  int producto = valor1 * valor2;
  int division_entera = valor1 / valor2;
  float division_flotante = (float) valor1 / valor2;
  printf("La suma de %d y %d es %d\n", valor1, valor2, suma);
  printf("La resta de %d y %d es %d\n", valor1, valor2, resta);
  printf("El producto de %d y %d es %d\n", valor1, valor2, producto);
  printf("La division entera de %d y %d es %d\n", valor1, valor2, division_entera);
  printf("La division flotante de %d y %d es %f\n", valor1, valor2, division_flotante);

}
