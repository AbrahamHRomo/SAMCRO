#include<stdio.h>
#include<ctype.h>

int main()
{
  char cadena[256], caracter1, caracter2;

  printf("Ingrese una cadena de caracteres: " );
  gets(cadena);

  printf("\nIngrese un letra en MAYUSCULA: " );
  scanf("%c", &caracter1); _flushall();

  printf("\nIngrese un letra en minusculas: " );
  scanf("%c", &caracter2); _flushall();

  strupr(cadena);
  caracter1 = toupper(caracter1);
  caracter2 = toupper(caracter2);

  printf("La cadena de caracteres es '%s', el primer caracter es '%c' y el segundo caracter es '%c'. ",cadena, caracter1, caracter2);

  strlwr(cadena);
  caracter1 = tolower(caracter1);
  caracter2 = tolower(caracter2);

  printf("\nLa cadena de caracteres es '%s', el primer caracter es '%c' y el segundo caracter es '%c'. ", cadena, caracter1, caracter2);

  return 0;
}

// la funcion puts() se usa para escribir una secuencia de caracteres al flujo 
//de salida esnandar

//Esta función lee caracteres desde el stream apuntado por stream stdin, en el
//array apuntado por cadena, hasta que se encuentre un final de fichero (EOF)
//o un carácter de línea nueva es leído.

//Si al leer un carácter con getchar se encuentra con una condición de fin de
//archivo, la función devolverá de forma automática el valor de la constante
//EOF (normalmente -1).
//La función getchar se puede utilizar para leer cadenas de varios caracteres,
//leyendo en un bucle la cadena carácter a carácter.

//Mediante la función putchar podemos visualizar un carácter a través del
//dispositivo de salida estandar (normalmente un monitor). El carácter que se
//transmite estará representado por una variable de tipo carácter que se
//proporcionará como argumento de la función putchar.

//getch nos permite guardar una letra en una variable, tiene otra función
//llamada getche, que hace lo mismo solo que esta última muestra la letra en
//pantalla mientras que la otra no lo hace, la e del final es de “echo” o eco.

//La función printf transporta datos desde la memoria a la pantalla, a
//diferencia de scanf, que envía datos desde el teclado para almacenarlos en la
//memoria. La función printf devuelve el número de caracteres escritos.
//Si devuelve un valor negativo indica que se ha producido un error.

//Mediante la función scanf podemos introducir cualquier combinación de valores
//numéricos, caracteres sueltos y cadenas de caracteres a través del teclado.
//En definitiva, scanf lee datos formateados de la entrada estandar. ...
//La función devolverá el número de datos que se han introducido correctamente.
