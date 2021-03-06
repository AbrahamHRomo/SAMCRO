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
alumno ARREGLO[50];
typedef struct {
        char mat_enCache[4];
        int cal_enCache[7];
        float prom_x_alumno[29];
        float prom_x_parcial[7];
        int cont_NoAprobXalumno[29];
        int cont_NoAprobXparcial[7];
} memoria;
memoria arregloDEmemoria[50];
float f_promedio(memoria A[], int *i){
          float promedio;
          A[*i].prom_x_alumno[*i] = (float) (arregloDEmemoria[*i].cal_enCache[0] + arregloDEmemoria[*i].cal_enCache[1] + arregloDEmemoria[*i].cal_enCache[2] + arregloDEmemoria[*i].cal_enCache[3] + arregloDEmemoria[*i].cal_enCache[4] + arregloDEmemoria[*i].cal_enCache[5] +  arregloDEmemoria[*i].cal_enCache[6]) / 7;
          promedio = A[*i].prom_x_alumno[*i];
          return promedio;
}
float f_prom_x_parcial(memoria A[], int *prom_parc, int *num_renglones){
          int valores = 0, j;
          float promedio = 0;
          int prom = *prom_parc;
           for (j = 0; j < *num_renglones; j ++){
                  switch(prom){
                          case 1: valores += A[j].cal_enCache[0]; break;
                          case 2: valores += A[j].cal_enCache[1]; break;
                          case 3: valores += A[j].cal_enCache[2]; break;
                          case 4: valores += A[j].cal_enCache[3]; break;
                          case 5: valores += A[j].cal_enCache[4]; break;
                          case 6: valores += A[j].cal_enCache[5]; break;
                          case 7: valores += A[j].cal_enCache[6]; break;
                  }
           }
           A[prom].prom_x_parcial[prom] = (float) valores / 29;
           promedio = A[prom].prom_x_parcial[prom];
           return promedio;
}

int f_reprobados_x_alumno(memoria A[], int *i){
        int contador = 0;
        if (A[*i].cal_enCache[0] < 7){
                contador += 1;
        }
        if (A[*i].cal_enCache[1] < 7){
                contador += 1;
        }
        if (A[*i].cal_enCache[2] < 7){
                contador += 1;
        }
        if (A[*i].cal_enCache[3] < 7){
                contador += 1;
        }
        if (A[*i].cal_enCache[4] < 7){
                contador += 1;
        }
        if (A[*i].cal_enCache[5] < 7){
                contador += 1;
        }
        if (A[*i].cal_enCache[6] < 7){
                contador += 1;
        }
        return contador;
}
int f_reprobados_x_parcial(memoria A[], int indice_i, int *num_renglones){
        int contador = 0;
        int opcion = indice_i;
        int j;
        for (j = 0; j < *num_renglones; j ++){
                switch(opcion){
                          case 1: if(A[j].cal_enCache[0] < 7)
                                  contador += 1; break;
                          case 2: if(A[j].cal_enCache[1] < 7)
                                  contador += 1; break;
                          case 3: if(A[j].cal_enCache[2] < 7)
                                  contador += 1; break;
                          case 4: if(A[j].cal_enCache[3] < 7)
                                  contador += 1; break;
                          case 5: if(A[j].cal_enCache[4] < 7)
                                  contador += 1; break;
                          case 6: if(A[j].cal_enCache[5] < 6)
                                  contador += 1; break;
                          case 7: if(A[j].cal_enCache[6] < 7)
                                  contador += 1; break;
                }
        }
        return contador;
}

int main (){
        FILE *punteroDEarchivo;
        FILE *punteroPIA;
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
                strcpy(arregloDEmemoria[i].mat_enCache, ARREGLO[i].Matricula);
                printf("\nLa matricula capturada de la linea %d es: %s", i + 1, arregloDEmemoria[i].mat_enCache);
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
                        }fflush(stdin);
                } arregloDEmemoria[i].cal_enCache[0] = atoi(ARREGLO[i].parcial1);
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
                }arregloDEmemoria[i].cal_enCache[1] = atoi(ARREGLO[i].parcial2);
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
                }arregloDEmemoria[i].cal_enCache[2] = atoi(ARREGLO[i].parcial3);
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
                }arregloDEmemoria[i].cal_enCache[3] = atoi(ARREGLO[i].parcial4);
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
                }arregloDEmemoria[i].cal_enCache[4] = atoi(ARREGLO[i].parcial5);
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
                }arregloDEmemoria[i].cal_enCache[5] = atoi(ARREGLO[i].parcial6);
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
                }arregloDEmemoria[i].cal_enCache[6] = atoi(ARREGLO[i].parcial7);
                ++i;
        } while (i < num_renglones);
        printf ("\nDatos obtenidos del archivo\n");
        for (i = 0; i < num_renglones; i ++){
                printf ("Informacion: %s \n", ARREGLO[i].Informacion);
        }
        for (i = 0; i < num_renglones; i ++){
                printf ("Promedio por alumno  No.%d: %.2f\n", i + 1, f_promedio(arregloDEmemoria, &i));
                promedioDelgrupo += f_promedio(arregloDEmemoria, &i);
        }
        promedioDelgrupo = promedioDelgrupo / num_renglones;
        for (i = 1; i < 8; i ++){
                prom_parc = i;
                arre_prom[i] = f_prom_x_parcial(arregloDEmemoria, &prom_parc, &num_renglones);
                printf("Promedio por parcial No.%d: %.2f\n", i, arre_prom[i]);
        }
        fclose(punteroDEarchivo);

        punteroPIA = fopen("C://Users//USER//Desktop//archivos//PIA_solicitado.csv", "w+");
        fprintf(punteroPIA, "MATRICULA, PARCIAL 1, PARCIAL 2, PARCIAL 3, PARCIAL 4, PARCIAL 5, PARCIAL 6, PARCIAL 7, PROMEDIO X ALUMNO, NO APROBADOS\n");
        for (i = 0; i < num_renglones; i ++){
                /*fprintf(punteroPIA, "%s, ")*/ fflush(stdin);
                fprintf(punteroPIA, "%s, %d, %d, %d, %d, %d, %d, %d, %.0f, %d\n", arregloDEmemoria[i].mat_enCache, arregloDEmemoria[i].cal_enCache[0], arregloDEmemoria[i].cal_enCache[1], arregloDEmemoria[i].cal_enCache[2], arregloDEmemoria[i].cal_enCache[3], arregloDEmemoria[i].cal_enCache[4], arregloDEmemoria[i].cal_enCache[5], arregloDEmemoria[i].cal_enCache[6], f_promedio(arregloDEmemoria, &i), f_reprobados_x_alumno(arregloDEmemoria, &i));
        }
        fprintf(punteroPIA, "PROMEDIO X PARCIAL, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f, %.0f, PROMEDIO DEL GRUPO, %.0f\n", arre_prom[1], arre_prom[2], arre_prom[3], arre_prom[4], arre_prom[5], arre_prom[6], arre_prom[7], promedioDelgrupo);
        total_no_arobadas = f_reprobados_x_parcial(arregloDEmemoria, 1, &num_renglones) + f_reprobados_x_parcial(arregloDEmemoria, 2, &num_renglones) + f_reprobados_x_parcial(arregloDEmemoria, 3, &num_renglones)+ f_reprobados_x_parcial(arregloDEmemoria, 4, &num_renglones)+ f_reprobados_x_parcial(arregloDEmemoria, 5, &num_renglones)+ f_reprobados_x_parcial(arregloDEmemoria, 6, &num_renglones)+ f_reprobados_x_parcial(arregloDEmemoria, 7, &num_renglones);
        fprintf(punteroPIA, "NO APROBADOS, %d, %d, %d, %d, %d, %d, %d, CANTIDAD DE NO APROBADOS, %d\n", f_reprobados_x_parcial(arregloDEmemoria, 1, &num_renglones), f_reprobados_x_parcial(arregloDEmemoria, 2, &num_renglones), f_reprobados_x_parcial(arregloDEmemoria, 3, &num_renglones), f_reprobados_x_parcial(arregloDEmemoria, 4, &num_renglones), f_reprobados_x_parcial(arregloDEmemoria, 5, &num_renglones), f_reprobados_x_parcial(arregloDEmemoria, 6, &num_renglones), f_reprobados_x_parcial(arregloDEmemoria, 7, &num_renglones), total_no_arobadas);

        fclose(punteroPIA);


return 0;}
