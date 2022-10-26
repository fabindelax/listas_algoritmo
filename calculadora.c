#include<stdio.h>
#include <math.h>

int main(){
   char operador;
   float n1, n2, resultado;

   printf("Digite o operador: ");
   scanf("%c", &operador); 
    
   printf("Digite o n1 e n2 ");
   scanf("%f%f", &n1, &n2); 

   switch (operador){
     case '+': resultado = n1 + n2; 
     printf("Soma: %.1f", resultado); 
     break;
 case '-': 
      resultado = n1 - n2; 
      printf("Multiplicador: %.1f", resultado); 
      break;
   case '*': 
      resultado = n1 * n2; 
      printf("Divisao: %.1f", resultado);  
      break;
   case '/':  
      resultado = n1 / n2; 
      printf("Divisao: %.1f", resultado); 
      break;
   case 'p':
      resultado = pow(n1,n2);
      printf("Potencia: %.1f", resultado); 
      break;
   case'r':
      resultado = sqrt(n1);
      printf("Raiz quadrada: %.1f", resultado);
      break;
   default: printf("Operador invalido!");

}
 



}
