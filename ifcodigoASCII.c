#include<stdio.h>

int main()
{
  char caracter = '?'; //se puede modificar el valor de la variable char para comprobar los if anidados.
  int valor_ascii ;

       valor_ascii = (int) caracter;

             if(valor_ascii >= 48 && valor_ascii <= 57)
             {printf("El valor ASCII del caracter numerico '%c' es '%d'\n", caracter, valor_ascii );
              }else{
                    if(valor_ascii >= 65 && valor_ascii <= 90)
                      {printf("El valor ASCII del caracter '%c' es '%d'\n", caracter, valor_ascii );
                       }else{
                             if(valor_ascii >= 97 && valor_ascii <= 122)
                               {printf("El valor ASCII del caracter '%c' es '%d'\n", caracter, valor_ascii );
                                }else{
                                      printf("El valor ASCII del caracter '%c' es '%d' y pertenece a un caracter especial\n", caracter, valor_ascii );
                       }
                 }
           }
return 0;

}