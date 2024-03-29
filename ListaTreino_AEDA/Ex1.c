/**
 * Isabelly Araújo Temoteo

Crie uma função para calcular a soma dos primeiros 100 números naturais. Considere
o número 1 como primeiro número natural. Faça um programa para usar a função e
apresentar a soma para o usuário.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int soma = 0;

    for(int i = 1; i <=100; i++)
        soma += i;

    printf("A soma eh: %d\n", soma);

    return 0;
}

