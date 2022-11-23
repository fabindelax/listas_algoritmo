#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
float num,resultado,quadrado;
printf ("DIGITE UM NUMERO\n");
scanf ("%f",&num);
if (num > 0);
{
resultado = sqrt(num);
quadrado = num * num;
printf ("A RAIZ E %f, E ELE ELEVADO AO QUADRADO E %f",resultado,quadrado);
}
if (num <=0)
{
printf ("%f E UM NUMERO NEGATIVO, PORTANTO NAO POSSUI RAIZ",num);
}
}