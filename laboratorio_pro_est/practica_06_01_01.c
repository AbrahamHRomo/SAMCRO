#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num_piramide, indicador;
  printf("Ingrese cantidad POSITIVA ENTERA: ");
  scanf("%d", &num_piramide);
  system("cls");
  printf("\n");
  do{
      printf("%d",num_piramide);
      if(num_piramide > 1)
        {
          indicador = num_piramide;
          do{
              printf(", %d", num_piramide);
              indicador = indicador - 1;
            } while(indicador > 1);
        }
      printf("\n");
      num_piramide = num_piramide - 1;
    } while(num_piramide >= 1);

return 0;}
