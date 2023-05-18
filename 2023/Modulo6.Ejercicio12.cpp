/* 
12. Una estación de servicio expende nafta premium, súper y diésel. Cargar la cantidad 
de litros vendidos cada día de cada uno de estos productos durante un mes. Se desea saber:
• Cantidad total vendida de cada producto en el mes.
• Cuál es el producto de mayor venta.
• Cual fue el día de mayor venta de cada producto, mostrar también la cantidad */

#include<stdio.h>
const int N=5;
int s[N],p[N],d[N];
int i, x;
int sums, sump, sumd;
int maxs,maxp,maxd,fs,fp,fd;
main()
{
	sums=sump=sumd=x=0;
	
	for(i=0;i<N;i++)
	{
		printf("\n DIA %d:\n",i+1);
		do
		{
			printf("cantidad de nafta super: ")
			;scanf("%d",&s[i]);fflush(stdin);
			if(s[i]<0) printf("\n valor invalido");
		}
		while(s[i]<0);
		do
		{
			printf("cantidad de nafta premium: ")
			;scanf("%d",&p[i]);fflush(stdin);
			if(p[i]<0) printf("\n valor invalido");
		}
		while(p[i]<0);
		do
		{
			printf("cantidad de diesel: ");
			scanf("%d",&d[i]);fflush(stdin);
			
			if(d[i]<0) printf("\n valor invalido");
		}
		while(d[i]<0);	
	}
	for(i=0;i<N;i++)
	{
		sums+=s[i];
		sump+=p[i];
		sumd+=d[i];
	}
	if((sums>sump)&&(sums>sumd)) x=1;
	if((sump>sums)&&(sump>sumd)) x=2;
	if((sumd>sump)&&(sumd>sums)) x=3;
	maxs=s[0];fs=1;
	maxp=p[0];fp=1;
	maxd=d[0];fd=1;
	for(i=1;i<N;i++)
	{
		if(s[i]>maxs) {maxs=s[i];fs=i+1;}
		if(p[i]>maxp) {maxp=p[i];fp=i+1;}
		if(d[i]>maxd) {maxd=d[i];fd=i+1;}
	}
	printf("\n Cantidad de super vendida  : %4d",sums);
	printf("\n Cantidad de premium vendida: %4d",sump);
	printf("\n Cantidad de diesel vendido : %4d",sumd);
	switch(x)
	{
		case 1: printf("\n\n El producto de mayor venta fue la nafta super");break;
		case 2: printf("\n\n El producto de mayor venta fue la nafta premium");break;
		case 3: printf("\n\n El producto de mayor venta fue el diesel");break;
		default: printf("\n\n No hubo un producto de mayor venta");
	};
	printf("\n\n La venta diaria mayor de super fue de %3d Lts, y fue el dia:  %d ",maxs,fs);
	printf("\n\n La venta diaria mayor de premium fue de %3d Lts, y fue el dia:  %d ",maxp,fp);
	printf("\n\n La venta diaria mayor de diesel fue de %3d Lts, y fue el dia:  ",maxd,fd);
	
	getchar();
	return 0;
}
