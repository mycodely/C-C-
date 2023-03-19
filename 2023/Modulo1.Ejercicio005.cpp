/* 5) Una temperatura en grados centígrados (Cº) puede ser convertida en a una temperatura en
grados Fahrenheit (Fº) de acuerdo a la siguiente fórmula:
F = ( 9 /5 ) C + 32
Escribir un programa que lea una temperatura en grados Centígrados y obtenga la temperatura
Fahrenheit equivalente.
*/
#include  <stdio.h>
float grados, result;

int main () {
    printf("Ingrese temperatura en grados C para ser convertido a Fahrenheit\n");
    scanf("%f", &grados);
    fflush(stdin);
    
    result = (grados*9/5) + 32;
    
    printf("Los grados %.2f ingresados equivalen a : %.2f Fahrenheit", grados, result);
    
    return 0;
    }
