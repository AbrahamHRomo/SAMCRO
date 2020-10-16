#include <stdio.h>

void imprimir_matriz(int **matrix, int maximos_por_fila, int maximos_por_columna){​​​​

     int indice_y, indice_x;

     for(indice_y = 0; indice_y < maximos_por_fila; indice_y++){​​​​

       for(indice_x = 0; indice_x < maximos_por_columna; indice_x++){​​​​

         printf("%d, ", (matrix + indice_y)[indice_x]);

       }​​​​

       printf("\n");

     }​​​​

 }​​​​



 int** modificar_matriz(int **matriz ,int dimension, int (*funcion_valor)(int, int, int)){​​​​

     int indice_x;

     int indice_y;

     for(indice_y = 0; indice_y < dimension; indice_y++){​​​​

       for(indice_x = 0; indice_x < dimension; indice_x++){​​​​

           int valor = (matriz + indice_y)[indice_x];

           (matriz + indice_y)[indice_x] = funcion_valor(indice_y, indice_x, valor);

       }​​​​

     }​​​​

     return matriz;

 }​​​​

int funcion_sumar_indices(int indice1, int indice2, int valor){​​​​

     printf("funcion llamada con %d %d %d \n", indice1, indice2, valor);

     return indice1 + indice2;

 }​​​​



 int funcion_multiplicar_valor(int indice1, int indice2, int valor){​​​​

     printf("funcion llamada con %d %d %d \n", indice1, indice2, valor);

     return valor*4;

 }​​​​

int main(){​​​​

     int elementos_maximos = 10;

     int matriz_inicial[elementos_maximos][elementos_maximos];

     int **matriz = modificar_matriz(&matriz_inicial, elementos_maximos, funcion_sumar_indices);

    printf("Valores de la matriz: \n");

     imprimir_matriz(&matriz_inicial, elementos_maximos, elementos_maximos);

    matriz = modificar_matriz(&matriz_inicial, elementos_maximos, funcion_multiplicar_valor);

    printf("Valores de la matriz: \n");

     imprimir_matriz(&matriz_inicial, elementos_maximos, elementos_maximos);

     return 0;

 }​​​​
