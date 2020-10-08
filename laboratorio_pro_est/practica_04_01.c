#include<stdio.h>
#include<stdlib.h>

int main()
{
  int numero_esclavo;
  float sueldo_trabajador;
  printf("Ingrese el numero de trabajor; ");
  scanf("%d", &numero_esclavo);
  printf("\nIngrese sueldo base: ");
  scanf("%f", &sueldo_trabajador);

    if(sueldo_trabajador < 5000 && sueldo_trabajador > 0){
      sueldo_trabajador = sueldo_trabajador * 1.15;
    } else { if (sueldo_trabajador >= 5000 && sueldo_trabajador <= 15000)
               { sueldo_trabajador = (float) sueldo_trabajador * 1.10;
               } else { if (sueldo_trabajador > 15000) {
                          sueldo_trabajador = (float) sueldo_trabajador * 1.07;
               } else { printf("El sueldo ingresado es invalido.");
                       }
               }
    }
  system("cls");
  if (sueldo_trabajador > 0){printf("\nNumero de empleado: %d\tEl nuevo sueldo es: %8.2f", numero_esclavo, sueldo_trabajador);}
  return 0;
}
