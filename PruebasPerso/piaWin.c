#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


typedef struct {
        char Informacion[30];
        char Matricula[30];
        char parcial1[10];
        char parcial2[10];
        char parcial3[10];
        char parcial4[10];
        char parcial5[10];
        char parcial6[10];
        char parcial7[10];
} alumno;

float f_promedio(alumno A[], int *i){
          int valores[7] = {0, 0, 0, 0, 0, 0, 0};
          float promedio;
          valores[0] = atoi(A[*i].parcial1);
          valores[1] = atoi(A[*i].parcial2);
          valores[2] = atoi(A[*i].parcial3);
          valores[3] = atoi(A[*i].parcial4);
          valores[4] = atoi(A[*i].parcial5);
          valores[5] = atoi(A[*i].parcial6);
          valores[6] = atoi(A[*i].parcial7);
          promedio = (float) (valores[0] + valores[1] + valores[2] + valores[3] + valores[4] + valores[5] + valores[6]) / 7;
          return promedio;
}

float f_prom_x_parcial(alumno A[], int *prom_parc, int *num_renglones){
          int valores = 0, j;
          float promedio = 0;
          int prom = *prom_parc;
           for (j = 0; j < *num_renglones; j ++){
                  switch(prom){
                          case 1: valores += atoi(A[j].parcial1); break;
                          case 2: valores += atoi(A[j].parcial2); break;
                          case 3: valores += atoi(A[j].parcial3); break;
                          case 4: valores += atoi(A[j].parcial4); break;
                          case 5: valores += atoi(A[j].parcial5); break;
                          case 6: valores += atoi(A[j].parcial6); break;
                          case 7: valores += atoi(A[j].parcial7); break;
                  }
           }
           promedio = (float) valores / 29;
           return promedio;
}

int f_reprobados_x_alumno(alumno A[], int *i){
        int contador = 0;
        if (atoi(A[*i].parcial1) < 7){
                contador += 1;
        }
        if (atoi(A[*i].parcial2) < 7){
                contador += 1;
        }
        if (atoi(A[*i].parcial3) < 7){
                contador += 1;
        }
        if (atoi(A[*i].parcial4) < 7){
                contador += 1;
        }
        if (atoi(A[*i].parcial5) < 7){
                contador += 1;
        }
        if (atoi(A[*i].parcial6) < 7){
                contador += 1;
        }
        if (atoi(A[*i].parcial7) < 7){
                contador += 1;
        }
        return contador;
}

int f_reprobados_x_parcial(alumno A[], int indice_i, int *num_renglones){
        int contador = 0;
        int opcion = indice_i;
        int j;
        for (j = 0; j < *num_renglones; j ++){
                switch(opcion){
                          case 1: if(atoi(A[j].parcial1) < 7){
                                  contador += 1;
                          } break;
                          case 2: if(atoi(A[j].parcial2) < 7){
                                  contador += 1;
                          } break;
                          case 3: if(atoi(A[j].parcial3) < 7){
                                  contador += 1;
                          } break;
                          case 4: if(atoi(A[j].parcial4) < 7){
                                  contador += 1;
                          } break;
                          case 5: if(atoi(A[j].parcial5) < 7){
                                  contador += 1;
                          } break;
                          case 6: if(atoi(A[j].parcial1) < 6){
                                  contador += 1;
                          } break;
                          case 7: if(atoi(A[j].parcial7) < 7){
                                  contador += 1;
                          } break;
                }
        }
        return contador;
}

int main (){
        FILE *punteroDEarchivo;
        FILE *punteroPIA;
        alumno ARREGLO[50];
        char  Encabezados[100];
        char coma[2];
        int i = 0, num_renglones = 29, prueba = 0;
        int indice, prom_parc = 0;
        int total_no_arobadas = 0;
        float promedioDelgrupo = 0, arre_prom[8];
        punteroDEarchivo = fopen ("C://Users//USER//Desktop//archivos//calificaciones_pia_pe.csv", "r+");

        fscanf(punteroDEarchivo, "%s\n", Encabezados);
        do {
                fscanf(punteroDEarchivo, "%s\n", ARREGLO[i].Informacion);
                strncpy(ARREGLO[i].Matricula, ARREGLO[i].Informacion + 3, 4);
                indice = 7;
                strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                if (coma[0] == 44){
                        indice += 1;
                        strncpy(ARREGLO[i].parcial1, ARREGLO[i].Informacion + indice, 1);
                        indice += 1;
                        strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                        if (coma[0] == 44){
                                printf("\nSe registro calificacion 1 de alumno %d: %s", i + 1, ARREGLO[i].parcial1);
                        }else{
                                strncat(ARREGLO[i].parcial1, ARREGLO[i].Informacion + indice, 1);
                                indice += 1;
                                printf("\nSe registro calificacion 1 de alumno %d: %s", i + 1, ARREGLO[i].parcial1);
                        }
                }
                strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                if (coma[0] == 44){
                        indice += 1;
                        strncpy(ARREGLO[i].parcial2, ARREGLO[i].Informacion + indice, 1);
                        indice += 1;
                        strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                        if (coma[0] == 44){
                                printf("\nSe registro calificacion 2 de alumno %d: %s", i + 1, ARREGLO[i].parcial2);
                        }else{
                                strncat(ARREGLO[i].parcial2, ARREGLO[i].Informacion + indice, 1);
                                indice += 1;
                                printf("\nSe registro calificacion 2 de alumno %d: %s", i + 1, ARREGLO[i].parcial2);
                        }
                }
                strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                if (coma[0] == 44){
                        indice += 1;
                        strncpy(ARREGLO[i].parcial3, ARREGLO[i].Informacion + indice, 1);
                        indice += 1;
                        strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                        if (coma[0] == 44){
                                printf("\nSe registro calificacion 3 de alumno %d: %s", i + 1, ARREGLO[i].parcial3);
                        }else{
                                strncat(ARREGLO[i].parcial3, ARREGLO[i].Informacion + indice, 1);
                                indice += 1;
                                printf("\nSe registro calificacion 3 de alumno %d: %s", i + 1, ARREGLO[i].parcial3);
                        }
                }
                strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                if (coma[0] == 44){
                        indice += 1;
                        strncpy(ARREGLO[i].parcial4, ARREGLO[i].Informacion + indice, 1);
                        indice += 1;
                        strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                        if (coma[0] == 44){
                                printf("\nSe registro calificacion 4 de alumno %d: %s", i + 1, ARREGLO[i].parcial4);
                        }else{
                                strncat(ARREGLO[i].parcial4, ARREGLO[i].Informacion + indice, 1);
                                indice += 1;
                                printf("\nSe registro calificacion 4 de alumno %d: %s", i + 1, ARREGLO[i].parcial4);
                        }
                }
                strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                if (coma[0] == 44){
                        indice += 1;
                        strncpy(ARREGLO[i].parcial5, ARREGLO[i].Informacion + indice, 1);
                        indice += 1;
                        strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                        if (coma[0] == 44){
                                printf("\nSe registro calificacion 5 de alumno %d: %s", i + 1, ARREGLO[i].parcial5);
                        }else{
                                strncat(ARREGLO[i].parcial5, ARREGLO[i].Informacion + indice, 1);
                                indice += 1;
                                printf("\nSe registro calificacion 5 de alumno %d: %s", i + 1, ARREGLO[i].parcial5);
                        }
                }
                strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                if (coma[0] == 44){
                        indice += 1;
                        strncpy(ARREGLO[i].parcial6, ARREGLO[i].Informacion + indice, 1);
                        indice += 1;
                        strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                        if (coma[0] == 44){
                                printf("\nSe registro calificacion 6 de alumno %d: %s", i + 1, ARREGLO[i].parcial6);
                        }else{
                                strncat(ARREGLO[i].parcial6, ARREGLO[i].Informacion + indice, 1);
                                indice += 1;
                                printf("\nSe registro calificacion 6 de alumno %d: %s", i + 1, ARREGLO[i].parcial6);
                        }
                }
                strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                if (coma[0] == 44){
                        indice += 1;
                        strncpy(ARREGLO[i].parcial7, ARREGLO[i].Informacion + indice, 1);
                        indice += 1;
                        strncpy(coma, ARREGLO[i].Informacion + indice, 1);
                        if (coma[0] == 44){
                                printf("\nSe registro calificacion 7 de alumno %d: %s", i + 1, ARREGLO[i].parcial7);
                        }else{
                                strncat(ARREGLO[i].parcial7, ARREGLO[i].Informacion + indice, 1);
                                indice += 1;
                                printf("\nSe registro calificacion 7 de alumno %d: %s", i + 1, ARREGLO[i].parcial7);
                        }
                }
                i++;
        } while (i < num_renglones);
        printf ("Datos obtenidos del archivo\n");
        for (i = 0; i < num_renglones; i ++){
                printf ("Informacion: %s \n", ARREGLO[i].Informacion);
        }
        for (i = 0; i < num_renglones; i ++){
                printf ("\nPromedio %d: %.2f", i + 1, f_promedio(ARREGLO, &i));
        }

        for (i = 1; i < 8; i ++){
                prom_parc = i;
                arre_prom[i] = f_prom_x_parcial(ARREGLO, &prom_parc, &num_renglones);
                promedioDelgrupo += arre_prom[i];

        }
        promedioDelgrupo = promedioDelgrupo / 7;
        fclose(punteroDEarchivo);

        punteroPIA = fopen("C://Users//USER//Desktop//archivos//PIA_solicitado.txt", "w+");
        fprintf(punteroPIA, "MATRICULA, PARCIAL 1, PARCIAL 2, PARCIAL 3, PARCIAL 4, PARCIAL 5, PARCIAL 6, PARCIAL 7, PROMEDIO X ALUMNO, NO APROBADOS\n");
        for (i = 0; i < num_renglones; i ++){
                fprintf(punteroPIA, "%s, %d, %d, %d, %d, %d, %d, %d, %.0f, %d\n",ARREGLO[i].Matricula, atoi(ARREGLO[i].parcial1), atoi(ARREGLO[i].parcial2), atoi(ARREGLO[i].parcial3), atoi(ARREGLO[i].parcial4), atoi(ARREGLO[i].parcial5), atoi(ARREGLO[i].parcial6), atoi(ARREGLO[i].parcial7), f_promedio(ARREGLO, &i), f_reprobados_x_alumno(ARREGLO, &i));
        }
        fprintf(punteroPIA, "PROMEDIO X PARCIAL, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f, PROMEDIO DEL GRUPO, %.0f\n", arre_prom[1], arre_prom[2], arre_prom[3], arre_prom[4], arre_prom[5], arre_prom[6], arre_prom[7], promedioDelgrupo);
        total_no_arobadas = f_reprobados_x_parcial(ARREGLO, 1, &num_renglones) + f_reprobados_x_parcial(ARREGLO, 2, &num_renglones) + f_reprobados_x_parcial(ARREGLO, 3, &num_renglones)+ f_reprobados_x_parcial(ARREGLO, 4, &num_renglones)+ f_reprobados_x_parcial(ARREGLO, 5, &num_renglones)+ f_reprobados_x_parcial(ARREGLO, 6, &num_renglones)+ f_reprobados_x_parcial(ARREGLO, 7, &num_renglones);
        fprintf(punteroPIA, "NO APROBADOS, %d, %d, %d, %d, %d, %d, %d, CANTIDAD DE NO APROBADOS, %d\n", f_reprobados_x_parcial(ARREGLO, 1, &num_renglones), f_reprobados_x_parcial(ARREGLO, 2, &num_renglones), f_reprobados_x_parcial(ARREGLO, 3, &num_renglones), f_reprobados_x_parcial(ARREGLO, 4, &num_renglones), f_reprobados_x_parcial(ARREGLO, 5, &num_renglones), f_reprobados_x_parcial(ARREGLO, 6, &num_renglones), f_reprobados_x_parcial(ARREGLO, 7, &num_renglones), total_no_arobadas);

        fclose(punteroPIA);


return 0;}
