#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (void){
int n1, n2,resultado;
printf ("[DIGITE UM NUMERO\n]");
scanf ("%i",&n1);
resultado = n1%2;
if (resultado !=0)
{
printf ("[%i E UM NUMERO IMPAR]",n1);
}
else
{
printf ("[%i E UM NUMERO PAR]",n1);
}
}