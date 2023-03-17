#include <stdio.h>

float d1;
float TSE=0 , VMS=0 , VKH=0 ; 
int min ;
int seg ;
int cent ;


int main () {

    printf("ingresa tu distancia: ");
    scanf ("%f" , &d1);

    printf ("escribe tu tiempo en min, seg, cent: ");
    scanf ("%d , %d , %d" , min , seg , cent );

    TSE = (min*60)+seg+(cent/100);
    VMS = d1/TSE;
    VKH = (VMS*3600)/1000;


    printf ("tu velocidad es de : %f" , VKH );



    return 0 ;

}
