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

int main() {
    float promG = 0;
    const int ALUMNOS = 3;
    float nota;
    int j = 0;

    for (int i = 0; i <= ALUMNOS; i++) {
    	 float parciales = 0;
    	 int aprobados = 0;

        printf("\nAlumno %d:\n", i+1);
        for (int j = 0; j < 5; j++) {
            do {
                printf("Ingrese la nota del parcial %d: ", j + 1);
                scanf("%f", &nota); fflush(stdin);
                if (nota < 0 || nota > 10) {
                    printf("\nIngrese una nota valida (0 - 10)");
                }
            } while (nota < 0 || nota > 10);
            parciales += nota;
            
            if (nota >= 3) {
                aprobados++;
            }
        }

        float promedio = parciales / 5;
        printf("\nPromedio del alumno %d: %.2f", i+1, promedio);

        if (aprobados >= 3) {
            printf("\nEl alumno %d aprueba la cursada porque tiene 3 parciales aprobados", i+1);
        } else {
            printf("\nEl alumno %d desaprueba la cursada porque tiene 3 parciales desaprobados", i+1);
        }

        promG += promedio;
    }

    printf("\nPromedio general del curso: %.2f", promG / ALUMNOS);

    getchar();
    return 0;
}
