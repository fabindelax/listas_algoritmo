#include<stdio.h>
int main()
{ int valor1, valor2, valor3;
    float media;
    printf("Digite o primeiro numero: ");
    scanf("%d",&valor1);
    printf("Digite o segundo numero: ");
    scanf("%d",&valor2);
    printf("Digite o terceiro numero: ");
    scanf("%d",&valor3);
    media=(float)(valor1+valor2+valor3)/3;
    printf ("\nA media eh %.2f\n", media);
}