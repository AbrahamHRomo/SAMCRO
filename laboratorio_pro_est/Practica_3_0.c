#include<stdio.h>

int main()
{
        int persona_edad;
        char nombre_del_sujeto [128];

        printf("Ingrese nombre del individuo: ");
        gets (nombre_del_sujeto);
        printf("\nIngrese la edad en anios: " );
        scanf("%d",&persona_edad);

        if(persona_edad < 11 && persona_edad >= 0)
          {
            printf("\n\tLa edad del INFANTE %s es: %d", nombre_del_sujeto, persona_edad);
          }else{
                if(persona_edad < 31 && persona_edad >10)
                  {
                    printf("\n\tLa edad del JOVEN %s es: %d", nombre_del_sujeto, persona_edad);
                  }else{
                        if(persona_edad > 30)
                          {
                            printf("\n\tLa edad del ADULTO %s es: %d", nombre_del_sujeto, persona_edad);
                          }else{
                                printf("\n\tLas instrucciones no se siguieron correctamente, iniciar programa de nuevo." );
                          }
                  }
          }
    return 0;
}
