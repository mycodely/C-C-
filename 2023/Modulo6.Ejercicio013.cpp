/* 13. Cargar un vector con 100 nombres de hasta 50 caracteres, luego mostrar por pantalla
en nombre más largo y su posición. strlen() y strcpy() */

#include <stdio.h>
#include <string.h>

int main() {
    const int MAX_NOMBRES = 5;
    const int MAX_CARACTERES = 8;

    char nombres[MAX_NOMBRES][MAX_CARACTERES];
    int longitud_maxima = 0;
    int posicion_nombre_mas_largo = 0;

    for (int i = 0; i < MAX_NOMBRES; i++) {
        printf("Ingrese el nombre %d: ", i + 1);
        fgets(nombres[i], sizeof(nombres[i]), stdin);
        nombres[i][strcspn(nombres[i], "\n")] = '\0';
    }

    for (int i = 0; i < MAX_NOMBRES; i++) {
        int longitud_nombre = strlen(nombres[i]);
        if (longitud_nombre > longitud_maxima) {
            longitud_maxima = longitud_nombre;
            posicion_nombre_mas_largo = i;
        }
    }

    printf("El nombre mas largo es: %s\n", nombres[posicion_nombre_mas_largo]);
    printf("Esta en la posicion: %d\n", posicion_nombre_mas_largo + 1);

    return 0;
}
