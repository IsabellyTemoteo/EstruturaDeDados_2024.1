/**
 * Isabelly Araújo Temoteo

Desenvolver um programa para cada padrão abaixo. Cada programa deve criar
o padrão utilizando uma única instrução para imprimir os asteriscos como, por exemplo,
printf("*");. Logo, estruturas de repetição precisarão ser utilizadas. Instruções como
printf("\n"); podem ser utilizadas para efetuar mudanças de linha.

***** * *****
***** ** ****
***** *** ***
***** **** **
***** ***** *
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

