/* EPISODIO N°9 - El ascenso de Skywalker
2. Este es el mismo programa que hicimos en la actividad n° 8, pero lo vamos a modularizar con funciones: 
Se desea volcar en un listado los resultados de una encuesta realizada a 300 personas. Se preguntó la edad, 
la estatura y su color preferido. El ingreso de datos se hará en una función y luego pasar los datos a un 
vector de registros. Luego mostrar el listado completo, por último, mostrar cuantas personas tienen 18 años o más, 
hacer una función para eso, el promedio de todas las estaturas en otra función, y cuantas de las que superan 
el promedio eligieron el color blanco en una última función.
.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
const int N=6;
struct registro1
{
	int 	edad;
	float	altura;	
	char	color[40];

};

int cargaedad()
{
	int e;
	do
		{
			printf("\nINGRESE EDAD: ");
			scanf("%d",&e); 
			fflush(stdin);
			if(e<0)
				printf("\nDATO ERRONEO");	
		}
	while(e<0);
	return e;
}
float cargaaltura()
{
	float h;
	do
		{
			printf("\nINGRESE ALTURA: ");
			scanf("%f",&h);
			fflush(stdin);
			if(h<=0)
				printf("\nDATO ERRONEO");	
		}
	while(h<=0);
	return h;
}
int cargacolor(char c[40])
{
	printf("\nINGRESE COLOR PREFERIDO: ");
	gets(c);
	fflush(stdin);
	return 0;
}

int cantidad18(registro1 v[N])
{
	int i, cant=0; registro1 persona;
	for(i=0;i<N;i++)
	{
		persona.edad=v[i].edad;
		if(persona.edad>=18)
			cant++;
	}
	return cant;
}

float promedio(registro1 v[N])
{
	int i;float prom=0; registro1 persona;	
	
	for(i=0;i<N;i++)	
	{
		persona.altura=v[i].altura;
		prom+=persona.altura;
	}
	prom=prom/N;
	return prom;
}

int altos(registro1 v[N],float p)
{
	int i,c=0; registro1 persona;		
	for(i=0;i<N;i++)	
	{
		persona.altura=v[i].altura;
		if(p<persona.altura)
			c++;
	}
	return c;
}

int blancos(registro1 v[N],float p)
{
	int i,a,c=0; registro1 persona; char aux[40]="";
	strcat(aux,"BLANCO\0");	
	for(i=0;i<N;i++)	
	{
		persona.altura=v[i].altura;
		strcpy(persona.color,v[i].color);
		a=strcmp(aux,persona.color); 
		if((p<persona.altura)&&(a==0))
			c++;
	}
	return c;
}

registro1 persona,vec[N];
int i,x;
float prom;
int cant18, cant_color, cantmax;
char color[40];

main()
{
	for(i=0;i<N;i++)
	{
		printf("\n\n************* PERSONA %d ***************** \n",i+1);
		persona.edad=cargaedad();
		persona.altura=cargaaltura();
		x=cargacolor(persona.color);
		vec[i].edad=persona.edad;
		vec[i].altura=persona.altura;
		strcpy(vec[i].color,persona.color);
	}
	printf("\n\n *******************LISTADO***********************\n\n");
	printf("EDAD    ALTURA   COLOR\n");
	for(i=0;i<N;i++)
	{
		persona.edad=vec[i].edad;
		persona.altura=vec[i].altura;		
		strcpy(persona.color,vec[i].color);
		printf(" %2d \t%4.2f \t%s \n",persona.edad,persona.altura,persona.color);
	}
	printf("\n\n *************************************************\n\n");
	cant18=cantidad18(vec);
	printf("\nPERSONAS CON EDAD DE 18 O MAS: %d",cant18);
	prom=promedio(vec);
	printf("\nPROMEDIO DE ESTATURAS: %3.2f",prom);
	cantmax=altos(vec,prom);
	printf("\nCANTIDAD QUE SUPERA EL PROMEDIO DE ESTATURAS: %2d",cantmax);
	cant_color=blancos(vec,prom);
	printf("\nCANTIDAD QUE SUPERA EL PROMEDIO DE ESTATURAS Y ELIGIERON BLANCO : %2d",cant_color);		
	printf("\n\n *************************************************\n\n");
	system("pause");
	return 0;
	
	
}
