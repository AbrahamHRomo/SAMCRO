#include<stdio.h>

int main()
{
  char inciso_abecedario = '@';
  int contador;
printf("\n");
  for(contador = 0; contador < 26; contador ++)
    {
      printf("%c, ", inciso_abecedario + contador + 1);
    }
printf("\n");
  printf("%c", 64);
  printf("\n%c", inciso_abecedario);
printf("\n");

return 0;}
