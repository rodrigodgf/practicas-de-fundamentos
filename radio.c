#include <stdio.h>
//este ya funciona bien
float pi=3.14;
float r1;
float a1=0;
float l1=0;

int main (){

    printf("ingresa el radio del circulo: ");
    scanf ("%f" , &r1);

    a1 = pi*(r1*2);
    l1 = (2*pi)*(2*r1);

    printf ("la superficie del circulo es: %f y la longitud de la circunferencia es: %f" , a1 , l1  ); 





    return 0;
}
