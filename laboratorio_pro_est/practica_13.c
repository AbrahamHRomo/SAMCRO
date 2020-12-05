#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct {

        char nombre[30];
        char apellido_1[30];
        char apellido_2[30];
        char nombre_completo[90];
        char no_cuenta[15];
        char saldo[15];
} Cliente;

typedef struct {

        char nombreENceros[90];
        char no_cuentaENceros[15];
        char saldoENceros[15];
        int pivoteCero;
} Cliente_enCeros;

typedef struct {

        char nombreFavor[90];
        char no_cuentaFavor[15];
        char saldoFavor[15];
        int pivoteFavor;
} Cliente_saldoFavor;

typedef struct {

        char nombreENcontra[90];
        char no_cuentaENcontra[15];
        char saldoENcontra[15];
        char pivoteENcontra;
} Cliente_saldoENcontra;

void funcion_registrar (Cliente A[], int *i){

  printf("\nIngrese datos del cliente %d \n", *i + 1);
  printf("\nIngrese nombre: ");
  fflush(stdin);
  scanf("%s", A[*i].nombre);
  printf("\nIngrese primer apellido: ");
  fflush(stdin);
  scanf("%s", A[*i].apellido_1);
  printf("\nIngrese segundo apellido: ");
  fflush(stdin);
  scanf("%s", A[*i].apellido_2);
  strcat(A[*i].nombre_completo, A[*i].nombre);
  strcat(A[*i].nombre_completo, " ");
  strcat(A[*i].nombre_completo, A[*i].apellido_1);
  strcat(A[*i].nombre_completo, " ");
  strcat(A[*i].nombre_completo, A[*i].apellido_2);
  printf("\nIngrese numero de cuenta: ");
  fflush(stdin);
  scanf("%s", A[*i].no_cuenta);
  printf("\n");
  printf("\n***TOMANDO EN CUENTA QUE UN SALDO NEGATIVO ES UN SALDO A FAVOR");
  printf("\n***Y QUE UN SALDO POSITIVO ES UN SALDO EN CONTRA***\n");
  printf("\nIngrese saldo de la cuenta (sin centavos): ");
  fflush(stdin);
  scanf("%s", A[*i].saldo);
}

void funcion_menu (void){

        printf("\n\tMENU\n\n");
        printf("\t1) Registrar cliente\n");
        printf("\t2) Generar reporte de cuentas con saldo '0' (cero) \n");
        printf("\t3) Generar reporte de cuentas con saldo a favor \n");
        printf("\t4) Generar reporte de cuentas con saldo en contra \n");
        printf("\t0) SALIR \n");
}

int main(){

        FILE *fp;
        Cliente arreglo[50]; //no. max de clientes
        Cliente_enCeros arreglo_ceros[50];
        Cliente_saldoFavor arregloFavor[50];
        Cliente_saldoENcontra arregloContra[50];
        char opcion_principal = 'e', opcion_registrar = 'e', encabezados[3][20];
        int i = 0, j, numero_renglones[3] = {0, 0, 0};
        int contador_1 = 0, contador_2 = 0, contador_3 = 0;
        long cuenta = 0;
        double saldo = 0;
        fp = fopen ("/home/radical-ab/Escritorio/Archivos/clientesBancoPractica13.csv", "w+");
        do{
                funcion_menu ();
                fflush(stdin);
                printf("\nIngrese opcion del menu anterior: ");
                scanf("%c", &opcion_principal);

                switch(opcion_principal){

                        case '1':  if (i == 0){
                                          fprintf(fp, "NOMBRE, NUMERO DE CUENTA, SALDO\n");
                                          fclose(fp);
                                   }
                                   fp = fopen ("/home/radical-ab/Escritorio/Archivos/clientesBancoPractica13.csv", "a+");
                                   funcion_registrar (arreglo, &i);
                                   fprintf(fp, "%s, %s, %s\n", arreglo[i].nombre_completo, arreglo[i].no_cuenta, arreglo[i].saldo);
                                   ++ i;
                                   fclose(fp);
                                   break;

                        case '2': fp = fopen ("/home/radical-ab/Escritorio/Archivos/clientesBancoPractica13.csv", "r+");
                                  rewind(fp);
                                  fscanf(fp, "%s %s %s\n", encabezados[0], encabezados[1], encabezados[2]);
                                  j = 0;

                                  fscanf(fp, "%s %s %s\n", arreglo_ceros[j].nombreENceros, arreglo_ceros[j].no_cuentaENceros, arreglo_ceros[j].saldoENceros);
                                  printf("\n%s %s %s", arreglo_ceros[j].nombreENceros, arreglo_ceros[j].no_cuentaENceros, arreglo_ceros[j].saldoENceros);
                                  cuenta = atoi (arreglo_ceros[j].no_cuentaENceros);
                                  if(cuenta != 0){
                                    do {
                                              saldo = atof (arreglo_ceros[j].saldoENceros);
                                              if(saldo == 0){
                                                        ++ contador_1;
                                                        arreglo_ceros[j].pivoteCero = 1;
                                                        ++j;
                                                        fscanf(fp, "%s %s %s\n", arreglo_ceros[j].nombreENceros, arreglo_ceros[j].no_cuentaENceros, arreglo_ceros[j].saldoENceros);
                                              }else{
                                                        arreglo_ceros[j].pivoteCero = 0;
                                                        ++j;
                                                        fscanf(fp, "%s %s %s\n", arreglo_ceros[j].nombreENceros, arreglo_ceros[j].no_cuentaENceros, arreglo_ceros[j].saldoENceros);
                                              }
                                    } while (cuenta != 0);
                                  }else{
                                    printf("\n\t<<<REPORTE DE CUENTAS CON SALDO EN CERO>>>\n\n");
                                    printf("\t***NO SE ENCONTRO INFORMACION***\n\n");
                                  }
                                  numero_renglones[0] = j;
                                  for (j = 0; j < numero_renglones[0]; j ++){
                                            rewind(fp);
                                            if (arreglo_ceros[j].pivoteCero == 1){
                                                    if(j == 0){
                                                              printf("\n\t<<<REPORTE DE CUENTAS CON SALDO EN CERO>>>\n\n");
                                                              printf("\t%d\t%s\t%s\t%s", j + 1, arreglo_ceros[j].nombreENceros, arreglo_ceros[j].no_cuentaENceros, arreglo_ceros[j].saldoENceros);
                                                    }else{
                                                              printf("\t%d\t%s\t%s\t%s", j + 1, arreglo_ceros[j].nombreENceros, arreglo_ceros[j].no_cuentaENceros, arreglo_ceros[j].saldoENceros);
                                                    }
                                            }
                                  }
                                  if (contador_1 == 0){
                                            printf("\n\t<<<REPORTE DE CUENTAS CON SALDO EN CERO>>>\n\n");
                                            printf("\t***NO SE ENCONTRO INFORMACION***\n\n");
                                  }
                                  fclose(fp);
                                  break;
                        case '3': fp = fopen ("/home/radical-ab/Escritorio/Archivos/clientesBancoPractica13.csv", "r+");
                                  rewind(fp);
                                  fscanf(fp, "%s %s %s\n",encabezados[0],encabezados[1], encabezados[2]);
                                  j = 0;

                                  fscanf(fp, "%s %s %s\n", arregloFavor[j].nombreFavor, arregloFavor[j].no_cuentaFavor, arregloFavor[j].saldoFavor);
                                  if(arregloFavor[j].no_cuentaFavor != 0){
                                    do {
                                              if(arregloFavor[j].saldoFavor < 0){
                                                        ++ contador_2;
                                                        arregloFavor[j].pivoteFavor = 2;
                                                        ++j;
                                                        fscanf(fp, "%s %s %s\n", arregloFavor[j].nombreFavor, arregloFavor[j].no_cuentaFavor, arregloFavor[j].saldoFavor);
                                              }else{
                                                        arregloFavor[j].pivoteFavor = 0;
                                                        ++j;
                                                        fscanf(fp, "%s %s %s\n", arregloFavor[j].nombreFavor, arregloFavor[j].no_cuentaFavor, arregloFavor[j].saldoFavor);
                                              }
                                    } while (arregloFavor[j].no_cuentaFavor != 0);
                                  }else{
                                    printf("\n\t<<<REPORTE DE CUENTAS CON SALDO A FAVOR>>>\n\n");
                                    printf("\t***NO SE ENCONTRO INFORMACION***\n\n");
                                  }
                                  numero_renglones[1] = j;
                                  for (j = 0; j < numero_renglones[1]; j ++){
                                            if (arregloFavor[j].pivoteFavor == 2){
                                                    if(j == 0){
                                                            printf("\n\t<<<REPORTE DE CUENTAS CON SALDO A FAVOR>>>\n\n");
                                                            printf("\t%d\t%s\t%s\t%s", j + 1, arregloFavor[j].nombreFavor, arregloFavor[j].no_cuentaFavor, arregloFavor[j].saldoFavor);
                                                    }else{
                                                            printf("\t%d\t%s\t%s\t%s", j + 1, arregloFavor[j].nombreFavor, arregloFavor[j].no_cuentaFavor, arregloFavor[j].saldoFavor);
                                                    }
                                            }
                                  }
                                  if (contador_2 == 0){
                                            printf("\n\t<<<REPORTE DE CUENTAS CON SALDO A FAVOR>>>\n\n");
                                            printf("\n\t***NO SE ENCONTRO INFORMACION***\n\n");
                                  }
                                  fclose(fp);
                                  break;
                        case '4': fp = fopen ("/home/radical-ab/Escritorio/Archivos/clientesBancoPractica13.csv", "r+");
                                  rewind(fp);
                                  fscanf(fp, "%s %s %s\n",encabezados[0],encabezados[1], encabezados[2]);
                                  j = 0;

                                  fscanf(fp, "%s %s %s\n", arregloContra[j].nombreENcontra, arregloContra[j].no_cuentaENcontra, arregloContra[j].saldoENcontra);
                                  if(arregloContra[j].no_cuentaENcontra != 0){
                                    do {
                                              if(arregloContra[j].saldoENcontra > 0){
                                                        ++ contador_3;
                                                        arregloContra[j].pivoteENcontra = 3;
                                                        ++j;
                                                        fscanf(fp, "%s %s %s\n", arregloContra[j].nombreENcontra, arregloContra[j].no_cuentaENcontra, arregloContra[j].saldoENcontra);
                                              }else{
                                                        arregloContra[j].pivoteENcontra = 0;
                                                        ++j;
                                                        fscanf(fp, "%s %s %s\n", arregloContra[j].nombreENcontra, arregloContra[j].no_cuentaENcontra, arregloContra[j].saldoENcontra);
                                              }
                                    } while (arregloContra[j].no_cuentaENcontra != 0);
                                  }else{
                                    printf("\n\t<<<REPORTE DE CUENTAS CON SALDO EN CONTRA>>>\n\n");
                                    printf("\t***NO SE ENCONTRO INFORMACION***\n\n");
                                  }
                                  numero_renglones[2] = j;
                                  for (j = 0; j < numero_renglones[2]; j ++){
                                            if (arregloContra[j].pivoteENcontra == 3){
                                                    if(j == 0){
                                                            printf("\n\t<<<REPORTE DE CUENTAS CON SALDO EN CONTRA>>>\n\n");
                                                            printf("\t%d\t%s\t%s\t%s", j + 1, arregloFavor[j].nombreFavor, arregloFavor[j].no_cuentaFavor, arregloFavor[j].saldoFavor);
                                                    }else{
                                                            printf("\t%d\t%s\t%s\t%s", j + 1, arregloFavor[j].nombreFavor, arregloFavor[j].no_cuentaFavor, arregloFavor[j].saldoFavor);
                                                    }
                                            }
                                  }
                                  if (contador_3 == 0){
                                            printf("\n\t<<<REPORTE DE CUENTAS CON SALDO EN CONTRA>>>\n\n");
                                            printf("\t***NO SE ENCONTRO INFORMACION***\n\n");
                                  }
                                  fclose(fp);
                                  break;
                          case '0': break;
                }
        } while (opcion_principal != '0');
//rewind(fp);
return 0;
}
