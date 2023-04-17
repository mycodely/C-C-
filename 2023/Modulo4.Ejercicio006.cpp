/*
6. Un puesto de venta mayorista de cajones de manzanas comienza el mes con
148 cajones en stock. Cada jornada, al comenzar el día ingresa al puesto una
cantidad de cajones y diariamente se realizan ventas. Ingresar por día la 
cantidad de cajones ingresados y la cantidad de cajones vendidos completando
un período de 30 días.

Mostrar por pantalla:
• La cantidad total de cajones vendidos.
• La mayor cantidad de cajones vendidos en un día, y qué día fue.
• La menor cantidad diaria de cajones ingresados y qué día fue.
• El stock remanente. 
*/


#include <stdio.h>
#include <limits.h>

int stock = 148, ingresos = 0, vendidos = 0, mayorVenta = 0, minIngresos = INT_MAX, totalVentas, flagMin = 0, flagMax = 0;

int main () {
    
    for (int i = 1; i<= 30; i++){
    	do{
    		printf("\nIngrese la cantidad de cajones nuevos que llegaron durante el dia %d :\n", i);
    	    scanf("%d", &ingresos); fflush(stdin);
    	    printf("\n");
    	    if (ingresos < 0) printf("\n *ERROR* Valor invalido *ERROR* \n");
    	
    	    if( ingresos < minIngresos){
    	        minIngresos = ingresos;
    	        flagMin = i;
    	    }
		
    	} while(ingresos < 0);
		
    	stock += ingresos;
	
    	do{
    	    printf("\n Cuantos cajones se han vendido en el dia %d :\n", i);
    	    printf("\n");
    	    scanf("%d", &vendidos); fflush(stdin);
    	    printf("\n ________________________________ \n");
		
    	    if((vendidos > stock)||(vendidos < 0)) printf("\n *ERROR* Cantidad de venta invalida, ingrese numero correcto o verifique stock disponible *ERROR* \n");
    	    else if(vendidos > mayorVenta){
    	        mayorVenta = vendidos;
    	        flagMax = i;
    	    }
    	    if(vendidos <= minIngresos){
    	        minIngresos = vendidos;
    	        flagMin = i;
    	    }
		
    	} while((vendidos < 0) || (vendidos >stock));
	
    	stock -= vendidos;
    	totalVentas += vendidos;
	
    }

    printf("\n-------------------------------\n");
    printf("\n Cantidad total de cajones vendidos: %d", totalVentas);
    printf("\n Mayor venta diaria: %d, en el dia: %d", mayorVenta, flagMax);
    printf("\n Menor ingreso de cajones: %d, en el dia: %d", minIngresos, flagMin);
    printf("\n Stock remanente: %d", stock);

    getchar();
    return 0;
}
