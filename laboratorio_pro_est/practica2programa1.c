#include<stdio.h>
#include<math.h>

float  Vel, h; /* variables para calcular la velocidad y la altura */

void main()
{
  const float gravedad = 9.8;
  printf("Ingrese la altura para calcular la velocidad de impacto:" );
  scanf("%f",&h );
  Vel = sqrt(2 * gravedad * h);
  printf("\nLa velocidad de impacto desde la altura de %6.1f m es: %6.2f\n", h, Vel);

}
