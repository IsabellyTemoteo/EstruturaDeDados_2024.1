/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>

int somaDivisiveis(int a, int b, int c){
    int soma = 0;

    for(int i = b; i <= c; i++)
        if(i % a == 0)
            soma += i;

    return soma;
}

int main(){

    int a, b, c;
    printf("Digite os valores de a, b e c, respectivamente: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("O resultado da soma eh: %d\n", somaDivisiveis(a, b, c));

    return 0;
}

