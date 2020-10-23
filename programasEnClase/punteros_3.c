#include <stdio.h>

 #include <string.h>

struct Alumno{

     int matricula;

     char nombre[50];

     int semestre;

 };



 int main(){

   struct Alumno alumno_uno;

   alumno_uno.matricula = 1;

   strcpy(alumno_uno.nombre, "jose");

   alumno_uno.semestre = 2;

  struct Alumno *puntero_alumno = &alumno_uno;

   strcpy(puntero_alumno->nombre, "Anastacio");

   printf("valores desde el puntero \n");

   printf("matricula: %d \nnombre: %s \nsemestre: %d \n", (*puntero_alumno).matricula, puntero_alumno->nombre, puntero_alumno->semestre);

  printf("valores en la variable \n");

   printf("matricula: %d \nnombre: %s \nsemestre: %d \n", alumno_uno.matricula, alumno_uno.nombre, alumno_uno.semestre);

 }
