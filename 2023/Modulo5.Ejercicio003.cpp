/*
3. En una encuesta realizada a 120 personas se preguntó la estatura y la edad de
cada una. Calcular el promedio de edad de la totalidad de los encuestados y el
promedio de la estatura de los que tienen más de 18 años. Mostrar por
pantalla los resultados. 
*/


#include <stdio.h>

float estatura, promH, promA, acuH, acuAge = 0;
int edad, contAge;

int main() {
   
   for(int i= 1; i<= 5; i++){
   	
 		do {
        printf("\n Ingrese la estatura: ");
        scanf("%f", &estatura); fflush(stdin);

       	 if (estatura <= 0) {
            printf("\n Valor incorrecto, ingrese nuevamente la estatura.");
     	   }
  		  } while (estatura <= 0);

   		 do {
      	  printf("\n Ingrese la edad: ");
      	  scanf("%d", &edad); fflush(stdin);

      	  if (edad <= 0) {
            printf("\n Ingrese una edad valida.");
       		 } else {
            acuAge += edad;

           if (edad > 18) {
                acuH += estatura;
                contAge++;
            }
      			  }
  			  } while (edad <= 0);
			}
			
		  promH = acuH / contAge;
    promA= acuAge / 5;
    
    printf("\n El promedio de edad de la totalidad de los encuestados es de: %.2f", promA);
     printf("\n El promedio de la estatura de mayores de 18 es de : %.2f", promH);


    getchar();
    return 0;	
   }
