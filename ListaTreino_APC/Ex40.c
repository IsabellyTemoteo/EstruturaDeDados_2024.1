/**
 * Isabelly Araújo Temoteo

Implemente uma função recursiva para calcular e retornar o produto dos números inteiros
maiores que 0 e menores ou iguais a N.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int n){
    if(n == 0)
        return 0;
    return n + soma(n-1);
}


int main()
{
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("A soma eh: %d", soma(n));

    return 0;
}

