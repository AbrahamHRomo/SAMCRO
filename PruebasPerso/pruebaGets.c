#include<stdio.h>

int main()
{
  char string [256];
  printf("Insert yoour full address: ");
  gets (string);  //warning: unsafe (see sgets instead)
  printf("Your address is: %s\n", string);
  return 0;
}
