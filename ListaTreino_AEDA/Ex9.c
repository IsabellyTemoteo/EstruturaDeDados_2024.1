/**
 * Isabelly Araújo Temoteo

Desenvolver uma função que calcule a soma de dois números passados por parâmetro e
utilize um terceiro parâmetro para retornar o resultado da soma. Segue uma sugestão de
protótipo da função: void soma(int a, int b, int *s);. Implemente a função main
para testar a função criada.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void soma(int a, int b, int *s){
    *s = a + b;
}

int main()
{
    int a = 5, b = 2, s;
    soma(a,b,&s);

    printf("A soma eh: %d\n", s);

    return 0;
}

