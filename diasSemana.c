/*
Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 
e imprima o dia da semana correspondente a esse numero.
isto é, domingo, se 1, segunda feira, se 2, e assim por diante*/

#include <stdio.h>
  int main(){
   int dia;
    
    printf("Digite o dia: ");
    scanf("%d", &dia);

    switch (dia){

        case 1: printf("domingo"); break;
        case 2: printf("segunda"); break;
        case 3: printf("terca-feira"); break;
        case 4: printf("quarta-feira"); break;
        case 5: printf("quinta-feira"); break;
        case 6: printf("sexta-feira"); break;
        case 7: printf("sabado"); break;
        default: printf("Dia invalido!");
      
    }


  }


