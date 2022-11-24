#include <stdio.h>

int main() {
    int i, num, soma = 0;
    for ( i = 0; i < 10; i++) {
        printf("Digite a %d nota: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }
    printf("\nSoma = %d ", soma);
}