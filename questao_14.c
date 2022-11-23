#include <stdio.h>
#include <math.h>
int main (void)
{

int dia;
printf ("Escreva um numero de 1 a 7\n");
scanf ("%i",&dia);
getchar();

switch (dia)
{
case 1: printf ("Domingo"); break;
case 2: printf ("Segunda"); break;
case 3: printf ("TerSa"); break;
case 4: printf ("Qaurta"); break;
case 5: printf ("Quinta"); break;
case 6: printf ("Sexta"); break;
case 7: printf ("Sabado"); break;
default : printf ("Operador Invalido");
}
}