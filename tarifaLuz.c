
#include <stdio.h>
#include <math.h>

int main () {

    int gasto;
    float tarifa = 0;
    printf("Introduce tu gasto en kW: ");
    scanf("%d" , &gasto);

    if (gasto < 1000 )
    {
        tarifa = gasto * 1.2;
        printf ("Lo que se debe pagar es: %f" , tarifa);
     
    }

    else if (gasto > 1850) {
         tarifa = gasto * 0.9;
        printf ("Lo que se debe pagar es: %f" , tarifa);
        
    }
    else {
        tarifa = gasto * 1.0;
        printf ("Lo que se debe pagar es: %f" , tarifa);
    }
    







    return 0;
}