/*
5. Cargar en un vector V de dimensión 7 la suma de las filas de una matriz de 7x7,
previamente cargada con enteros positivos
*/

#include <stdio.h>
#include <stdlib.h>

const int N = 7;

int main() {
    int v[N];
    int mat[N][N];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            do {
                printf("\nIngrese un valor positivo para la fila %d, columna %d: ", i + 1, j + 1);
                scanf("%d", &mat[i][j]);

                if (mat[i][j] <= 0) {
                    printf("\nValor inválido, solo se aceptan enteros positivos.");
                }
            } while (mat[i][j] <= 0);
        }
    }

    for (i = 0; i < N; i++) {
        int sumF = 0;

        for (j = 0; j < N; j++) {
            sumF += mat[i][j];
        }
        v[i] = sumF; 
    }

    printf("\nContenido del vector :\n");
    for (i = 0; i < N; i++) {
        printf("%d\t", v[i]);
    }
    printf("\n");

	getchar();
    return 0;
}
