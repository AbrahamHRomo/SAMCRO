#include<stdio.h>

int main(){
int altura, ancho;
int i, j;
char caracter = '*';

printf("Ingrese Ancho del cuadrilatero: " );
scanf("%d", &ancho);
printf("\nIngrese altura del cuadrilatero: " );
scanf("%d", &altura);
printf("\n\n" );

if (altura > 0 && ancho > 0){
   for(j = 0; j < altura; j ++){
      for(i = 0; i < ancho; i ++){
         printf("%c ", caracter  );    }
      printf("\n" );                          }
    } else { printf("Datos ingresados invalidos. Ejecutar de nuevo el programa y siga las instrucciones\n" );}
printf("\n\n" );

return 0;}
