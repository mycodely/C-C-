/* 
5. Desarrollar un programa validador de fechas, en el que se solicite el día, el mes (en número) 
y el año. Mostrar por pantalla si la fecha es válida o no. El usuario podrá ingresar 
la cantidad de fechas que desee.*/

#include<stdio.h>
#include<locale.h>
main(){
	int mm, dd, aa;
	bool valid;
	char seguir;
	setlocale(LC_ALL, "spanish");
	do{
		valid = false;
		printf("\n*****INGRESE UNA FECHA*****\n");
		printf("\nDÍA: ");
		scanf("%d", &dd);
		fflush(stdin);
		printf("\nMES: ");
		scanf("%d", &mm);
		fflush(stdin);
		printf("\nAÑO: ");
		scanf("%d", &aa);
		fflush(stdin);
		
		switch(mm){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: if((dd>=1)&&(dd<=31)) valid = true; break;
			case 4:
			case 6:
			case 9:
			case 11:  if((dd>=1)&&(dd<=30)) valid = true; break;
			case 2:  if((dd>=1)&&(dd<=28)) valid = true; 
					if((dd==29) && ((aa%4==0) && (aa%100!=0) || (aa%400==0))) valid = true;		
		}
		
		if(valid)
			printf("\n***FECHA VÁLIDA***\n");
		else
			printf("\n***FECHA INVÁLIDA***\n");
		
		printf("\nSi desea continuar pulse \"s\" ");
		scanf("%c", &seguir);
		
	}while(seguir=='s');
	
	return 0;
}
