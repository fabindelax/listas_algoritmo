#include<stdio.h>
#include<math.h>
#define PI 3.14159 //constante 
int main(){
//calcular a area do circulo -> area = 3.14159 * raio2
   float area, raio;
   printf("digite o valor do raio: ");
   scanf("%f", &raio);
   area = PI * pow(raio, raio,2); //POW FUNCAO MATEMATICA DA BIBLIOTECA MATH.H
   printf("Area: %f", area);
}