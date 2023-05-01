/*
Realizar la lectura de teclado de un vector de reales con 50 componentes. Generar
luego la suma de todos los elementos del vector e imprimir el resultado.
*/

#include <stdio.h>

int main() {
  float vector[5], suma = 0.0;

  for (int i = 0; i < 50; i++) {
    printf("Ingrese el elemento %d: ", i+1);
    scanf("%f", &vector[i]);fflush(stdin);
  }

  for (int i = 0; i < 50; i++) {
    suma += vector[i];
  }

  printf("La suma de todos los elementos del vector es: %.2f\n", suma);

  getchar();
  return 0;
}
