/*
4. Cargar una matriz de enteros de 10x10, sumar todos los elementos de su 5º columna y
mostrar el resultado. 

*/

#include <stdio.h>
#include <stdlib.h>

const int N = 10;
int mat[N][N];
int i,j, sumC=0;

int main(){

	for(i = 0; i<N; i++){
		for(j =0; j<N; j++){
			printf("\nIngrese valor para fila %d, columna %d :  ", i+1, j+1);
			scanf("%d", &mat[i][j]); fflush(stdin);
		}
	}
		for(i =0; i<N; i++){
			sumC = sumC + mat[i][4];
		}
	
	
	printf("\nLa sumatoria de la columna es de %d", sumC);
	
	getchar();
	return 0;
}
