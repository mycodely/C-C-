/* 
2. Imprimir la suma de los primeros 100 números naturales.
 */

#include <stdio.h>
int num, aux;

int main (){
    
    num = 1;
    aux = 0;
       
    while(num<=100){
    aux = aux + num;
    num++;
}
    printf("la suma de los 100 primeros naturales es:  %d \n", aux );  
    getchar();
    return 0;
    }
