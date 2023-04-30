#include <stdio.h>

/*
Modulo 6
1) Cargar un vector con los primeros 100 números naturales y luego mostrarlo por
pantalla.
 */

int main() {
    int nums[100], i;

    for (i = 0; i < 100; i++) {
        nums[i] = i + 1;
    }

    for (i = 0; i < 100; i++) {
    	if(i == 0){printf("\nLos numeros cargados son: ");
		}
        printf("%d ", nums[i]);
    }
getchar();
    return 0;
}
