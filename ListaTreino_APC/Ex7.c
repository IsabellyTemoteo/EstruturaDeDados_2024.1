/**
 * Isabelly Araújo Temoteo

Desenvolver um programa para efetuar o cálculo do valor de S, sendo S = 1+ 2
3 +
3
5 +
4
7 +. . .
O número n de termos deverá ser solicitado ao usuário e o resultado da soma deverá ser
apresentado.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    float soma = 0.0;
    int j = 1;
    for(int i = 1; i <= n; i++){
        soma += i/(float)j;
        j+=2;
    }

    printf("A soma eh: %f\n", soma);



    return 0;
}

