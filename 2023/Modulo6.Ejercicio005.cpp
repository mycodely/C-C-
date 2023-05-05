/* 
5) Cargar un vector de dimensión 100 con elementos enteros positivos, luego realizar el
promedio de los valores cargados y mostrar el resultado.
*/


#include <stdio.h>

int main() {
    int vector[100], sum = 0;
    float prom;
    
    for(int i = 0; i<100; i++){
        printf("Ingrese un numero entero positivo para la posicion %d ", i );
        scanf("%d", &vector[i]);fflush(stdin);
        
        while(vector[i] < 0) {
            printf("Error: Ingrese un número entero positivo para la posición %d: ", i);
            scanf("%d", &vector[i]);fflush(stdin);
        }
        
        sum += vector[i];
    }
    
    prom = (float) sum / 100;
    
    printf("El promedio de los valores cargados es: %.2f\n", prom);
    
    return 0;
}
