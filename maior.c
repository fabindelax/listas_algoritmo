#include<stdio.h>
int main(){
    int n1, n2;

     printf("Digite o n1 e o n2");
     scanf("%d%d", &n1, &n2);

   if(n1 > n2)
   printf("o numero 1 (%d) eh maior que o numero 2 (%d)\n", n1, n2);
   else 
   printf("o numero 2 (%d) eh maior que o numero 1 (%d)\n,", n2, n1);

}

