/*Cargar un vector de enteros de dimensión 250 y luego pedir al usuario un valor entero
y verificar si se cargó previamente en el vector. Mostrar el resultado.*/

#include <stdio.h>


int main() {
    int vector[5]; int i, val, same = 0, flag = 0;

    for (i =1; i < 5; i++) {
        printf("Ingrese el valor del elemento %d: ", i);
        scanf("%d", &vector[i]);fflush(stdin);
    }

    printf("Ingrese un valor entero a buscar en el vector: ");
    scanf("%d", &val);fflush(stdin);

    for (i =1; i < 5; i++) {
        if (vector[i] == val) {
            same++; 
            flag = i;
        }
    }

printf("\n \n \n");
    
    if (same) {
        printf("El valor %d se encuentra en el vector en la posicion %d.", val, flag);
    } else {
        printf("El valor %d no se encuentra en el vector.\n", val);
    }

	getchar();
    return 0;
}
