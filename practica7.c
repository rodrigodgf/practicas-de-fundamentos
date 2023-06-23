#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int filas, columnas;

    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

  
    int **matriz = (int **)malloc(filas * sizeof(int *));

    for (int i = 0; i < filas; i++) {
        matriz[i] = (int *)malloc(columnas * sizeof(int));
    }

    srand(time(0)); 

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100; 
        }
    }

    
    printf("\nMatriz generada:\n");
    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {
          
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

   
    for (int i = 0; i < filas; i++) {
       
        free(matriz[i]);
    }
    
    free(matriz);

    return 0;
}

