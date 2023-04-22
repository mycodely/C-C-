/* 

*/
#include <stdio.h>

float temp, prom;

int main(){
	
	for (int i = 1; i<= 30; i++){
		
		float sum = 0;
		
		for (int j = 1; j <= 3; j++){
			printf("\n Ingrese la temperatura %d/3 :", j);
			scanf("%f", &temp); fflush(stdin);
			sum += temp;
			}
			prom = sum/3;
			
			if (prom < 10){
			printf("\n El dia fue frio (%.2f en promedio)", prom);
		} else if( prom < 20) {
			printf("\n El dia fue templado (%.2f en promedio)", prom);
		} else { printf("\n El dia fue calido (%.2f en promedio)", prom);
		 }
		}
		
		getchar ();
		return 0;
		}
