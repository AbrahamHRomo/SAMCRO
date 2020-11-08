#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>

int main (){

      char arreglo_nombres[10][50], arreglo_apellidos[10][50];
      char nombresYapellidos[10][100], arreglo_cadenas[10][100], array[100], array_2[100];
      char nombres_ordenados[10][100];
      float auxiliar;

      for (int i = 0; i < 10; i ++){
            printf("\n\nIngrese nombre %d: ", i + 1);
            scanf("%s", &arreglo_nombres[i][0]);
            printf("\nIngrese apellido: ");
            scanf("%s", &arreglo_apellidos[i][0]);
            strcpy(nombresYapellidos[i], arreglo_apellidos[i]);
            strcpy(nombres_ordenados[i], arreglo_apellidos[i]);
            strcat(nombres_ordenados[i], arreglo_nombres[i]);
            strcat(nombresYapellidos[i], " ");
            strcat(nombresYapellidos[i], arreglo_nombres[i]);
      }
printf("\nLa lista de nombres es: \n\n");
      for(int i = 0; i < 10; i ++){
            printf("%d.- %s \n", i + 1, nombresYapellidos[i]);
      }

      for (int i = 0; i < 9; i ++){
            for (int j = i + 1; j < 10; j ++){
                  auxiliar = strcmp (nombres_ordenados[i], nombres_ordenados[j]);
                  if (auxiliar > 0){
                          strcpy (array, nombres_ordenados[i]);
                          strcpy (nombres_ordenados[i], nombres_ordenados[j]);
                          strcpy (nombres_ordenados[j], array);
                          strcpy (array_2, nombresYapellidos[i]);
                          strcpy (nombresYapellidos[i], nombresYapellidos[j]);
                          strcpy (nombresYapellidos[j], array_2);
                  }
            }
      }

      printf("\nLa lista ordenada de cadenas es: \n\n");
            for(int i = 0; i < 10;  i ++){
                  printf("%d.- %s \n", i + 1, nombresYapellidos[i]);
            }

return 0;
}
