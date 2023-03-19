/* 6) Realizar un programa que lea las medidas de una pared (base y altura). Se tiene un tipo de
pintura a utilizar para pintar dicha pared que rinde 0,5 metros cuadrados por litro de pintura cuyo
precio es $1785.- por litro. Realizar un programa que le solicite al usuario las medidas de la pared y
que visualice el costo de pintar dicha pared.
*/
#include  <stdio.h>
float base, altura, result;

int main () {
    printf("Ingrese base de la pared a pintar\n");
    scanf("%f", &base);
    fflush(stdin);
    
    printf("Ingrese altura de la pared a pintar\n");
    scanf("%f", &altura);
    fflush(stdin);  
    
    // 0,5mts por 1L --- a 1785$   
    
    result = (((base*altura) / 0.5)* 1785);
    
    printf("El costo de pintar la pared es: $%.2f", result);

    
    return 0;
    }
