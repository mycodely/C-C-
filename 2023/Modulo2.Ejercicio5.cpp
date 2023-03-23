/* 
5) Escribir un programa que lea cuatro números enteros, los sume y aclare si esa suma es par o
impar.
 */


#include <stdio.h>
int num1, num2, num3, num4;

int main (){
	printf("Ingrese un numero entero para sumar (1/4) : ");
	scanf("%d", &num1);
	fflush(stdin);
	
	printf("Ingrese un numero entero para sumar (2/4) : ");
	scanf("%d", &num2);
	fflush(stdin);
	
	printf("Ingrese un numero entero para sumar (3/4) : ");
	scanf("%d", &num3);
	fflush(stdin);
	
	printf("Ingrese un numero entero para sumar (4/4) : ");
	scanf("%d", &num4);
	fflush(stdin);
	
	
	if((num1 + num2 +num3 +num4) % 2 == 0)
	printf("La suma de los 4 numeros ingresados (%d , %d , %d , %d) es un numero PAR \n", num1,num2,num3,num4);
	else printf("La suma de los 4 numeros ingresados (%d , %d , %d , %d) ES un numero IMPAR\n", num1,num2,num3,num4);
	
	getchar();
	printf("\n Pulse una tecla para salir");
	return 0;
	
	
}
