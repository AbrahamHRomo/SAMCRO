#include<stdio.h>
#include<stdlib.h>

int main(){
            int piramide, contador_impresiones;

            printf("Ingrese cantidad POSITIVA ENTERA para impresion de piramide: " );
            scanf("%d", &piramide);
            system("cls");

            do{
                contador_impresiones = piramide;
                printf("%d", piramide);
                if(contador_impresiones > 1)
                  {
                    do{
                        printf(", %d", piramide);
                        contador_impresiones = contador_impresiones - 1;

                    }while(contador_impresiones > 1);
                  }
                piramide = piramide - 1;
            }while(piramide >= 1);

            printf("\n");

return 0;}
