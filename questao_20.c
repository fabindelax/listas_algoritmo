#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (void) {

float a,b,c,d,delta,x1,x2,calculo;

printf ("[ax^2 + bx + c = 0]\n");

printf ("\n[DE UM VALOR PARA A]"); 
scanf ("%f",&a);

printf ("\n[DE UM VALOR PARA B]\n"); 
scanf ("%f",&b);

printf ("\n[DE UM VALOR PARA C]"); 
scanf ("%f",&c);

printf ("f (x) = %fx^2 + %fx + %f",a,b,c);

delta = (b*b) - 4 * a * c;

if (delta < 0){

printf ("[DELTA NAO POSSUI RAIZ REAL]");
}
else  {

 x1 = (-b - sqrt(delta)) / (2 * a); 
 x2 = (-b + sqrt(delta)) / (2 * a);
 
 printf ("[O VALOR DE DELTA � %f]\n",delta);
 printf ("[O VALOR DE X' E %f ]\n",x1);
 printf ("[O VALOR DE X'' E %f ]\n",x2);
 
}
}
