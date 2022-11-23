#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
int a,b,c,d,calculo_a_b,calculo_c_d,calculo_par;
printf ("[ESCREVA UM VALOR PARA A, PARA B, PARA C E PARA D]\n");
scanf ("%i%i%i%i",&a,&b,&c,&d);
calculo_c_d = c + d;
calculo_a_b = a + b;
if (b>c && d>a && c + d > a + b)
{
calculo_par = a%2;
printf ("VALORES ACEITOS");
}
else
{
printf("[VALORES NEGADOS]");
}
}