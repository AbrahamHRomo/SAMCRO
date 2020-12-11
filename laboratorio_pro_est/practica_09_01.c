#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>

int main (){
      int i, j;
      char arreglo_cadenas[10][50], array[50];
      float  auxiliar;

      for (i = 0; i < 10; i ++){
            printf("\n\nIngrese cadena %d: ", i + 1);
            scanf("%s", &arreglo_cadenas[i][0]);
      }
printf("\nLa lista de cadenas es: \n\n");
      for(i = 0; i < 10; i ++){
            printf("%d.- %s \n", i + 1, arreglo_cadenas[i]);
      }

      for (i = 0; i < 9; i ++){
            for (j = i + 1; j < 10; j ++){
                  auxiliar = strcmp (arreglo_cadenas[i], arreglo_cadenas[j]);
                  if (auxiliar > 0){
                          strcpy (array, arreglo_cadenas[i]);
                          strcpy (arreglo_cadenas[i], arreglo_cadenas[j]);
                          strcpy (arreglo_cadenas[j], array);
                  }
            }
      }

      printf("\nLa lista ordenada de cadenas es: \n\n");
            for(i = 0; i < 10;  i ++){
                  printf("%d.- %s \n", i + 1, arreglo_cadenas[i]);
            }

return 0;
}
