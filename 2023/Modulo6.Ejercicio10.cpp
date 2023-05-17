#include <stdio.h>

int main() {
    const int ALUMNOS = 20;
    const int CALIFICACIONES = 5;
    const int APROBADO = 7;

    int calificaciones[ALUMNOS][CALIFICACIONES];
    float promedios[ALUMNOS];
    int i, j;

    for (i = 0; i < ALUMNOS; i++) {
        printf("Ingrese las calificaciones del alumno %d:\n", i + 1);
        for (j = 0; j < CALIFICACIONES; j++) {
            printf("Calificacion %d: ", j + 1);
            scanf("%d", &calificaciones[i][j]);fflush(stdin);
        }
    }


    for (i = 0; i < ALUMNOS; i++) {
        float suma = 0;
        for (j = 0; j < CALIFICACIONES; j++) {
            suma += calificaciones[i][j];
        }
        promedios[i] = suma / CALIFICACIONES;
    }

    printf("Los promedios aprobados son:\n");
    for (i = 0; i < ALUMNOS; i++) {
        if (promedios[i] >= APROBADO) {
            printf("Alumno %d: Posicion donde aprobo %d\n", i + 1, i);
        }
    }

	getchar();
    return 0;
}
