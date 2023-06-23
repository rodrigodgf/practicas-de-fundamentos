//queremos mostrar las filas como columnas y las columnas como filas
#include <stdio.h>

int main() {
    int arreglo[3][5] = {
        {4,7,1,3,5},
        {2,0,6,9,7},
        {3,1,2,6,4}
    };

    printf("Arreglo original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%i\t", arreglo[i][j]);
        }
        printf("\n");
    }
                                                //acá solo cambio el i j, no?
    printf("\nArreglo modificado:\n");
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 3; i++) {
            printf("%i\t", arreglo[i][j]);      
        }
        printf("\n");
    }

    return 0;
}
