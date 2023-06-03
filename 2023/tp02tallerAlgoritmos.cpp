#include <stdio.h>
#include <stdlib.h>

const int N = 15;

int main() {
    int i, j, x;
    int m[N][N];
    float promedioFilas[N], promedioColumnas[N], promedioDiagonal;
    float mayorPromedio;
    int pos, ubic;

    
    for (i = 0; i < N; i++) {
        printf("Ingrese valores enteros positivos para la fila %d:\n", i + 1);
        for (j = 0; j < N; j++) {
            do {
                printf("Columna %d: ", j + 1);
                scanf("%d", &x);
                fflush(stdin);
                if (x < 0) {
                    printf("Valor invalido. Ingrese un entero positivo.\n");
                }
            } while (x < 0);
            m[i][j] = x;
        }
    }

    for (i = 0; i < N; i++) {
        promedioFilas[i] = promedioColumnas[i] = 0;
    }
    promedioDiagonal = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            promedioFilas[i] += m[i][j];
            promedioColumnas[j] += m[i][j];
            if (i == j) {
                promedioDiagonal += m[i][j];
            }
        }
    }

    for (i = 0; i < N; i++) {
        promedioFilas[i] /= N;
        promedioColumnas[i] /= N;
    }
    promedioDiagonal /= N;

    mayorPromedio = promedioDiagonal;
    pos = 0;
    ubic = 1;

    for (i = 0; i < N; i++) {
        if (promedioColumnas[i] > mayorPromedio) {
            mayorPromedio = promedioColumnas[i];
            pos = i;
            ubic = 2;
        }
        if (promedioFilas[i] > mayorPromedio) {
            mayorPromedio = promedioFilas[i];
            pos = i;
            ubic = 3;
        }
    }

    printf("\nPromedios de filas:\n");
    for (i = 0; i < N; i++) {
        printf("Fila %d: %.2f\n", i + 1, promedioFilas[i]);
    }

    printf("\nPromedios de columnas:\n");
    for (i = 0; i < N; i++) {
        printf("Columna %d: %.2f\n", i + 1, promedioColumnas[i]);
    }

    printf("\nPromedio de la diagonal: %.2f\n", promedioDiagonal);
    printf("\nEl promedio mayor es %.2f ", mayorPromedio);

    switch (ubic) {
        case 1:
            printf("y pertenece a la diagonal.\n");
            break;
        case 2:
            printf("y pertenece a la columna %d.\n", pos + 1);
            break;
        case 3:
            printf("y pertenece a la fila %d.\n", pos + 1);
            break;
    }

    return 0;
}+
