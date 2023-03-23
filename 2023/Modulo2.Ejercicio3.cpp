/* 
3) Escribir un programa que lea 3 enteros y emita un mensaje que indiquen si fueron ingresados
o no en orden numérico creciente.
 */

#include <stdio.h>
int num1, num2, num3;

int main (){
	printf("Ingrese primer numero entero (1/3): ");
	scanf("%d", &num1);
	fflush(stdin);
	
	printf("Ingrese segundo numero entero (2/3): ");
	scanf("%d", &num2);
	fflush(stdin);
	
	printf("Ingrese un numero entero (3/3): ");
	scanf("%d", &num3);
	fflush(stdin);
	
	
	if(num1 < num2 && num2 < num3)
	printf("Los numeros %d , %d , %d, fueron ingresados en orden creciente \n", num1, num2, num3);

	else printf("Los numeros %d , %d , %d, NO fueron ingresados en orden creciente \n", num1, num2, num3);
	
	getchar();
	printf("\n Pulse una tecla para salir");
	return 0;
	
}
