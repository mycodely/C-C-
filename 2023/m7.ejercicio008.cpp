/* 8. Ingresar los resultados de las últimas elecciones sabiendo que hay 4 candidatos y 5
distritos. Se ingresarán la cantidad de votos de cada candidato por distrito.

DISTRITO	CANDIDATO A		CANDIDATO B		CANDIDATO C		CANDIDATO D
1				XXXX			XXXX			XXXX			XXXX
2				XXXX			XXXX			XXXX			XXXX
3				XXXX			XXXX			XXXX			XXXX
4
5

• Mostrar la tabla anterior con cabeceras incluidas.
• Calcular e imprimir la cantidad total de votos recibidos por cada candidato con su
porcentaje respectivo.
• Si algún candidato recibe más del 50% de los votos o si el que resultó con más
votos tiene una diferencia de más de 20% respecto a quien obtuvo el segundo
lugar, imprimir un mensaje declarando a el candidato que ganó. De no haber
ganador directo, indicar cuales son los 2 candidatos que van a segunda vuelta.

*/

#include <stdio.h>

#define NUM_CANDIDATES 4
#define NUM_DISTRICTS 5

void displayTable(int votes[NUM_DISTRICTS][NUM_CANDIDATES]) {
    printf("DISTRITO\tCANDIDATO A\tCANDIDATO B\tCANDIDATO C\tCANDIDATO D\n");
    for (int i = 0; i < NUM_DISTRICTS; i++) {
        printf("%d\t\t", i + 1);
        for (int j = 0; j < NUM_CANDIDATES; j++) {
            printf("%d\t\t", votes[i][j]);
        }
        printf("\n");
    }
}

void calculateTotalVotes(int votes[NUM_DISTRICTS][NUM_CANDIDATES]) {
    int totalVotes[NUM_CANDIDATES] = {0};

    for (int i = 0; i < NUM_DISTRICTS; i++) {
        for (int j = 0; j < NUM_CANDIDATES; j++) {
            totalVotes[j] += votes[i][j];
        }
    }

    printf("\nCantidad total de votos por candidato:\n");
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        printf("Candidato %c: %d votos\n", 'A' + i, totalVotes[i]);
    }

    printf("\nPorcentaje de votos por candidato:\n");
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        double percentage = (double)totalVotes[i] / (double)(NUM_DISTRICTS * 100) * 100.0;
        printf("Candidato %c: %.2f%%\n", 'A' + i, percentage);
    }
}

void determineWinner(int votes[NUM_DISTRICTS][NUM_CANDIDATES]) {
    int totalVotes[NUM_CANDIDATES] = {0};

    for (int i = 0; i < NUM_DISTRICTS; i++) {
        for (int j = 0; j < NUM_CANDIDATES; j++) {
            totalVotes[j] += votes[i][j];
        }
    }

    int maxVotes = totalVotes[0];
    int winnerIndex = 0;
    int secondPlaceIndex = -1;
    int difference = 0;

    for (int i = 1; i < NUM_CANDIDATES; i++) {
        if (totalVotes[i] > maxVotes) {
            maxVotes = totalVotes[i];
            winnerIndex = i;
        } else if (totalVotes[i] == maxVotes) {
            secondPlaceIndex = i;
        }
    }

    printf("\n");

    if (maxVotes > (NUM_DISTRICTS * 50) || (maxVotes - totalVotes[secondPlaceIndex]) > (NUM_DISTRICTS * 20)) {
        printf("El candidato %c ha ganado las elecciones\n", 'A' + winnerIndex);
    } else if (secondPlaceIndex != -1) {
        printf("Los candidatos %c y %c pasarán a segunda vuelta\n", 'A' + winnerIndex, 'A' + secondPlaceIndex);
    } else {
        printf("No hay un ganador directo, se requiere una segunda vuelta\n");
    }
}

int main() {
    int votes[NUM_DISTRICTS][NUM_CANDIDATES] = {0};

    printf("Ingrese los resultados de las elecciones:\n");
    for (int i = 0; i < NUM_DISTRICTS; i++) {
        for (int j = 0; j < NUM_CANDIDATES; j++) {
            printf("Distrito %d, Candidato %c: ", i + 1, 'A' + j);
            scanf("%d", &votes[i][j]);
        }
    }

    displayTable(votes);
    calculateTotalVotes(votes);
    determineWinner(votes);

    return 0;
}
