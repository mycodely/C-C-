/* 
4) Realizar un programa que lea un número entero y que emprima si termina o no termina en 0.
  */


#include <stdio.h>
int num;

int main (){
	printf("Ingrese un numero entero para verificar si termina en 0 : ");
	scanf("%d", &num);
	fflush(stdin);
	
	
	if(num % 10 == 0 || num == 0)
	printf("El numero %d termina en 0 \n", num);
	else printf("El numero %d NO termina en 0  \n", num);
	
	getchar();
	printf("\n Pulse una tecla para salir");
	return 0;
	
	
}
