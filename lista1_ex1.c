//construa um algoritmo que leia um numero inteiro de horas e mostre
// ao usuario o correspondente em minutos e segundos 

#include <stdio.h> //biblioteca para os comandos printf e scanf
int main(){ //inicio do algoritmo 
  int horas; 
  printf("digite a quantidade de horas: ");
  scanf("%d", &horas);
  printf("Minutos: %d\n", horas * 60); //calculo do printf
  printf("Segundos: %d" , horas * 3600);
}


