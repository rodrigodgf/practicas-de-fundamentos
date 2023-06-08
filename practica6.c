
//se supone que se deben invertir el orden de los arreglos. cómo no sé


#include <stdio.h>


void invertirArreglo(int *arreglo, int *auxiliar, int tamaño) {
    int i;

    for (i = 0; i < tamaño; i++) {
        auxiliar[i] = arreglo[tamaño - i - 1];


 }


    for (i = 0; i < tamaño; i++) {
        arreglo[i] = auxiliar[i];
    }
}

void imprimirArreglo(int *arreglo, int tamaño) {
    int i;

    printf("Arreglo: ");
    for (i = 0; i < tamaño; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int arreglo1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arreglo2[10];
    int arreglo3[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    printf("Arreglos originales:\n");
    imprimirArreglo(arreglo1, 10);
    imprimirArreglo(arreglo2, 10);
    imprimirArreglo(arreglo3, 10);

    invertirArreglo(arreglo1, arreglo2, 10);
    invertirArreglo(arreglo2, arreglo2, 10);
    invertirArreglo(arreglo3, arreglo2, 10);

    printf("\nArreglos invertidos:\n");
    imprimirArreglo(arreglo1, 10);
    imprimirArreglo(arreglo2, 10);
    imprimirArreglo(arreglo3, 10);

    return 0;
} 
