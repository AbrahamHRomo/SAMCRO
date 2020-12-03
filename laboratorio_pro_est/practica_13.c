#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {

        char nombre[30];
        char apellido_1[30];
        char apellido_2[30];
        char nombre_completo[90];
        long no_cuenta;
        double saldo;
} Cliente;

typedef struct {

        char nombreENceros[90];
        long no_cuentaENceros;
        double saldoENceros;
        int pivoteCero;
} Cliente_enCeros;

typedef struct {

        char nombreFavor[90];
        long no_cuentaFavor;
        double saldoFavor;
        int pivoteFavor;
} Cliente_saldoFavor;

typedef struct {

        char nombreENcontra[90];
        long no_cuentaENcontra;
        double saldoENcontra;
        int pivoteENContra;
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
  scanf("%ld", &A[*i].no_cuenta);
  printf("n");
  printf("\n***TOMANDO EN CUENTA QUE UN SALDO NEGATIVO ES UN SALDO A FAVOR");
  printf("\n***Y QUE UN SALDO POSITIVO ES UN SALDO EN CONTRA***");
  printf("\nIngrese saldo de la cuenta (sin centavos): ");
  fflush(stdin);
  scanf("%lf", &A[*i].saldo);
}

void funcion_impresion_enConsola(){

          int contador_1 = 0, contador_2 = 0, contador_3 = 0;
              if (pivote == 1){
                        if (*j == 0){
                                printf("\n\t<<<REPORTE DE CUENTAS CON SALDO EN CERO>>>\n\n");
                                printf("\t%d\t%s\t%ld\t%lf", *j + 1, A[*j].nombreENceros, A[*j].no_cuentaENceros, A[*j].saldoENceros);
                                ++ contador_1;
                        }else{
                                printf("\t%d\t%s\t%ld\t%lf", *j + 1, A[*j].nombreENceros, A[*j].no_cuentaENceros, A[*j].saldoENceros);
                                ++ contador_1;
                        }
              }else{
                        if (pivote == 1){
                                if (*j == 0){
                                          printf("\n\t<<<REPORTE DE CUENTAS CON SALDO A FAVOR>>>\n\n");
                                          printf("\t%d\t%s\t%ld\t%lf", *j + 1, A[*j].nombreFavor, A[*j].no_cuentaFavor, A[*j].saldoFavor);
                                          ++ contador_2;
                                }else{
                                          printf("\t%d\t%s\t%ld\t%lf", *j + 1, A[*j].nombreFavor, A[*j].no_cuentaFavor, A[*j].saldoFavor);
                                          ++ contador_2;
                                }
                        }else{
                                if (pivote == 2){
                                          if (*j == 0){
                                                    printf("\n\t<<<REPORTE DE CUENTAS CON SALDO EN CONTRA>>>\n\n");
                                                    printf("\t%d\t%s\t%ld\t%lf", *j + 1, A[*j].nombreENcontra, A[*j].no_cuentaENcontra, A[*j].saldoENcontra);
                                                    ++ contador_3;
                                          }else{
                                                    printf("\t%d\t%s\t%ld\t%lf", *j + 1, A[*j].nombreENcontra, A[*j].no_cuentaENcontra, A[*j].saldoENcontra);
                                                    ++ contador_3;
                                          }
                                }
                        }
              }
              if (){}
}

void funcion_menu (void){

        printf("\n\tMENU\n\n");
        printf("\t1) Registrar cliente ");
        printf("\t2) Generar reporte de cuentas con saldo '0' (cero) \n");
        printf("\t3) Generar reporte de cuentas con saldo a favor \n");
        printf("\t4) Generar reporte de cuentas con saldo en contra \n");
}

int main {

        FILE *fp;
        Cliente arreglo[50]; //no. max de clientes
        Cliente_enCeros arreglo_ceros[50];
        Cliente_saldoFavor arregloFavor[50];
        Cliente_saldoENcontra arregloContra[50];
        char opcion_principal = 'e', opcion_registrar = 'e', encabezados[3][20];
        int i = 0, j, numero_renglones = 0;

        do {
                funcion_menu ();
                fflush(stdin);
                printf("\nIngrese opcion del menu anterior: ");
                scanf("%c", &opcion);

                switch(opcion_principal){

                        case '1': do {
                                    fp = fopen ("C://Users//USER//Sr.X//SAMCRO//laboratorio_pro_est//archivos//clientesBancoPractica13.csv", "a+");
                                    if (i == 0){
                                                fprintf(fp, "NOMBRE, NUMERO DE CUENTA, SALDO\n");
                                    }
                                    funcion_registrar (arreglo, &i);
                                    fprintf(fp, "%s, %s, %d\n", arreglo[i].nombre_completo, arreglo[i].no_cuenta, arreglo[i].saldo);
                                    printf("\n**SI DESEA REGISTRAR OTRO CLIENTE** presione '1' o '0' (cero) para **SALIR**");
                                    fflush(stdin);
                                    scanf("%c", &opcion_registrar);
                                    ++ i;
                        } while (opcion_registrar != '0');
                                  fclose(fp);
                                  break;
                        case '2': fp = fopen ("C://Users//USER//Sr.X//SAMCRO//laboratorio_pro_est//archivos//clientesBancoPractica13.csv", "r+");
                                  fscanf(fp, "%s %s %s\n",encabezados[0],encabezados[1], encabezados[2]);
                                  j = 0;

                                  fscanf(fp, "%s %ld %lf\n", arreglo_ceros[j].nombreENceros, arreglo_ceros[j].no_cuentaENceros, arreglo_ceros[j].saldoENceros);
                                  if(arreglo_ceros[j].no_cuentaENceros != 0){
                                    do {
                                              if(arreglo_ceros[j].saldoENceros == 0){
                                                        arreglo_ceros[j].pivoteCero = 1;
                                                        ++j;
                                                        fscanf(fp, "%s %ld %lf\n", arreglo_ceros[j].nombreENceros, arreglo_ceros[j].no_cuentaENceros, arreglo_ceros[j].saldoENceros);
                                              }else{
                                                        arreglo_ceros[j].pivoteCero = 0;
                                                        ++j;
                                                        fscanf(fp, "%s %ld %lf\n", arreglo_ceros[j].nombreENceros, arreglo_ceros[j].no_cuentaENceros, arreglo_ceros[j].saldoENceros);
                                              }
                                    } while (arreglo_ceros[j].no_cuentaENceros != 0);
                                  }else{
                                    printf("\n\t***NO SE ENCONTRO INFORMACION***\n\n");
                                  }
                                  numero_renglones = j;

                                  for(j = 0; j < numero_renglones; j ++){
                                              funcion_impresion_enConsola
                                  }
                }
        }

return 0;}
