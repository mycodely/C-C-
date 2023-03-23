/* 1) Escribir un programa que lea un valor entero y mostrar por pantalla un mensaje que diga si
ese valor es positivo o negativo.
  */

#include <stdio.h>
int num;

int main (){
	printf("Ingrese un valor entero para verificar si es positivo o negativo ");
	scanf("%d", &num);
	fflush(stdin);
	
	if(num > 0 && num != 0)
	printf ("El valor %d es positivo",num);
	
	else printf ("El valor %d no es positivo",num);
	
	getchar();
	printf("\n Pulse una tecla para salir");
	return 0;
	
}
