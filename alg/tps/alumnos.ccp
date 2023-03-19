#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*cargar datos de alumnos en un vector "son un struct"
visualizar FX: 1) cantidad de alumnos mayores de edad
			2) porcentaje de alumnos promedio >= 4
			3) cantidad de alumnos cuyo apellido sean gomez
			
hacer FX que valide las notas entre 0-100 y lo mismo con la edad*/


struct alumni{
	
	char nombre [30];
	char apellido [30];
	int edad;
	float notas[3];
	float promedio; //debe ser procedimiento
	
};

int main () {
	
	int cantAlumn= 0, edadA;
	struct alumni alumno;
	char nombreA[30], apellidoA[30];
	

		printf("\nCuantos alumnos desea ingresar?");
		fflush(stdin);
		scanf("%d", &cantAlumn);

	
		for(int i = 0; i<cantAlumn;i++ ){
	printf("\nCual es el nombre del alumno %d?", i);
		fflush(stdin);
		strcpy(alumno.nombre,gets(nombreA));
		
	printf("\nCual es el apellido %d?", i);
		fflush(stdin);
		strcpy(alumno.apellido,gets(apellidoA));
		
			printf("\ncuantos anios tiene %d?", i);
		fflush(stdin);
		scanf("%d",&alumno.edad);
		
		
		for (int j=0; j<=2; j++){
		printf("\nIngrese nota %d", i);
		fflush(stdin);
		scanf("%d",&alumno.notas[j]);
			
		}
		printf("\ncuantos anios tiene %d?", i);
		fflush(stdin);
		scanf("%d",&alumno.edad);
	} 
	
	printf("\nSu alumno se llama %s\n", alumno.nombre);
	printf("\ncon el apellido	 %s\n", alumno.apellido);
	printf("\nvivio %d primaveras\n", alumno.edad);
	

	
	system("pause");
	return 0;
}
