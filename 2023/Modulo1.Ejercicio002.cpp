/* 2) Escribir un programa que lea 2 valores enteros y los guarde en las variables A y B
respectivamente. Permutar los valores guardados en A y B, y luego imprimir el resultado.

*/
#include  <stdio.h>
int A,B,AUX;

int main () {
    printf("Ingrese el primer numero entero\n");
    scanf("%d", &A);
    fflush(stdin);
    printf("Ingrese el segundo numero entero\n");
    scanf("%d", &B);
    fflush(stdin);
    
    AUX = A;
    A = B;
    B = AUX;
    
    printf("Usted ingreso Valor A : %d y el Valor B: %d", B, A);
    printf("\n El valor modificado A: %d y B: %d", A, B);
    printf("\n Presione una tecla para finalizar");
    
    
    return 0;
    }
