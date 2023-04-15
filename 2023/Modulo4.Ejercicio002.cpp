/* 
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
