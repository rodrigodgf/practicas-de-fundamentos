#include <stdio.h>
//este ya sirve bien
float  c1 ,  c2 , c3 , c4 ;
float promedio = 0;

int main() {

   /* printf("ingresa tus 4 calificaciones: ");
    scanf("%d , %d , %d , %d" ,  &c1 , &c2 , &c3 , &c4 ); */

    printf ("ingresa tu primer calificación: ");
    scanf ("%f" , &c1);

      printf ("ingresa tu segunda calificación: ");
    scanf ("%f" , &c2);

      printf ("ingresa tu tercera calificación: ");
    scanf ("%f" , &c3);

      printf ("ingresa tu cuarta calificación: ");
    scanf ("%f" , &c4);

    promedio = ((c1 + c2 + c3 + c4)/4);

    printf("tu promedio es: %4.1f " , promedio );




    return 0 ;


}
