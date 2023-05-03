/*
  4. Generar la lectura de teclado de un vector de 200 elementos, luego, mediante una
búsqueda identifique el valor mayor y su posición mostrándolo por pantalla.
  */

#include <stdio.h>

int main() {
    int vector[200];
    int i, max, flag;


    for(i = 1; i < 200; i++) {
        printf("Ingrese el elemento %d: ", i);
        scanf("%d", &vector[i]);
    }
    max = vector[0];
    flag = 0;
    
    for(i = 1; i < 200; i++) {
        if(vector[i] > max) {
            max = vector[i];
            flag = i;
        }
    }

    printf("El valor mayor es %d y se encuentra en la posicion %d\n", max, flag);

    return 0;
}
