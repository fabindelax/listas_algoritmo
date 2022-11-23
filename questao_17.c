#include <stdio.h>
#include <math.h>
int main (void)
{
int n1,calculo1,calculo2;
printf ("[DIGITE O NUMERO DESEJADO]\n");
scanf ("%d",&n1);

calculo1 = n1%3;
calculo2 = n1%5;
getchar();

switch (calculo1){


case 0 : printf ("[numero divisivel por 3]");
default : printf ("[NUMERO NAO DIVISIVEL POR 3]");

}

switch (calculo2){


case 0 : printf ("[numero divisivel por 5]");
default : printf ("[NUMERO NAO DIVISIVEL POR 5]");

}

}