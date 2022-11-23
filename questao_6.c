#include <stdio.h>

int main (void)
{
float altura,resultado_masculino,resultado_feminino;
char genero;
printf ("DIGITE O GENERO E A ALTURA\n");
scanf ("%s%f",&genero,&altura);

if (genero =='m'||genero =='M')
{
resultado_masculino =(72.7 * altura) - 58;
printf ("O RESULTADO E %1f,",resultado_masculino);

}
else if (genero =='f'||genero =='F')
{
resultado_feminino = (62.1 * altura) -44.7;
printf ("O RESULTADO E %1f,",resultado_feminino);

}
}