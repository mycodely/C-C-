/*
2. Se desea leer por teclado una secuencia de valores enteros entre –20 y 20. En
el momento que se lea un valor que no cumpla con dichas condiciones deberá
interrumpirse el ingreso de datos e imprimir la sumatoria de los valores
positivos válidos ingresados. 
*/

#include  <stdio.h>
int num;

int main () {
  int num = 0, aux = 0;
  
  while((num >= -20) || (num <= 20)){
  printf("\nIngrese un numero entero entre -20 y 20");
    scanf("%d", &num);
    aux += num;
  }
    printf("\n La suma de los numeros ingresados es de : %d", aux);
  
  getchar();  
    return 0;
    }
