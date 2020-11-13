#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct{
        char nombre[30];
        char apellido[30];
        int edad;
        char telefono[15];
        char puesto[30];
        char correo[50];
} postulante;

//prototipos de las funciones que se usaran en el programa.
void f_lectura(postulante *, int T);
void f_imp_post(postulante *, int TAM);
void f_imp_menu(void);

//funcion main obvi
int main (){
      postulante ARRE[50];
      int TAM;
      char opcion = 'E';
      do {
              fflush(stdin);
              printf("\nIngrese numero de postulantes: ");
              scanf("%d", &TAM);
      } while (TAM > 50 || TAM < 1);

      do{
              f_imp_menu();
              fflush(stdin);
              printf("\nIngrese opcion del menu anterior: ");
              scanf("%c", &opcion);
              switch (opcion){
                      case '1': f_lectura (ARRE, TAM);  break;
                      case '2': f_imp_post (ARRE, TAM); break;
                      case '3': opcion = '3';           break;
              }
      } while (opcion != '3');
return 0;
}

void f_lectura(postulante A[], int T){
        int I;
        printf("\nIngrese datos del postulante %d ", I + 1);
        printf("\nEl postulante solo debera incluir 1 nombre y 1 apellido.");
        fflush(stdin);
        printf("\nIngrese NOMBRE: ");
        scanf("%s", A[I].nombre);//gets(A[I].nombre);
        fflush(stdin);
        printf("\nIngrese APELLIDO: ");
        scanf("%s", A[I].apellido);//gets(A[I].apellido);
        fflush(stdin);
        printf("\nIngrese EDAD: ");
        scanf("%d", &A[I].edad);
        fflush(stdin);
        printf("\nIngrese NUMERO DE TELEFONO a 10 numeros: ");
        scanf("%s", A[I].telefono);//gets(A[I].telefono);
        fflush(stdin);
        printf("\nIngrese PUESTO: ");
        scanf("%s", A[I].puesto);//gets(A[I].puesto);
        fflush(stdin);
        printf("\nIngrese CORREO: ");
        scanf("%s", A[I].correo);
        ++ I;
}

void f_imp_post(postulante A[], int TAM){
        int i;
        printf("\nLista de postulantes.\n\n");
        for (i = 0; i < TAM; i ++){
                printf("Postulante %d\n\n", i + 1);
                printf("Nombre completo: %s %s.\n",A[i].apellido, A[i].nombre);
                printf("Edad: %d.\n", A[i].edad);
                printf("Telefono: %s.\n", A[i].telefono);
                printf("Correo electronico: %s.\n\n", A[i].correo);
                printf("Puesto solicitante: %s.\n\n", A[i].puesto);
        }

}

void f_imp_menu(void){
        printf("\nMENU DE OPCIONES\n\n");
        printf("\t1) Agregar nuevo postulante.\n");
        printf("\t2) Ver postulantes.\n");
        printf("\t3) Salir.\n\n");
}
