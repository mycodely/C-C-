/* 
6. Leer números enteros hasta que aparezca un 0 (cero) y mostrar cuantos
positivos se ingresaron.
*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int acu = 0, val;

    printf("Ingrese numeros enteros (0 para salir):\n");
    do {
        printf("ingrese un nuevo entero: ");
        scanf("%d", &val);fflush(stdin);

        if (val >= 1) {
            printf("\n %d Es un numero positivo.\n", val);
            acu++;
        }
    } while (val != 0);

    printf("Se ingresaron %d numeros positivos.\n", acu);
    printf("Presione una tecla para salir.");
    getchar();
    return 0;
}
