/*
2. Se han solicitado presupuestos de un producto a 25 comercios distintos, de
los cuales se ingresará el precio de venta. Se desea saber el precio más bajo de
dicho producto y cuál es el comercio que lo vende. 
*/


#include <stdio.h>

int venta, bajaVenta, flagComercio;

int main() {
   
   for(int i = 1; i<= 5; i++){
   	   do{
   	printf("\n Ingrese el precio de la venta ");
   	scanf("%d", &venta);fflush(stdin);
   	
   	if(venta <= 0) printf("\n Ingrese un valor correcto");
   } while( venta <= 0);
   
   if(i == 1){
   	bajaVenta = venta;
   	flagComercio = i;
   }
   else if(venta < bajaVenta){
   	bajaVenta = venta;
   	flagComercio = i;
   }
   }

printf("\n El precio mas bajo fue de : %d", bajaVenta);
printf("\n El comercio donde se vendio fue el: %d", flagComercio);

    getchar();
    return 0;
	}
