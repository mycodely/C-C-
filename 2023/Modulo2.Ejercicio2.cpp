/* 
2) Escribir un programa que lea 2 enteros e imprima el mayor.
  */

#include <stdio.h>
int num1, num2;

int main (){
	printf("Ingrese un numero entero para comparar con otro numero cual es mayor: ");
	scanf("%d", &num1);
	fflush(stdin);
	
	printf("\n Ingrese un segundo numero entero para comparar con otro numero cual es mayor: ");
	scanf("%d", &num2);
	fflush(stdin);
	
	if(num1 > num2 && num1 != num2)
	printf ("\n El numero %d es mayor",num1);
	
	if(num1 == num2)
	printf ("\n Los numeros tienen el mismo valor");
	
	else printf ("\n El numero %d es mayor", num2);
	
	getchar();
	printf("\n Pulse una tecla para salir");
	return 0;
	
}
