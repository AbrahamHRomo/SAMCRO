#include <stdio.h>



int main(){
   FILE *fp;
   char matricula_str[255], primer_parcial_str[255], segundo_parcial_str[255], pia_str[255], final_str[255];
   int primer_parcial, segundo_parcial, pia;
   float final;
   fp = fopen("/tmp/evaluaciones.csv", "r+");
   int i =0;
   fscanf(fp, "%[^,], %[^,], %[^,], %[^,], %[^,\n]\n", matricula_str, primer_parcial_str, segundo_parcial_str, pia_str, final_str);
   for(i =0; i < 3; i++){
   fscanf(fp, "%[^,], %d, %d, %d, %f\n", matricula_str, &primer_parcial, &segundo_parcial, &pia, &final);
       printf("los valores de la linea %d son: %s %d %d %d %.2f \n", i, matricula_str, primer_parcial, segundo_parcial, pia, final);
   }
   fclose(fp);
   return 0;
}
