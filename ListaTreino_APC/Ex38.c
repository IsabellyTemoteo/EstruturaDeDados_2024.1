/**
 * Isabelly Araújo Temoteo

Implemente uma função recursiva para calcular e retornar a soma dos números naturais
menores ou iguais a N.

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

    printf("A soma dos numeros de 0 ate %d eh: %d\n", n, soma(n));

    return 0;
}

