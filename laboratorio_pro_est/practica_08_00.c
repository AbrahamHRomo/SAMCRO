#include<stdio.h>

int main()
{
  float matriz_calificaciones[11][3], promedio_general;
  int contador_1 = 0, contador_2 = 0;

  for(contador_1 = 0; contador_1 < 11; contador_1 ++)
    {
      for(contador_2 = 0; contador_2 < 3; contador_2 ++)
        {
          matriz_calificaciones[contador_1][contador_2] = 0;
        }
    }
  contador_1 = 0, contador_2 = 0;
  do {
        contador_2 = 0;
        printf("\nIngrese calificaciones del alumno %d. \n\n", contador_1 + 1);
        do {
              printf("Ingrese califificacion %d: ", contador_2 + 1);
              scanf("%f", &matriz_calificaciones[contador_1][contador_2]);
              printf("\n");
              matriz_calificaciones[10][contador_2] += matriz_calificaciones[contador_1][contador_2];
              promedio_general += matriz_calificaciones[contador_1][contador_2];
              contador_2 ++;
            } while(contador_2 < 3);
      contador_1 ++;
    } while(contador_1 < 10);

printf("\nLa matriz es la siguiente:\n\n");
for (contador_1 = 0; contador_1 < 10; contador_1 ++)
    {
      for (contador_2 = 0; contador_2 < 3; contador_2 ++)
          {
            printf("\t%.2f",matriz_calificaciones[contador_1][contador_2]);
          }
        printf("\n");
    }
  printf("\nEl promedio de la calificacion 1 es: %.2f\n", matriz_calificaciones[10][0] / 10);
  printf("\nEl promedio de la calificacion 2 es: %.2f\n", matriz_calificaciones[10][1] / 10);
  printf("\nEl promedio de la calificacion 3 es: %.2f\n", matriz_calificaciones[10][2] / 10);
  printf("\nEl promedio general del grupo es: %.2f\n", promedio_general / 30);

return 0;
}
