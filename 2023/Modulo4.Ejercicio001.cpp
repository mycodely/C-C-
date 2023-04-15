#include <stdio.h>

int main () {
int num = 0, aux = 0;
  
  for (int i = 0, i <= 40; i++){
  printf("\nIngrese 40 numeros para ver cual es el mayor");
    scanf("%d", &num);
    if(aux = 0){
    aux = num;
    }
    if(num > aux){
    aux = num;
    }
  }
  
  printf("El numero mayor es: %d", aux);
  getchar();
  return 0;

}
