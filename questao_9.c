#include <string.h>
#include <stdio.h>
int main (void){

int idade;
printf ("[DIGITE A IDADE DO NADADOR]\n");
scanf ("%i", &idade);
if (idade >=1 && idade <=4)
{
printf ("[BABY SHARK]");
}
else if (idade >=5 && idade <=7)
{
printf ("[INFANTIL A]");
}
else if (idade >=8 && idade <=10)
{
printf ("[INFANTIL B]");
}
else if (idade >=14 && idade <=17)
{
 printf ("[JUVENIL]");
}
else if (idade >=18)
{
 printf ("[SENIOR]");
}
}