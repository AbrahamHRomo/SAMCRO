#include<stdio.h>
#include<stdlib.h>

int fibonacci_funcion(int num){

  if (num == 0 || num == 1){
        return 1;
  }else {
        return fibonacci_funcion(num - 1) + fibonacci_funcion(num - 2);
  }
}

int main (){

    int valor = 0;

    do{
            printf("\nIngrese valor para calcular termino fibonacci: ");
            scanf("%d", &valor);
    }while (valor > 40 || valor < 1);

    printf("\nTermino: %d\tValor del termino: %d", valor, fibonacci_funcion(valor));
  return 0;
}
