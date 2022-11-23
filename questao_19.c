#include<stdio.h>

int main (){

float n1,n2,n3,n4,resultado,media;

printf ("[DIGITE SUA NOTA 1]\n");
scanf ("%f",&n1);

printf ("[DIGITE SUA NOTA 2]\n");
scanf ("%f",&n2);


printf ("[DIGITE SUA NOTA 3]\n");
scanf ("%f",&n3);

printf ("[DIGITE SUA NOTA 4]\n");
scanf ("%f",&n4);

resultado = (n1*2) + (n2*3) + (n3*4) +(n4);

if (media <= 4.9)
	printf ("[ALUNO REPROVADO]\n");

else if (media >= 5 && media <=6.9)
 printf ("[ALUNO EM EXAME]\n");
 
 else if (media > 7 )
 printf ("[ALUNO APROVADO]\n");
}