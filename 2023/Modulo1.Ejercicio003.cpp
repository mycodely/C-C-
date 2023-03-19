/* 1) 3) Escribir un programa que solicite al usuario la longitud y el ancho de una habitación y a
continuación visualice su superficie con 4 decimales.
*/
#include  <stdio.h>
float longitud, ancho, result;

int main () {
    printf("Ingrese la longitud de la habitacion \n");
    scanf("%f", &longitud);
    fflush(stdin);
    printf("Ingrese el ancho de la habitacion \n");
    scanf("%f", &ancho);
    fflush(stdin);
    
    result = longitud * ancho;
    
    printf("La superficie de la habitacion es de %.4f", result);
    
    return 0;
    }
