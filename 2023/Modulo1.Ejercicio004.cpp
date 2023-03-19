/* 4) Escribir un programa que solicite al usuario un número de minutos y lo convierta a su
equivalente en segundos, para luego visualizarlo
*/
#include  <stdio.h>
int minutos, result;

int main () {
    printf("Ingrese minutos para ser convertido a segundos\n");
    scanf("%d", &minutos);
    fflush(stdin);
    
    result = minutos * 60;
    
    printf("Los %d ingresados equivalen a : %d segundos", minutos, result);
    
    return 0;
    }
