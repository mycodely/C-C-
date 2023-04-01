/* 
4. Ingresar 100 enteros y luego mostrar la cantidad de valores ingresados
mayores a 10.
 */

#include <stdio.h>
int i, val;

int main (){
    
i = 1;
val = 1;

// Test with Low number
    while(i<=3){
    printf("\ningrese un nuevo entero: ");
    scanf("%d", & val);
    fflush(stdin);
    if(val > 10){
              printf("el numero ingreso: %d es mayor a 10 \n" , val);
           }
    i++;
    }                         
              
    getchar();
    return 0; 
    }
