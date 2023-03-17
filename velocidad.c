#include <stdio.h>
//ya funciona, creo
float d1;
float TSE=0 , VMS=0 , VKH=0;
//float ;
//float ; 
int min ;
int seg ;
int cent;


int main () {

    printf("ingresa tu distancia en metros: ");
    scanf ("%f" , &d1);
    printf ("escribe tu tiempo en min, seg, cent: ");
    // por qué no funciona si pongo las tres en el mismo scanf?

    scanf ("%d" , &min);
    scanf("%d" , &seg);
    scanf("%d" , &cent);

    TSE = (min*60)+seg+(cent/100);
    VMS = d1/TSE;
    VKH = (VMS*3600)/1000;


    printf ("tu velocidad es de : %6.3f" , VKH );



    return 0 ;

}
