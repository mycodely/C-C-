/* 
7. Leer pares de números hasta que aparezca el par 9 – 9 y por cada par,
imprimir su producto. El último par no se debe tener en cuenta. Imprimir
cuantos pares se leyeron con un cartel aclaratorio.
 */

#include <stdio.h>
int val = 0, val2 = 0, acu = 0;

int main (){

    while(val != 9 || val2 != 9){
    printf("\n Ingrese el primer valor: ");
    scanf("%d", & val); fflush(stdin);
    
    printf("\n Ingrese el segundo valor: ");
    scanf("%d", & val2); fflush(stdin);
    
    printf("\n --------------------- ");
    if (val != 9 || val2 != 9){
            printf("\n valor 1 = %d \n valor 2 = %d", val, val2);
            acu++;
            }
    }
    
    printf("\n Se leyeron en total : %d parejas de numeros", acu);    
                 
         printf("\n \n El programa finalizo presiones una tecla");      
    getchar();
    return 0; 
    }
