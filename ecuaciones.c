
#include <stdio.h>

int main () {

    int a, b , c , d , e , f; 
    float x = 0 , y = 0;




    printf ("ingresa 6 numeros: ");
    scanf("%d %d %d %d %d %d" , &a , &b , &c , &d , &e , &f);

    x = (((c*e)-(b*f))/((a*e)-(b*d)));

    y = (((a*f)-(c*d))/((a*e)-(b*d)));



    printf ("x es: %f, y es: %f" , x, y); 





    return 0;

}