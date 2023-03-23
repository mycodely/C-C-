/* 
7) Ingresar el radio de un círculo y el lado de un cuadrado, calcular la superficie de ambos y
emitir por pantalla qué figura es la de mayor área.  */


#include <stdio.h>

int main() {
  float radio, lado, super_circ, super_squa;

  printf("Ingrese el radio del circulo: ");
  scanf("%f", &radio);
  fflush(stdin);

  printf("Ingrese el lado del cuadrado: ");
  scanf("%f", &lado);
  fflush(stdin);

  super_circ = 3.14159 * radio * radio;
  super_squa = lado * lado;

  if (super_circ > super_squa)
    printf("El circulo tiene mayor area (%.2f) que el cuadrado (%.2f)\n", super_circ, super_squa);
  else if (super_circ < super_squa)
    printf("El cuadrado tiene mayor area (%.2f) que el circulo (%.2f)\n", super_squa, super_circ);
  else 
    printf("El circulo (%.2f) y el cuadrado tienen la misma area (%.2f)\n", super_circ, super_squa);
  

  return 0;
}
