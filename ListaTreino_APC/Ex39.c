/**
 * Isabelly Araújo Temoteo

Implemente uma função recursiva para calcular o resultado do cálculo de um número a
elevado a um número natural b, ou seja, a^b

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int exponencial(int a, int b){
    if(b == 0)
        return 1;
    return a * exponencial(a, b-1);
}


int main()
{
    int a,b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("%d elevado a %d eh: %d", a, b, exponencial(a, b));

    return 0;
}

