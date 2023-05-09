/*
9) Calcular los valores anuales medios de las temperaturas de los años 2018, 2019 y 2020
dadas las temperaturas medias mensuales de cada año. Se lee Mes, Año y su
correspondiente temperatura media mensual. Guardar e imprimir los resultados.
*/

#include <stdio.h>

int main() {
   float temp[3][12];
   int i, j;

   for(i = 0; i < 3; i++) {
      printf("Anio %d:\n", 2018 + i);
      for(j = 0; j < 12; j++) {
         printf("Ingrese la temperatura media para %02d-%d: ", j + 1,2018 + i);
         scanf("%f", &temp[i][j]);fflush(stdin);
      }
      printf("\n");
   }

   float promedio;
   for(i = 0; i < 3; i++) {
      promedio = 0;
      for(j = 0; j < 12; j++) {
         promedio += temp[i][j];
      }
      promedio /= 12;
      printf("Temperatura media anual de %d: %.2f\n", 2018 + i, promedio);
   }

    getchar();
    return 0;
}
