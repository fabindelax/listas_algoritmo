#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(){

float valor, tributo, resultado;
char a [2];
printf ("Digite o valor do produto\n");
scanf ("%f", &valor);
printf ("Digite a silga do seu estado\n");
scanf ("%s",&a);
getchar();

if (a == "sp" || a == "SP"){

tributo = valor * 12;
resultado = valor + tributo;

printf ("o valor do produto com imposto � %f",resultado);
}
else if ( a == "mg" || a == "MG"){

tributo = valor * 7;
resultado = valor + tributo;

printf ("o valor do produto com imposto � %f",resultado);
}

else if ( a == "ms" || a == "MS"){

tributo = valor * 8;
resultado = valor + tributo;

printf ("o valor do produto com imposto � %f",resultado);
}

else if ( a == "rj" || a == "RJ"){

tributo = valor * 15;
resultado = valor + tributo;

printf ("o valor do produto com imposto � %f",resultado);
}

}