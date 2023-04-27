#include <stdio.h>

int val, contador;

int main(){
  printf("\nIngrese valores enteros (0 si desea finalizar el programa): ");
  scanf("%d", &val); fflush(stdin);

  while(val>0){
  if(val % 2 == 0) contador++;
    
    printf("\nIngrese otros valores enteros (0 si desea finalizar el programa):");
    scanf("%d", &val); fflush(stdin);
    if(val == 0) printf("\nUsted ha eligdo la opcion 0, el programa finalizara");
  }
  
  printf("\nLa cantidad de valores pares ingresados es de %d", contador);
  getchar();
  return 0;
}
