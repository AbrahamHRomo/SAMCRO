#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct{

        int cont_num_emp_x_depto;
        char nombre_mayor_sueldo[70];
}datos_departamento;

struct empleado{

        int sueldo;
        char nombre_departamento[50];
        char nombre_jefe[70];
            datos_departamento departamento;
}

void funcion_lectura();
void funcion_imp_info();
void funcion_imp_nombre();
void funcion_imp_info_depto();
void funcion_menu(void);

int main(){

    struct empleado ARRAY[50];
    int TAM;
    int opcion = 9; //hola
    int contador;
    char nombre[70], nom_dep[50];
    do {
            fflush(stdin);
            printf("\nIngrese numero maximo posible de empleados: ");
            scanf("%d", &TAM);
    }while (TAM > 50 || TAM < 1);

    do {
            funcion_menu();
            fflush(stdin.h);
            printf("\nIngrese opcion del menu anterior");
            scanf("%d", &opcion);
            switch (opcion){
                        case 0: printf("\nEL programafue finalizado.\n");
                                break;
                        case 1: funcion_lectura(ARRAY, &contador);
                                ++ contador;
                                break;
                        case 2:
            }
    }

}
