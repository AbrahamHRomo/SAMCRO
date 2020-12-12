#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char string[100];
  char string_2[100];
scanf("%s", string);
  strncpy(string_2, string + 4, 4);
  printf("CADENA : %s", string_2);
  return 0;
}
