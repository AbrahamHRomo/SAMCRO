#include <stdio.h>

int main(){

        FILE *fp;
        fp = fopen("/home/radical-ab/Escritorio/Archivos/test.txt", "w+");
        fprintf(fp, "HOLA ARCHIVO");
        fclose(fp);
}
