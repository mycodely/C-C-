/*
. Ingresar valores enteros positivos. En el momento que se lea un valor que no
cumpla con dichas condiciones deberá interrumpirse el ingreso de datos e
imprimir la cantidad y la sumatoria de los valores pares ingresados. 
*/


#include <stdio.h>

int main() {
    int val, sum = 0, cant = 0, par;
    
    do {
        printf("\n Ingresar valor: ");
        scanf("%d", &val);
        fflush(stdin);

        if (val > 0) {
            par = val % 2;
            if (par == 0 && val != 0) { // no incluye el cero, cambiar segunda condicion para contabilizarlo
                cant++;
                sum += val;
            }
        }
    } while (val > 0);

    printf("\n La cantidad de pares es de: %d", cant);
    printf("\n La suma de los numeros ingresados es de: %d", sum);

    getchar();
    return 0;
	}
