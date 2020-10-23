#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
  int arreglo_de_enteros[10], num_to_find;
  int i_contador, i_i_contador, i_ii_contador, contador_encontrados;
  char opciones = 'E', opc_a = 'E', opc_b = 'E';

  do { //Captura del ARREGLO
        printf("Ingrese un numero ENTERO POSITIVO: ");
        scanf("%d", &arreglo_de_enteros[i_contador]);
        system("cls");
        if(arreglo_de_enteros[i_contador] >= 0)
          {
            i_contador = i_contador + 1;
          } else
              {
                printf("Ingreso un numero NO VALIDO.\n" );
                system("pause");
                system("cls");
              }
  } while(i_contador < 10);

  do { // MENU principal
        system("cls");
        printf("MENU para manejo del ARREGLO.\n\n\n");
        printf("Opciones:\n\n");
        printf("\n\n\tA)  BUSCAR un NUMERO en los ELEMENTOS del ARREGLO.");
        printf("\n\n\tB)  MODIFICAR el VALOR de uno de los ELEMENTOS del ARREGLO.");
        printf("\n\n\tC) SALIR" );
        printf("\n\n\nIngrese OPCION del MENU: ");
        scanf("%c", &opciones); _flushall();
        opciones = toupper(opciones);
        system("cls");
        switch (opciones)
              {
                case 'A': do {
                              printf("\nIngrese VALOR POSITIVO ENTERO para BUSCAR en el ARREGLO: ");
                              scanf("%d", &num_to_find);
                              i_i_contador = 0;
                              contador_encontrados = 0;
                              do { //u__u
                                   if (num_to_find == arreglo_de_enteros[i_i_contador])
                                     {
                                       printf("El numero que busca \"%d\" es igual al ELEMENTO %d del ARREGLO.\n", num_to_find, i_i_contador + 1);
                                       _flushall();
                                       i_i_contador = i_i_contador + 1;
                                       contador_encontrados = contador_encontrados + 1;
                                     } else { //n___n
                                           i_i_contador = i_i_contador + 1;
                                           if (i_i_contador == 10 && contador_encontrados < 1)
                                             {
                                               printf("El numero que busca \"%d\" NO es IGUAL a algun ELEMENTO del ARREGLO.", num_to_find);
                                               _flushall();
                                               i_i_contador = i_i_contador + 1;
                                             }
                                     } //cierre else n___n
                              } while (i_i_contador < 10); //u__u
                              printf("\n\nSi quiere BUSCAR otro VALOR en los ELEMENTOS del ARREGLO presione \"E\"\n\n o \"S\" para REGRESAR AL MENU ANTERIOR:\n");
                              scanf("%c", &opc_a); _flushall(); system("pause");
                              _flushall();
                              opc_a = toupper(opc_a);
                            } while (opc_a != 'S');
                            break;
                case 'B': do {
                              system("cls");
                              printf("\nIngrese NUMERO de ELEMENTO del ARREGLO que desea MODIFICAR (0 < NUMERO < 10): ");
                              scanf("%d", &i_ii_contador); _flushall();
                              if (i_ii_contador > 0 && i_ii_contador < 11)
                                {
                                  //i_ii_contador = i_ii_contador - 1;
                                  system("cls");
                                  printf("Ingrese NUEVA CANTIDAD a ELEMENTO %d del ARREGLO: \n", i_i_contador);
                                  scanf("%d", &arreglo_de_enteros[i_ii_contador - 1]);
                                  _flushall();
                                  system("cls");
                                  printf("Si desea MODIFICAR otro ELEMENTO del ARREGLO presione \"E\"\n\n o \"S\" para REGRESAR AL MENU ANTERIOR:\n");
                                  scanf("%c", &opc_b); _flushall();
                                  opc_b = toupper(opc_b);
                                } else {
                                        system("cls");
                                        printf("\nNUMERO INVALIDO.\n\n");
                                }
                            } while (opc_b != 'S');
                            break;
                case 'C': opciones = 'S';
                        break;
              } //cierre del switch
  } while (opciones != 'S'); // CIERRE del MENU principal
  printf("El ARREGLO es el SIGUIENTE: \n\n");
  for (i_contador = 0; i_contador < 10; i_contador ++)
      {
        printf("ELEMENTO %d:\t%d\n",i_contador + 1, arreglo_de_enteros[i_contador]);
      }

return 0;
}
