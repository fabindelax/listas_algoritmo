/*Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de
matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora
e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados
de entrada e os dados de saída.*/


#include<stdio.h>

    int main()
{       char nome;
        char sexo;
        char matricula;
        float horastrabalhadas, valorporhora, resultado;
            printf("Por gentileza escreva seu nome: \n");
            scanf("%c",&nome);
            fflush(stdin);

            printf("Por gentileza escreva sua matricula: \n");
            scanf("%c",&matricula);
            fflush(stdin);

            printf("Por gentileza escreva seu sexo, utilize (M) para masculino e (F) para feminino: \n");
            scanf("%c",&sexo);
            fflush(stdin);

            printf(" Digite respectivamente valor por hora e horas trabalhadas:  \n");
            scanf("%f%f",&horastrabalhadas, &valorporhora);

            resultado=horastrabalhadas*valorporhora;

            printf("Seu salario e de: %1.f", resultado);
    
    
}