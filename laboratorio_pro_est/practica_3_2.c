#include<stdio.h>

int main(){
  int x = 2; puts ("Arranque"); // si x es igual a 3 no sale por ningun if ni else.
  if (x <= 2)
  if (x != 0)
       puts ("Hola desde el segundo if" );//si x es x <= 2 && x != 0 seguira esta ruta
    else
       puts ("Hola desde el else" );//si x es x <= 2 && x = 0 seguira esta ruta
    puts ("Fin \n Arranque de nuevo.");//si x es x <= 3 no entrara en el siguiente if por lo tantoterminaria su ejecucion.
    if (x > 3)// si dentro de este if cambia el valor de x, puede si enctonces tomar la ruta del segundo else
      if (x != 0)
        puts ("Hola desde el segundo if 2 ");//si x es x > 3  entonces es mayor a cero 
                                             // y diferente dero por lo tanto seguira 
											 //esta ruta
     else
        puts ("Hola desde el else 2");// esta ruta se la tomara cunado x sea x > 3 && x = 0; jje
     puts ("De nuevo Fin");
return 0;
}
