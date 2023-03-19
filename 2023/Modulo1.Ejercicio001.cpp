/* 1) Escribir un programa que lea un entero, lo multiplique por 2 y a continuación escriba el
resultado en la pantalla.
*/
#include  <stdio.h>
int num;

int main () {
    printf("Ingrese un numero entero para ser multiplicado por 2\n");
    scanf("%d", &num);
    fflush(stdin);
    printf("El numero ingresado fue: %d y su resultado multiplicado por 2 es: %d",num, num*2);
    printf("\n Presione una tecla para finalizar");
    
    
    return 0;
    }
