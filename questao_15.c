#include <stdio.h>
#include <math.h>
int main (void)
{

int ddd;
printf ("[DIGITE SEU DDD+]\n");
scanf ("%i",&ddd);
getchar();

switch (ddd)
{
case 61: printf ("[BRASILIA]"); break;
case 71: printf ("[SALVADOR]"); break;
case 11: printf ("[SAO PAULO]"); break;
case 21: printf ("[RIO DE JANEIRO]"); break;
case 32: printf ("[JUIZ DE FORA]"); break;
case 19: printf ("[CAMPINAS]"); break;
case 27: printf ("[VITORIA]"); break;
case 31: printf ("[BELO HORIZONTE]"); break;
default : printf ("Operador Invalido");
}
}