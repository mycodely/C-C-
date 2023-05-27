/*
3. Cargar una matriz de reales de 12x8, sumar todos los elementos de su 3º fila y mostrar
el resultado. 

*/

#include <stdio.h>
#include <stdlib.h>

#define N 12
#define M 8

float mat[N][M];
int i, j;
float sumF = 0;

int main() {
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("\nIngrese valor para fila %d, columna %d: ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
            fflush(stdin);
        }
    }
    
    for (i = 0; i < N; i++) {
        sumF = sumF + mat[3][i];
    }
    
    printf("\nLa sumatoria de la fila N3 es de: %.2f", sumF);
    
    getchar();
    return 0;
}
