/**
 * Isabelly Araújo Temoteo

Implemente uma função para calcular o produto dos primeiros N números naturais ímpares.
Leia um número natural N e calcule o produto dos números naturais ímpares, menores ou
iguais a N. Considere o número 1 como primeiro número natural. Faça um programa para
usar a função e apresentar o resultado para o usuário.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n, soma = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i%2 != 0)
            soma += i;
    }

    printf("A soma eh: %d\n", soma);


    return 0;
}

