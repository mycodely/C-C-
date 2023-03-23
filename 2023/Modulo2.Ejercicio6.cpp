/* 
6) Desarrollar un programa para ingresar la base y la altura de un triángulo y emitir su área. El
algoritmo debe validar los datos de entrada de ambos valores, estas medidas deben ser
positivas, caso contrario imprimir un mensaje aclaratorio.
 */


#include <stdio.h>
float base, altura, area;

int main (){
	printf("Ingrese la base para calcular el area de un triangulo : ");
	scanf("%f", &base);
	fflush(stdin);
	
	
	printf("\n Ingrese la altura para calcular el area de un triangulo: ");
	scanf("%f", &altura);
	fflush(stdin);
	

	
	area = (base*altura)/2;

	
	if (altura >0 && base >0)printf("\n El area del triangulo es : %.2f", area);
	else if(base<= 0) printf("\n El valor de la base es negativo, por favor ingrese un valor valido");
	else printf("\n El valor de la altura es negativo, por favor ingrese un valor valido");



	getchar();
	printf("\n Pulse una tecla para salir");
	return 0;
	
