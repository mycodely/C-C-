/*
6. Cargar en un vector V de dimensión 9 el promedio de las columnas de una matriz de
9x9, previamente cargada con reales. 

*/


#include <stdio.h>
#include <stdlib.h>

#define N 9

int main() {
    float v[N];
    float mat[N][N];
    float sumC;
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Ingrese un numero real para la fila %d, columna %d: ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
        }
    }

    for (j = 0; j < N; j++) {
        sumC = 0;
        for (i = 0; i < N; i++) {
            sumC += mat[i][j];
        }
        v[j] = sumC / N;
    }

    printf("\nContenido del vector:\n");
    for (i = 0; i < N; i++) {
        printf("%.2f\t", v[i]);
    }
    printf("\n");

	getchar();
    return 0;
}
