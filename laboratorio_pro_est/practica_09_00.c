#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>

int main (){

      char arreglo_nombres[10][50], arreglo_apellidos[10][50];

      for (int i = 0; i < 10; i ++){
            printf("\n\nIngrese nombre %d: ", i + 1);
            scanf("%s", &arreglo_nombres[i][0]);
            printf("\nIngrese apellido: ");
            scanf("%s", &arreglo_apellidos[i][0]);
      }
printf("\nLa lista de nombres es: \n\n");
      for(int i = 0; i < 10; i ++){
            printf("%d.- %s %s \n", i + 1, arreglo_apellidos[i], arreglo_nombres[i]);
      }

return 0;
}
