#include<stdio.h>
#include<stdlib.h>



int main(){

int no_alumnos, contador_i = 0;

printf("Ingrese el numero de alumnos: ");
scanf("%d", &no_alumnos);

float matriz_alumnos[no_alumnos][6], promedio_general;
int contador_aprobados = 0, contador_reprobados = 0;

while(contador_i < no_alumnos){
  system("cls");
      printf("Ingrese la matricula del alumno %d: ", contador_i + 1);
      scanf("%f", &matriz_alumnos[contador_i][0]);
      printf("Ingrese Calificacion 1: ");
      scanf("%f", &matriz_alumnos[contador_i][1] );
      matriz_alumnos[contador_i][1] = matriz_alumnos[contador_i][1] * 0.15;
      printf("Ingrese Calificacion 2: ");
      scanf("%f", &matriz_alumnos[contador_i][2] );
      matriz_alumnos[contador_i][2] = matriz_alumnos[contador_i][2] * 0.20;
      printf("Ingrese Calificacion 3: ");
      scanf("%f", &matriz_alumnos[contador_i][3] );
      matriz_alumnos[contador_i][3] = matriz_alumnos[contador_i][3] * 0.30;
      printf("Ingrese Calificacion 4: ");
      scanf("%f", &matriz_alumnos[contador_i][4] );
      matriz_alumnos[contador_i][4] = matriz_alumnos[contador_i][4] * 0.35;
      matriz_alumnos[contador_i][5] = (matriz_alumnos[contador_i][1] + matriz_alumnos[contador_i][2] + matriz_alumnos[contador_i][3] + matriz_alumnos[contador_i][4]);
      if (matriz_alumnos[contador_i][5] >= 70){
         contador_aprobados = contador_aprobados + 1;
      } else { contador_reprobados = contador_reprobados + 1;
             }
      promedio_general = promedio_general + matriz_alumnos[contador_i][5];
      contador_i = contador_i + 1;
}
promedio_general = promedio_general / no_alumnos;

system("cls");
float porcentaje_aprobados = (float) (contador_aprobados * 100) / no_alumnos;
float porcentaje_reprobados = (float) (contador_reprobados * 100) / no_alumnos;
printf("El promedio general del grupo es de: %.2f\n", promedio_general);
printf("\nEl promedio por alumno es el siguiente: \n\n" );
for(contador_i = 0; contador_i < no_alumnos; contador_i ++){
   printf("Matricula: %.0f\tPromedio del alumno %.2f es: \n", matriz_alumnos[contador_i][0], matriz_alumnos[contador_i][5]);
}
printf("\nPorcentaje de Aprobados: %.2f porciento\n", porcentaje_aprobados);
printf("Porcentaje de Reprobados: %.2f porciento\n", porcentaje_reprobados);
printf("Contador aprobados: %d\n", contador_aprobados );
printf("Contador reprobados: %d\n", contador_reprobados );

return 0;}
