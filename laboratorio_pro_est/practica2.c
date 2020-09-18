/*
Actividad #1
Identificar y corregir los errores en las siguientes líneas de código
(puede haber más de un error por línea) para que dentro de un programa
compile y corra correctamente.Explicar en un comentario la(s) causa(s)
de cada error. */

#include<stdio.h>

// 3) int Main(void){ }
int main(void){ //el "main" tiene que ir en minusculas
  //primero hice el ejercicio 3 para incluir los demás ejercicios dentro del
  // main que pide hacer.

  //1)  printf( "El producto de %d y %d es %d"\n, a1, a2 );
  int a1 = 99, a2 = 13, prod = a1 * a2; //el primer error esta en el salto de
  //linea que se encuentra fuera de las comillas, el segundo error es que falta
  //la variable del producto
  printf("El producto de %d y %d es: %d\n", a1, a2, prod);

  //2)  scanf("%d", 8_x)
  int x_8;
  printf("Ingrese un valor numerico entero:");
  scanf("%d",&x_8 );_flushall();
  printf("El valor ingresado es: %d\n", x_8);
  //El primer error es que falta el simbolo & antes de la variable, la variable
  //no puede ser declarada primero con un caracter numerico y por ultimo no se
  //cerro con el caracter ;

  //4)  print( "La suma es %d\n," a + b);
  int a = 11, b = 7;
  printf("  %d + %d = ?\n", a, b);
  printf("La suma es: %d\n", a + b);
  //El error esta en el comando printf(""); que no tiene la "f"

  //5)  numero1 / numero2 = div
  int numero1 = 17, numero2 = 23;
  float div = (float) numero1 / numero2;
  printf("El cociente de %d entre %d es: %f\n", numero1, numero2, div );
  //el error es que para que asignemos el valor de un cociente de dos numeros
  //a una variable que nombremos dentro del programa se debe llamar primero la
  //variable, seguida del comando igual y despues el primer valor entre el
  //segundo valor. el segundo error es que se finaliza la linea de codigo con ;
  //ejemplo: cociente = a / b;

  //6)  Printf("El valor proporcionado es: %d\n, &variable1 );
  char caracter;
  printf("Ingrese una letra : ");
  scanf("%c", &caracter); _flushall();
  int variable1 = (int) caracter;
  printf("El valor proporcionado es: %d\n", variable1);
  //el  primer error del printf(""); es la primera letra matuscula, dentro de
  //los parentesis faltan las comillas de cierre y por ultimo el simbolo & no
  //tiene que ir dentro de la funcion printf("");

  //7)  Scanf("%d",numEntero );
  int numEntero; printf("Ingrese un numero entero: " );
  scanf("%d", &numEntero); _flushall();
  printf("El numero entero ingresado es: %d\n",numEntero );
  // el primer error es la mayuscula del comando scanf(""); despues solo falta
  // el comando & antes de la variable numEntero

  //8)  */ programa que convierte de grados celcius a fahrenheit /*
  // es un comentario pero el comando para colocar un comentario de multiples
  // lineas se untiliza /* y no para abrir el comentario y */ para cerrarlo
  // y estan los comandos intercambiados.

  /* programa que convierte de grados celcius a a fahrenheit */

  //10)  scanf("f", valor);
  float valor;
  printf("Ingrese un valor numerico: ");
  scanf("%f", &valor); _flushall();
  printf("El numero ingresado es: %8.2f\n", valor);
  //el primer error es que falta el simbolo % antes de la letra f, el segundo
  //error es que falta el simbolo & antes de la variable valor.

}
