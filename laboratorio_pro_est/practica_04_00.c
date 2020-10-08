#include<stdio.h>
#include<stdlib.h>

int main(){
  int tipo_de_enfermedad, edad_del_paciente, dias_de_hospitalizacion;
  float cuenta_hospital;

  printf("\nIngrese la edad del paciente: " );
  scanf("%d",&edad_del_paciente);
  printf("\nIngrese dias de hospitalizacion: ");
  scanf("%d", &dias_de_hospitalizacion);
  system("cls");
  printf("\n\tTipo de\t\tCosto/Paciente/Dia\n\tEnfermedad");
  printf("\n\n\t 1\t\t\t 500");
  printf("\n\t 2\t\t\t 850");
  printf("\n\t 3\t\t\t1250");
  printf("\n\t 4\t\t\t2000");
  printf("\n\nIngrese un tipo de enfermedad del menu anterior: ");
  scanf("%d", &tipo_de_enfermedad);
  switch (tipo_de_enfermedad){
         case 1: cuenta_hospital = (float) dias_de_hospitalizacion * 500; break;
         case 2: cuenta_hospital = (float) dias_de_hospitalizacion * 850; break;
         case 3: cuenta_hospital = (float) dias_de_hospitalizacion * 1250; break;
         case 4: cuenta_hospital = (float) dias_de_hospitalizacion * 2000; break;
       }
       if (edad_del_paciente >= 13 && edad_del_paciente <= 22){
         cuenta_hospital = cuenta_hospital * 1.15;
       }
  system("cls");
  printf("La cuenta del hospital es: %8.2f\nEdad del paciente: %d\nDias de hospitalizacion: %d\nTipo de enfermedad: %d\n", cuenta_hospital, edad_del_paciente, dias_de_hospitalizacion, tipo_de_enfermedad);
return 0;
}
