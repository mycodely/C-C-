/*
4. En una maderera se tienen 80 tablones que deben ser medidos. Ingresar la
medida de los tablones e indicar cuántos tablones miden más de 4 metros.
Mostrar los resultados. 
*/



#include <stdio.h>

float size = 0;
int bigOnes = 0;

int main () {
    for (int i = 1; i <= 80; i++) {
        do {
            printf("\nIngrese la medida del tablon: ");
            scanf("%f", &size); fflush(stdin);
            
            if (size <= 0) {
                printf("\nERROR debe ingresar medidas validas enteras(mayor a 0)\n \n");
                printf("\n --------------------------------- \n \n");
            } else printf("\n **Ingreso aceptado** \n ");
			}
        while (size <= 0);
        
        if (size > 4) {
            bigOnes++;
        }
    }

    if (bigOnes != 0) {
        if (bigOnes == 1) {
            printf("\nHay %d tablon que mide mas de 4mts", bigOnes);
        } else {
            printf("\nHay %d tablones que miden mas de 4mts", bigOnes);
        }
    } else {
        printf("\nNo hay tablones que midan mas de 4mts");
    }

    getchar();
    return 0;
}
