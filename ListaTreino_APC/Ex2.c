/**
 * Isabelly Araújo Temoteo

Implemente uma função para calcular a soma dos primeiros 50 números naturais ímpares.
Considere o número 1 como primeiro número natural. Faça um programa para usar a
função e apresentar a soma para o usuário.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int soma = 0;

    for(int i = 1; i <= 50; i++){
        if(i%2 != 0)
            soma += i;
    }

    printf("A soma eh: %d\n", soma);


    return 0;
}

