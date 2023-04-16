#include <stdio.h>

int cantD = 0, cantA = 0;
float nota, sum, prom;

int main () {
    for (int i = 1; i <= 5; i++) {
        sum = 0;
        for (int j = 1; j <= 5; j++) {
            printf("\nIngrese la nota del alumno N%d: ", i);
            scanf("%f", &nota);fflush(stdin);
            sum += nota;
        }
        prom = sum / 5;

        if (prom >= 4) {
            printf("\nEl alumno N%d ha APROBADO con el promedio %f", i, prom);
            cantA++;
        } else {
            printf("\nEl alumno N%d ha sido DESAPROBADO con el promedio %f", i, prom);
            cantD++;
        }
    }
printf("\n ****************************");
printf("\n ****************************");


    printf("\n\nLa cantidad TOTAL de aprobados es de: %d", cantA);
    printf("\n--------------------------------------");
    printf("\nLa cantidad TOTAL de desaprobados es de: %d", cantD);

    getchar();
    return 0;
}
