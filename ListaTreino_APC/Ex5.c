/**
 * Isabelly Araújo Temoteo

Desenvolver um programa para efetuar o cálculo do valor de S utilizando os n primeiros
termos (n é informado pelo usuário), sendo S = 1 + 1
2 +
1
3 +
1
4 + . . . O resultado da soma
deverá ser apresentado.

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
    for(int i = 1; i <= n; i++){
        soma += 1/(float)i;
    }

    printf("A soma eh: %f\n", soma);

    return 0;
}

