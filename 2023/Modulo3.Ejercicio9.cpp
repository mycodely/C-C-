/* 
9. Una agencia de ventas de automóviles paga a su personal de ventas un
salario de $40000.-, más una comisión de $5000.- por automóvil vendido, más
4% del valor de la venta. Diseñar un algoritmo para calcular el salario de un
vendedor, en un mes dado, conociendo la cantidad de vehículos vendidos y el
precio de cada uno de éstos. */
		
#include <stdio.h>

int carPrice = 1, carPriceTotal = 0, quantCars = 0, quantCarsTotal = 0;
float salary = 0, salesTotal = 0;

int main() {
	
const int BASE = 40000;
const int COM_PER_CAR = 5000;
const float SALES_PER = 0.04;

	
   printf("\n Calculadora de salario mensual(ingrese valor 0 para salir) ");
   
   while(carPrice != 0){
   	printf("\n Ingrese el valor del auto vendido : ");
        scanf("%d", &carPrice);
        fflush(stdin);
        // Only counts card solds when the input is not 0
        if(carPrice!= 0)quantCars++;
        // Accumulate the price of sold cars
        carPriceTotal += carPrice;
        
        /*Assuming all quantities are known beforehand
		printf("\n Ingrese cantidad de autos vendidos : ");
      	scanf("%d", &quantCars);fflush(stdin); */
   }
   
   // Calculate salary
	quantCarsTotal = quantCars * COM_PER_CAR;
	salesTotal = carPriceTotal * SALES_PER;
  salary = BASE + quantCarsTotal + salesTotal;
    
    printf("\n Se han vendido : %d autos", quantCars);
    printf("\n --------------------------------");
    printf("\n Comisiones %d (%d por auto vendido)", quantCarsTotal, COM_PER_CAR);
    printf("\n --------------------------------");
    printf("\n Coeficiente %.2f %% del precio por auto vendido, Valor total acumulado de las ventas : %.2f", SALES_PER, salesTotal);
    printf("\n --------------------------------");
    printf("\n Salario correspondiente: %.2f", salary);
    printf("\n --------------------------------");
    printf("\n el programa finalizo correctamente. Presione una tecla.");
    getchar();
    return 0;
}
