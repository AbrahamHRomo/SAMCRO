#include<stdio.h>
#include<stdlib.h>

int fibonacci_funcion(int num){

  if (num == 0 || num == 1){
        return 1;
  }else {
        return fibonacci_funcion(num - 1) + fibonacci_funcion(num - 2);
  }
}

int main (int arg_cont, char **arg_V){ //solo colocan un contador entero dentro del main y una arreglo de cadenas
                                       //que capturara las veces que queramos que se ejecute el programa
    int valor = 0;
    int i = 0;

    for (i = 1; i < arg_cont; i ++){  //nuerto contador no va a indicar cuantas veces se llamo el programa
            valor = atoi(arg_V[i]);   //arg_V contiene en cadena de caracteres los valores con los que se mando llamar a la funcion
                                      //atoi transforma las cadenas con caracteres numericos en enteros...
            printf("\nTermino: %d\tValor del termino: %d", valor, fibonacci_funcion(valor));
    }
    printf("\n");


  return 0;
}
