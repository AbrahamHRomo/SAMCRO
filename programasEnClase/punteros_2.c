#include <stdio.h>

int main(){

  char *puntero;

  char arreglo_char[] = {'h','o','l','a'};

  puntero = &arreglo_char;

  printf("valor de mi puntero (referencia o direccion en memoria) \n");

  printf("%d \n", puntero);

  printf("el valor de donde mi puntero esta apuntando \n");

  printf("%c \n", *puntero);

  printf("valor de mi puntero (referencia o direccion en memoria) \n");

  printf("%d \n", puntero+1);

  printf("el valor de donde mi puntero esta apuntando \n");

  printf("%c \n", *(puntero+1));

  printf("valor de mi puntero (referencia o direccion en memoria) \n");

  printf("%d \n", puntero+2);

  printf("el valor de donde mi puntero esta apuntando \n");

  printf("%c \n", *(puntero+2));

  printf("valor de mi puntero (referencia o direccion en memoria) \n");

  printf("%d \n", puntero+3);

  printf("el valor de donde mi puntero esta apuntando \n");

  printf("%c \n", *(puntero+3));

  printf("el valor de donde mi puntero esta apuntando \n");

  printf("%c \n", *(puntero+4));

return 0;}
