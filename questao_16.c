#include <stdio.h>
int main (void)
{

int num1,num2,resultado;
char a;
printf ("DIGITE UM NUMERO E EM SEGUIDA OUTRO\n");
scanf("%i%i",&num1,&num2);
printf ("DIGITE O COMANDO DE OPERAsaO DESEJADO\n");
getchar();
scanf ("%c",&a);

switch (a)

{

case '+' : resultado = num1+num2;
printf ("Resultado e %i",resultado); break;

case '-': resultado = num1-num2;
printf ("Resultado e %i",resultado); break;

case '/': resultado = num1/num2;
printf ("Resultado e %i",resultado); break;

case '*': resultado = num1*num2;
printf ("Resultado e %i",resultado); break;

default: printf ("Operado Invalido");

}

}