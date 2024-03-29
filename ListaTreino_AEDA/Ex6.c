/**
 * Isabelly Araújo Temoteo

Desenvolver um programa para efetuar o cálculo do valor de S, sendo S = 1−
1
2 +
1
3 −
1
4 +. . .
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
    for(int i = 1; i <= n; i++){
        if(i%2 == 0)
            soma -= 1/(float)i;
        else   
            soma += 1/(float)i;
    }

    printf("A soma eh: %f\n", soma);

    return 0;
}


