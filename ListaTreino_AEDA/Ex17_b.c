/**
 * Isabelly Araújo Temoteo

Desenvolver um programa para cada padrão abaixo. Cada programa deve criar o padrão
utilizando uma única instrução para imprimir os asteriscos como, por exemplo,
printf("*");. Logo, estruturas de repetição precisarão ser utilizadas. Instruções como
printf("\n"); podem ser utilizadas para efetuar mudanças de linha.

    *     *     4 - 4
   **    ***    3 - 3
  ***   *****   2 - 2
 ****  *******  1 -1
***** ********* 0-0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    for (int i = 1; i <= 5; i++) {
        int j, k, l;

        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        for (k = 1; k <= (2 * i) - 1; k++) {
            printf("*");
        }

        for (l = 1; l <= 5 - i; l++) {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}




 