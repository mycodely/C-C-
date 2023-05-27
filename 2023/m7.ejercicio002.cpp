/*
2. Cargar una matriz de enteros de 9x9, sumar todos los elementos de su diagonal y
mostrar el resultado.

*/

#include <stdio.h>
#include <stdlib.h>


const int N = 3;
int mat[N][N];
int i, j;
int sumD = 0;

int main() {
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("\nIngrese valor para fila %d, columna %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
            fflush(stdin);
        }
    }
    
    for (i = 0; i < N; i++) {
        sumD = sumD + mat[i][i];
    }
    
    printf("\nLa sumatoria de la diagonal es de: %d", sumD);
    
    getchar();
    return 0;
}
