/*
10) Cargar un vector de enteros de dimensión 150, ordenarlo en forma ascendente e
imprimir el resultado.
*/

#include <stdio.h>

int main() {
    int vector[5];
    int i, j, aux;

    for (i = 0; i < 5; i++) {
        printf("\nIngrese el elemento %d: ", i+1);
        scanf("%d", &vector[i]);
    }


    for (i = 0; i < 5-1; i++) {
        for (j = 0; j < 5-i-1; j++) {
            if (vector[j] > vector[j+1]) {
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }

    printf("\nResultado: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}
