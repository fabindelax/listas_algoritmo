/*15. Apresente um programa que calcule o valor de qualquer Hn. Em matemática, o número
harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou
seja:
*/

#include <stdio.h>

int main(){
    float numHarmonico;
    int i, n;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if (i == 1){
            numHarmonico = 1;
            continue;
        }
        numHarmonico += (float) 1 / (float) i;
    }
    printf("O numero harmonico para o n-esimo termo  eh %f\n", 
    numHarmonico);
    
    return 0;
}