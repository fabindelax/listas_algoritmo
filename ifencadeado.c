/*escreva um programa que, dada a idade de um nadador,classifique-o em uma das categorias 
infantil A - 5 a 7
infantil B - 8 a 10
juvenil A - 11 a 13
Juvenil B - 14 a 17
Senior - ACIMA DE 18
*/

#include <stdio.h>
 
int main (){
    int idade;

    printf("Digite a idade do nadador:");
    scanf("%d", &idade);
    
    
if (idade >=5 && idade <=7) {
   printf("infantil A");
   }   
   else if (idade >=8 && idade <=10){
     printf("infantil B");
   }
     else if (idade >=11 && idade <=13){
       printf("juvenil A");
   }
        else if (idade >=14 && idade <=17){        
   }
        
 else if (idade <0){
    printf("Idade invalida");
 }
 
 else if (idade <5){
 	printf("Muito jovem");
 }
 
 else {
 	printf("Maior de 18 anos");
}
 	scanf("%i", idade);
 }         
