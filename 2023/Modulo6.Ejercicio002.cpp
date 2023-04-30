/* 
2) Leer 10 elementos enteros que se asocian a un vector de 10 posiciones, luego imprimir
el contenido del vector.
*/

#include <stdio.h>

int main() {
  int vector[10], i;

  for (i = 0; i < 10; i++) {
  	printf("Ingrese %d/10 elementos enteros:\n", i+1);
    scanf("%d", &vector[i]);fflush(stdin);
  }

  printf("Contenido del vector:\n");
  for (i = 0; i < 10; i++) {
    printf("%d ", vector[i]);
  }
  printf("\n");

  getchar();
  return 0;
}

/// WORKING VERSION ///
/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  int vector[10], i, success;
  char buffer[1024];

  printf("Ingrese 10 elementos enteros:\n");
  for (i = 0; i < 10; i++) {
    success = 0;
    while (!success) {
      printf("\nIngrese el elemento %d: ", i+1);
      fgets(buffer, 1024, stdin);
      char *endptr;
      long num = strtol(buffer, &endptr, 10);
      if (isspace(*endptr) || *endptr == '\n' || *endptr == '\0') {
        vector[i] = (int)num;
        success = 1;
      } else {
        printf("\nEntrada no valida. Por favor ingrese un numero entero.\n");
      }
    }
  }

  printf("\n");
  printf("Contenido del vector:\n");
  for (i = 0; i < 10; i++) {
    printf("%d ", vector[i]);
  }
  printf("\n");
  getchar();
  return 0;
} */
