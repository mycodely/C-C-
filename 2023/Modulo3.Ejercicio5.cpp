/* 
5. Leer números enteros hasta que aparezca un 0 (cero) y mostrar la suma de
ellos.
 */

#include <stdio.h>
int acu, val;

int main (){
    

val = 1;
acu = 0;


    while(val != 0){
    printf("\ningrese un nuevo entero: ");
    scanf("%d", & val); fflush(stdin);
    acu = val + acu;
    }
    
    printf("\n La suma de los numeros ingresados es: %d ", acu);                    
              
    getchar();
    return 0; 
    }
