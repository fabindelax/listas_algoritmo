#include <stdio.h>
#include <math.h>
int main(){

int n1, l, c, n=0;

printf("Digite quantas linhas quer ver:");
scanf("%d", &n1);

for(l=1 ; l<= n1; l++){
     for (c=1; c<= l; c++){
        n++;
        printf("%d ", n);
     }
     printf("\n");
}
}