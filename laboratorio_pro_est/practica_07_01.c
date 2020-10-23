#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
  int candidato[10] = {0,0,0,0,0,0,0,0,0,0}, ganador, i_contador, numero_votantes = 0; // Al momento de declarar el arreglo si no se inicializa en 0 si compila el programa pero hace un mugrero
  float porcentaje_x_candidato[10];
  char inciso = '@', opcion = '0';
  int *puntero_ganador;

  do
    {
      printf("\nLista de CANDIDATOS\n" );
      for (i_contador = 0; i_contador < 10; i_contador ++)
        {
          printf("\n%c) CANDIDATO %d.\n", inciso + i_contador + 1, i_contador + 1);
        }
      printf("\nS) SALIR.\n");
      printf("\nIngrese INCISO para AGREGAR VOTO o S para SALIR: ");
      scanf("%c", &opcion);
      _flushall();
      opcion = toupper(opcion);
      switch(opcion)
            {
              case 'A': candidato[0] = candidato[0] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'B': candidato[1] = candidato[1] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'C': candidato[2] = candidato[2] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'D': candidato[3] = candidato[3] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'E': candidato[4] = candidato[4] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'F': candidato[5] = candidato[5] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'G': candidato[6] = candidato[6] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'H': candidato[7] = candidato[7] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'I': candidato[8] = candidato[8] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'J': candidato[9] = candidato[9] + 1;
                        numero_votantes = numero_votantes + 1;
                        break;
              case 'S': system("cls");
                        printf("\nEligio la OPCION SALIR.");
                        break;
            }
    system("cls");
    } while (opcion != 'S');

  for (i_contador = 0; i_contador < 10; i_contador ++)
    {
      porcentaje_x_candidato[i_contador] = (float) ((candidato[i_contador] * 100) / numero_votantes);
    }

  for (i_contador = 0; i_contador < 10; i_contador ++) // ciclo que encuenTRA AL GANADOR
    {
      if (candidato[i_contador] > ganador)
        {
          ganador = candidato[i_contador];
          //puntero_ganador = &candidato[i_contador];
        }
    }

  system("cls");
  printf("\nVOTOS POR CANDIDATO:\n\n" );

  for (i_contador = 0; i_contador < 10; i_contador ++) //ciclo for que imprime el conteo de candidatos.
    {
       printf("La cantidad de VOTOS TOTALES del CANDIDATO %d es: %d\n", i_contador + 1, candidato[i_contador]);
    }

  for (i_contador = 0; i_contador < 10; i_contador++) //ciclo que imprime al ganador
    {
      if (candidato[i_contador] == ganador)
        {
          printf("\nEl CANDIDATO GANADOR es el candidato numero : %d\n", i_contador + 1);
        }
    }

  printf("\nGANAGOR OBTUBO: %d votos\n", ganador); //imprime cantidad de votos del ganador... prueba de ountero
  printf("\nPORCENTAJES POR CANDIDATO:\n\n" );

  for (i_contador = 0; i_contador < 10; i_contador++)//ciclo que imprime los porcentaajes x candidato
    {
      printf("El PORCENTAJE de votos obtenidos del CANDIDATO %d es: %.2f\n", i_contador + 1, porcentaje_x_candidato[i_contador]);
    }
  printf("\nEl NUMERO de VOTANTES es: %d\n", numero_votantes);
return 0;
}
