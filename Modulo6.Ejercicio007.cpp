/*
7) Una empresa recibe mensualmente la información sobre las ventas de cada una de sus
20 sucursales. Se desea obtener un listado de aquellas que superan el promedio de
estas.

*/

#include <stdio.h>

int main() {
   int ventas[20], totalVentas = 0;
   float prom;


   for (int i = 0; i < 20; i++) {
      printf("Ingrese las ventas de la sucursal %d: ", i+1);
      scanf("%d", &ventas[i]);
      totalVentas += ventas[i];
   }

   prom = (float) totalVentas / 20;
   
   
   printf("\n Promedio = %.2f \n", prom);
   printf("\n Las sucursales que superan el promedio son: \n");
   for (int i = 0; i < 20; i++) {
      if (ventas[i] > prom) {
         printf("Sucursal %d\n", i+1);
      }
   }

   return 0;
}
