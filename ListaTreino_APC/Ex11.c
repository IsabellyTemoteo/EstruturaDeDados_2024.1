/**
 * Isabelly Araújo Temoteo

Escreva uma função que receba um número real n (passagem de parâmetros por valor) e
retorne a parte inteira e a fracionária por meio de passagem de parâmetros por referência.
Crie um programa para testar a função criada.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fracao(float n, int *inteira, float *fracionaria){
    *inteira = n;
    *fracionaria = n - *inteira;
}

int main()
{
    float n = 2.335, j;
    int i;

    fracao(n, &i, &j);

    printf("O numero eh: %f\nA parte inteira eh: %d\nA parte fracionaria eh: %f\n", n, i, j);


    return 0;
}

