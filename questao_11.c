#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (void){

float x,y;

printf ("De um valor para o eixo x");
scanf ("%f",&x);
printf ("De um valor para o eixo y");
scanf ("%f",&y);

if ( x ==0 && y==0)
printf ("Eixo de partida");

else if ( x < 0 && y < 0)
printf ("Quadrante 3");

else if ( x < 0 && y > 0 )
printf ("Quadrante 2");

else if ( x > 0 && y > 0)
printf ("Quadrante 1");

else if ( x > 0 && y < 0)
printf ("Quadrante 4");

}