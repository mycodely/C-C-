#include <stdio.h>

int part1 = 0, part2 = 0, part3 = 0, part4 = 0, part5 = 0, vote = 6;


int main () {

printf("\nIngrese un voto segun el partido politico elegido, escriba 0 para finalizar la votacion");


for(int i= 0; i<= 5; i++){
	printf("\n opcion: %d, vota al partido politico: PART%d",i,i);
}

do{
	printf("\n \nEpoca de elecciones!! Ingrese su voto (1-5) por favor ");
	scanf("%d", &vote); fflush(stdin);
	
	switch(vote){
		case 1: ++part1; break;
		case 2: ++part2; break;
		case 3: ++part3; break;
		case 4: ++part4; break;
		case 5: ++part5; break;
		default: printf("\nVoto nulo");
		
	}
} while( vote != 0);

printf("\n PART1 tuvo : %d votos", part1);
printf("\n PART2 tuvo : %d votos", part2);
printf("\n PART3 tuvo : %d votos", part3);
printf("\n PART4 tuvo : %d votos", part4);
printf("\n PART5 tuvo : %d votos", part5);


  getchar();
  return 0;

}
