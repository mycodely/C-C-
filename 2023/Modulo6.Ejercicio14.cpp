/* Ingresar el nombre de tres materias que esté cursando y luego mostrar por pantalla
esas materias ordenadas alfabéticamente. strcmp()

*/

#include <stdio.h>
#include <string.h>

int main() {
    char materia1[50], materia2[50], materia3[50];

    printf("Ingrese el nombre de la materia 1: ");
    fgets(materia1, sizeof(materia1), stdin);
    materia1[strcspn(materia1, "\n")] = '\0';  

    printf("Ingrese el nombre de la materia 2: ");
    fgets(materia2, sizeof(materia2), stdin);
    materia2[strcspn(materia2, "\n")] = '\0';

    printf("Ingrese el nombre de la materia 3: ");
    fgets(materia3, sizeof(materia3), stdin);
    materia3[strcspn(materia3, "\n")] = '\0';

    if (strcmp(materia1, materia2) > 0) {
        char temp[50];
        strcpy(temp, materia1);
        strcpy(materia1, materia2);
        strcpy(materia2, temp);
    }

    if (strcmp(materia1, materia3) > 0) {
        char temp[50];
        strcpy(temp, materia1);
        strcpy(materia1, materia3);
        strcpy(materia3, temp);
    }

    if (strcmp(materia2, materia3) > 0) {
        char temp[50];
        strcpy(temp, materia2);
        strcpy(materia2, materia3);
        strcpy(materia3, temp);
    }

    printf("\nLas materias ordenadas alfabéticamente son:\n");
    printf("1. %s\n", materia1);
    printf("2. %s\n", materia2);
    printf("3. %s\n", materia3);

    return 0;
}
