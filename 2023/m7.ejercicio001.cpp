/*
1. Cargar una matriz de enteros de 7x7 con valores no positivos, luego mostrar la matriz. 


*/

#include <stdio.h>
#include <stdlib.h>

const int N = 7;
int mat[N][N];
int num, i, j;

int main() {
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            do {
                printf("\nIngrese valor negativo para fila %d, columna %d: ", i + 1, j + 1);
                scanf("%d", &num);
                fflush(stdin);

                if (num >= 0) {
                    printf("\nIngrese invalido, solo se aceptan valores negativos!");
                }
            } while (num >= 0);

            mat[i][j] = num;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
	getchar();
    return 0;
}
