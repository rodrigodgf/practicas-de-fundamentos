//que lea dos enteros y calcule su producto cociente y residuo


#include <stdio.h>


int main () {

int num1;
int num2;
float producto = 0 ,  cociente = 0 , residuo = 0;

    printf ("ingresa dos numero enteros: " );
    scanf("%d %d" , &num1 , &num2 );


    producto = num1 * num2; 
    cociente = num1 / num2;
    residuo = num1 % num2;

    printf ("el producto de %u y %u es: %f, el cociente es: %.2f y el residuo es: %.2f" , num1 , num2 , producto , cociente , residuo); 









    return 0;
}