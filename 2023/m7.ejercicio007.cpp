/* 7. Se tiene un curso de 35 alumnos y por fin de cuatrimestre se necesita procesar los
datos de sus notas en los 5 parciales efectuados. Las notas son de 1 a 10, siendo 0 para
el ausente. 

Para aprobar la cursada se necesita aprobar al menos 3 parciales. Se pide:
a. Promedio de cada uno de los 5 parciales por alumno.
b. Verificar si aprueba o no la cursada sacando un listado.
c. Promedio general de todos los parciales del curso.

*/

#include <stdio.h>
#include <stdlib.h>

#define ALUMNOS 3
#define PARCIALES 5

int main() {
    float promG = 0;
    float notas[ALUMNOS][PARCIALES];
    
    printf("\n   Condiciones de aprobacion de la cursada:");
    printf("\n 3/5 notas >= 4... y promedio >=4");

    for (int i = 0; i < ALUMNOS; i++) {
        float parciales = 0;
        int aprobados = 0;

        printf("\n \nAlumno %d:\n", i + 1);
        for (int j = 0; j < PARCIALES; j++) {
            do {
                printf("Ingrese la nota del parcial %d: ", j + 1);
                scanf("%f", &notas[i][j]);
                fflush(stdin);
                if (notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("\nIngrese una nota valida (0 - 10)");
                }
            } while (notas[i][j] < 0 || notas[i][j] > 10);

            parciales += notas[i][j];

            if (notas[i][j] >= 4) {
                aprobados++;
            }
        }

        float promedio = parciales / PARCIALES;
        printf("\nPromedio del alumno %d: %.2f", i + 1, promedio);

        if (promedio >= 4 && aprobados >= 3) {
            printf("\nEl alumno %d aprueba la cursada", i + 1);
        } else {
            printf("\nEl alumno %d desaprueba la cursada", i + 1);
        }

        promG += promedio;
    }

    printf("\nPromedio general del curso: %.2f", promG / ALUMNOS);

    getchar();
    return 0;
}
