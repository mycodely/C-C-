/* 
Leer pares de valores hasta que se lea el par 99-99. El primer valor corresponderá al de
una provincia (entre 1 y 24) y el segundo corresponderá a un grupo de habitantes
censados de dicha provincia. Se deberá rechazar el par inválido. Imprimir el siguiente
listado:
PROVINCIA     CANT. DE HABITANTES
    1                xxxxx
    2                xxxxx
    3                xxxxx
    .
    .
    .
    .
    .
    .
    24               xxxxx
  TOTAL:             xxxxx

*/

#include <stdio.h>

const int MAX_PROVINCIAS = 24;

int main() {
    int provincia, habitantes, total_habitantes = 0;
    int habitantes_por_provincia[MAX_PROVINCIAS] = {0};
    int num_provincias = 0, valido;

    do {
        valido = 1; 
        printf("Ingrese el par provincia-habitantes (provincia %d): ", num_provincias + 1);
        scanf("%d-%d", &provincia, &habitantes);fflush(stdin);

        if (provincia == 99 && habitantes == 99) {
            break; 
        }

        if (provincia < 1 || provincia > 24 || habitantes < 0) {
            printf("Par invalido.\n");
            valido = 0; 
        }

        if (valido) {
            habitantes_por_provincia[provincia - 1] += habitantes;
            total_habitantes += habitantes;
            num_provincias++;
        }
    } while (num_provincias < MAX_PROVINCIAS);

    printf("    PROVINCIA \t \t HABITANTES\n");

    for (int i = 0; i < MAX_PROVINCIAS; i++) {
        if (habitantes_por_provincia[i] > 0) {
            printf("       %d \t    \t %d\n", i + 1, habitantes_por_provincia[i]);
        }
    }

    printf("      TOTAL\t         %d\n", total_habitantes);
    
    getchar();
    return 0;
}
