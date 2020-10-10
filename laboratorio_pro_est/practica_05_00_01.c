#include<stdio.h>

int main(){

int matriz_vinos[6][4];
  int contador_i, contador_j, produccion_espumoso;

  for(contador_j = 0; contador_j < 5; contador_j ++) {
     for(contador_i = 0; contador_i < 3; contador_i ++){
       printf("Ingrese la Venta anual %d del tipo de vino %d: ", contador_i + 1, contador_j + 1);
       scanf("%d", &matriz_vinos[contador_j][contador_i]);
                                          }
    matriz_vinos[contador_j][3] = matriz_vinos[contador_j][0] + matriz_vinos[contador_j][1] +matriz_vinos[contador_j][2];
                                                      }
  if (matriz_vinos[3][0] > matriz_vinos[3][1]){
     produccion_espumoso = matriz_vinos[3][0];  } else {
        if (matriz_vinos[3][1] > matriz_vinos[3][2]){
           produccion_espumoso = matriz_vinos[3][1];  } else {
                 produccion_espumoso = matriz_vinos[3][2];
                                                              }
                                                         }
  matriz_vinos[5][0] = matriz_vinos[0][0] + matriz_vinos[1][0] + matriz_vinos[2][0] + matriz_vinos[3][0] + matriz_vinos[4][0];
  matriz_vinos[5][1] = matriz_vinos[0][1] + matriz_vinos[1][1] + matriz_vinos[2][1] + matriz_vinos[3][1] + matriz_vinos[4][1];
  matriz_vinos[5][2] = matriz_vinos[0][2] + matriz_vinos[1][2] + matriz_vinos[2][2] + matriz_vinos[3][2] + matriz_vinos[4][2];
  for (contador_j = 0; contador_j < 5; contador_j ++){
      printf("La venta de vino tipo %d es de: %d\n", contador_j + 1, matriz_vinos[contador_j][3] );
                                              }
  for (contador_i = 0; contador_i < 3; contador_i ++){
      printf("La venta del periodo anual %d es de: %d\n", contador_i + 1, matriz_vinos[5][contador_i]);
                                                }
  for (contador_i = 0; contador_i < 3; contador_i ++){
      if (matriz_vinos[3][contador_i] == produccion_espumoso){
         printf("La mayor produccion de vino espumoso se dio en el periodo anual %d y fue de %d litros.\n", contador_i + 1, produccion_espumoso);
                                                            }
                                                }

return 0;}
