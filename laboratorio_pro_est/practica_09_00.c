#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>

int main (){

      char arreglo_nombres[10][50], arreglo_apellidos[10][50];
      char nombresYapellidos[10][100];

      for (int i = 0; i < 10; i ++){
            printf("\n\nIngrese nombre %d: ", i + 1);
            scanf("%s", &arreglo_nombres[i][0]);
            printf("\nIngrese apellido: ");
            scanf("%s", &arreglo_apellidos[i][0]);
            strcpy(nombresYapellidos[i], arreglo_apellidos[i]);
            strcat(nombresYapellidos[i], " ");
            strcat(nombresYapellidos[i], arreglo_nombres[i]);
      }
printf("\nLa lista de nombres es: \n\n");
      for(int i = 0; i < 10; i ++){
            printf("%d.- %s \n", i + 1, nombresYapellidos[i]);
      }

return 0;
}
