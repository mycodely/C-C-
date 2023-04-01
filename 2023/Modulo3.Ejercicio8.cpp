/* 
8. Ingresar números enteros hasta que aparezca un 0 (este valor no se incluye
dentro del proceso de datos), se pide visualizar el porcentaje de números
impares.
 */
		
#include <stdio.h>

int val = 1, acu = 0, acu2 = 0, res = 0;

int main() {
    while(val != 0) {
        printf("\n ingrese un numero entero: ");
        scanf("%d", &val);
        fflush(stdin);
        if(val != 0) {
            acu++;
        }
        if(val % 2 != 0 && val != 0) {
            acu2++;
        }
    }

    res = (acu2 * 100) / acu;
    
    printf("\n se ingresaron %d numeros impares, el porcentaje corresponde a: %d%%", acu2, res);
    printf("\n el programa finalizo. Presione una tecla.");
    getchar();
    return 0;
}
