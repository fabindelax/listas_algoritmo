#include<stdio.h>
int main(){
    float n1, n2, media;

    printf("Digte as notas 1 e 2: ");
    scanf("%f%f", &n1, &n2); //scanf múltiplo

    media = (n1 + n2)/2;

    printf("Media: %.1f\n");

    if (media >= 7)
     printf("APROVADO!\n");
     else printf("REPROVADO!\n");

}

