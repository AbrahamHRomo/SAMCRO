#include<stdio.h>

int main()
{
  int vino_tinto[3], vino_rosado[3], vino_blanco[3], vino_espumoso[3], vino_generoso[3], totales_anuales[3];
  int total_x_vino[5], k = 0;
  int indice_i, indice_j, produccion_maxima_espumoso = 0;

  for(indice_j = 0; indice_j < 5; )
     { for(indice_i = 0; indice_i < 3; indice_i ++)
          { switch(indice_j)
                  {case 0: k = indice_i + 1;
                           printf("Ingrese la produccion de vino tinto del periodo anual %d: ", indice_i + 1);
                           scanf("%d", &vino_tinto[indice_i]);
                           total_x_vino[indice_j] = total_x_vino[indice_j] + vino_tinto[indice_i];
                           totales_anuales[indice_i] = totales_anuales[indice_i] + vino_tinto[indice_i];
                           break;
                   case 1: k = indice_i + 1;
                           printf("Ingrese la produccion de vino rosado del periodo anual %d: ", indice_i + 1);
                           scanf("%d", &vino_rosado[indice_i]);
                           total_x_vino[indice_j] = total_x_vino[indice_j] + vino_rosado[indice_i];
                           totales_anuales[indice_i] = totales_anuales[indice_i] + vino_rosado[indice_i];
                           break;
                   case 2: k = indice_i + 1;
                           printf("Ingrese la produccion de vino blanco del periodo anual %d: ", indice_i + 1);
                           scanf("%d", &vino_blanco[indice_i]);
                           total_x_vino[indice_j] = total_x_vino[indice_j] + vino_blanco[indice_i];
                           totales_anuales[indice_i] = totales_anuales[indice_i] + vino_blanco[indice_i];
                           break;
                   case 3: k = indice_i + 1;
                           printf("Ingrese la produccion de vino espumoso del periodo anual %d: ", indice_i + 1);
                           scanf("%d", &vino_espumoso[indice_i]);
                           total_x_vino[indice_j] = total_x_vino[indice_j] + vino_espumoso[indice_i];
                           totales_anuales[indice_i] = totales_anuales[indice_i] + vino_espumoso[indice_i];
                           if(vino_espumoso[indice_i] > produccion_maxima_espumoso)
                             { produccion_maxima_espumoso = vino_espumoso[indice_i]; }
                           break;
                   case 4: k = indice_i + 1;
                           printf("Ingrese la produccion de vino generoso del periodo anual %d: ", indice_i + 1);
                           scanf("%d", &vino_generoso[indice_i]);
                           total_x_vino[indice_j] = total_x_vino[indice_j] + vino_generoso[indice_i];
                           totales_anuales[indice_i] = totales_anuales[indice_i] + vino_generoso[indice_i];
                           break;
                  }

          }
indice_j = indice_j + 1;
     }
    printf("La produccion total de vino tinto es: %d \n", total_x_vino[0] );
    printf("La produccion total de vino rosado es: %d \n", total_x_vino[1] );
    printf("La produccion total de vino blanco es: %d \n", total_x_vino[2] );
    printf("La produccion total de vino espumoso es: %d \n", total_x_vino[3] );
    printf("La produccion total de vino generoso es: %d \n", total_x_vino[4] );
    printf("Produccion total anual primer periodo anual: %d \n", totales_anuales[0]);
    printf("Produccion total anual segundo periodo anual: %d \n", totales_anuales[1]);
    printf("Produccion total anual tercer periodo anual: %d \n", totales_anuales[2]);
    if(produccion_maxima_espumoso == vino_espumoso[0]){
      printf("El 1er periodo anual se produjo mayor cantidad de vino espumoso.\n" );
      printf("Cantidad en litros: %d\n", produccion_maxima_espumoso );
    } else { if(produccion_maxima_espumoso == vino_espumoso[1]){
      printf("El 2do periodo anual se produjo mayor cantidad de vino espumoso.\n" );
      printf("Cantidad en litros: %d\n", produccion_maxima_espumoso );
    } else { if(produccion_maxima_espumoso == vino_espumoso[2]){
      printf("El 3er periodo anual se produjo mayor cantidad de vino espumoso.\n" );
      printf("Cantidad en litros: %d\n", produccion_maxima_espumoso );
    }
  }

    }
  return 0;
}
