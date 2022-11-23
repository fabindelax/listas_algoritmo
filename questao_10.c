#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (void) {
int n1,n2,n3, geometrica,aritimetica;
float conta,ponderada,harmonica;
char a;
printf ("[DIGITE 3 NUMEROS INTEIROS PARA SUA OPERAcAO]\n");
scanf ("%i%i%i",&n1,&n2,&n3);
getchar();
printf ("[DIGITE 1 PARA OPERAcAO GEOMETRICA, 2 PARA PONDERADA, 3 PARA HARMONICA E 4 PARA ARITIMETICA]");
scanf ("%c",&a);

if (a == '1'){

geometrica = n1 * n2 * n3;
printf ("[O RESULTADO DA EQUAcAO GEOMETRICA E %i]",geometrica);
}
else if (a == '2'){

ponderada = ( n1 + (2*n2) + (3*n3) ) /6;
printf ("[O RESULTADO DA EQUAcAO PONDERADA E %f.1]",ponderada);
}

else if ( a == '3') {

conta = (1/n1) + (1/n2) + (1/n3);
harmonica = 1/conta;
printf ("[O RESULTADO DA EQUAcAO HARMONICA E %i]",harmonica);
}

else if ( a == '4'){

aritimetica = (n1 + n2 + n3)/3;
printf ("[O RESULTADO DA EQUAcAO ARITIMETICA E %i]",aritimetica);

}

}