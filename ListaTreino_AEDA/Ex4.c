/**
 * Isabelly Araújo Temoteo

Desenvolver um programa para efetuar o cálculo do valor de S, sendo S = 1−2+ 3−4+. . .
O número n de termos deverá ser solicitado ao usuário e o resultado da soma deverá ser
apresentado.

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
        if(i%2 == 0)
            soma -= i;
        else
            soma += i;
    }

    printf("A soma eh: %d\n", soma);

    return 0;
}

