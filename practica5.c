#include <stdio.h>
#include <stdlib.h>


int main() {

int a1 = 2, b1=3 , c1=4 , d1=5 , e1=6;
int a2=1, b2=2 , c2=3 , d2=4 , e2=5;
int *i1 , *f1;
int *i2 , *f2;
int * gral;


printf("las direcciones de la variable a1: %d\n", &a1);
printf("las direcciones de la variable b1: %d\n", &b1 );
printf("las direcciones de la variable c1: %d\n", &c1 );
printf("las direcciones de la variable d1: %d\n", &d1 );
printf("las direcciones de la variable e1: %d\n", &e1 );

printf("las direcciones de la variable a2: %d\n", &a2 );
printf("las direcciones de la variable b2: %d\n", &b2 );
printf("las direcciones de la variable c2: %d\n", &c2 );
printf("las direcciones de la variable d2: %d\n", &d2 );
printf("las direcciones de la variable e2: %d\n", &e2 );

printf("las direcciones de la variable i1: %d\n", &i1 );
printf("las direcciones de la variable f1: %d\n", &f1 );

printf("las direcciones de la variable i2: %d\n", &i2 );
printf("las direcciones de la variable f2: %d\n", &f2 );

printf("las direcciones de la variable gral: %d\n", &gral);



i1 = &a1;
f1 = &e1;
i2 = &a2;
f2 = &e2;

printf("\n i1 apunta a:%d", *i1);
printf("\n f1 apunta a:%X",*f1);

printf("\n i2 apunta a:%x",*i2);
printf("\n f2 apunta a:%x",*f2);


gral = &i1;
printf("\n gral apunta a: %d\n\n", *i1);

/*arreglo 1*/  int arreglo[] = {a1,b1,c1,d1,e1};
int i;
for ( i = 4; i > -1; i--)
{
  printf("arreglo 1 \t%d\n", arreglo[i]);  
}

/*arreglo 2*/  int arreglo2[] = {a2,b2,c2,d2,e2};
printf("\n");


  int ii;
for ( ii = 0; ii<5; ii++)
{
  
  printf("arreglo 2 \t%d\n", arreglo2[ii]);  
}





    return 0;
}
