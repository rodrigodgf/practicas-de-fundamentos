#include <stdio.h>
#include <math.h>

int main () {

    double h = 0;
    double a, b;

    printf("ingresa los dos lados de tu triangulo: ");
    scanf("%lf %lf" , &a , &b);

    h = pow(a,2) + pow(b,2);

    printf("la hipotenusa del triangulo es: %.3lf" , sqrt(h));




    return 0;
}