#include<stdio.h>

int main()
{
  float metros_consumidos, precio_x_metro, saldo_vencido, monto_total;
  int no_medidor;

  printf("Ingrese la cantidad de metros cubicos consumida: ");
  scanf("%f", &metros_consumidos);
  printf("\nIngrese precio por metro cubico: ");
  scanf("%f",&precio_x_metro);
  monto_total = metros_consumidos * precio_x_metro;
  printf("\nIngrese saldo vencido de la cuenta o ingrese '0' (cero) para continuar: ");
  scanf("%f", &saldo_vencido);
  printf("\nIngrese el numero de medidor: ");
  scanf("%d");

        if (saldo_vencido > 0)
          { monto_total = monto_total + (saldo_vencido * 1.08);
            printf("\nNo. de medidor: %d\tSaldo a cubrir: %8.2f\n\n",no_medidor, monto_total);
          } else { if (saldo_vencido == 0)
                     { printf("\nNo. de medidor: %d\tSaldo a cubrir: %8.2f\n\n",no_medidor, monto_total);
                   } else { if (saldo_vencido < 0)
                              { monto_total = monto_total + saldo_vencido;
                                printf("\nNo. de medidor: %d\tSaldo a cubrir: %8.2f\n\n",no_medidor, monto_total);
                              } else { printf("Las instrucciones no se siguieron correctamente. ejecutar de nuevo.\n\n"); }
                   }
          }
return 0;
}
