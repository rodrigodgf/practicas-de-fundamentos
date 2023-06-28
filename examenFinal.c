//examen opcion 3
/*llenar un arreglo de 100 numeros aleatorios del 1 al 1000, mostrarlo,
 recorrerlo y contar cuantos elementos son pares y cuantos impares*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void numerosPares(int arr[], int longitud) {
    printf("Números pares:\n\n");

    for (int i = 1; i < longitud; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d\n", arr[i]);
        }
    }
}

void numerosImpares(int arr[], int longitud) {
    printf("Números impares:\n\n");

    for (int i = 0; i < longitud; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d\n", arr[i]);
        }
    }
}


int main() {

    int arr[100];
    int pares(int num);

    int longitud = sizeof(arr) / sizeof(arr[0]);

    srand(time(0)); 

    for (int i = 1; i < 100; i++) {

        arr[i] = rand() % 1000 +1; 
        printf("%i\n", arr[i]);
    
           
        
    }


    numerosPares(arr, longitud);
    printf("\n");
    numerosImpares(arr, longitud);
    printf("\n");







    return 0;
}
