/**
 * Isabelly Araújo Temoteo

Crie um programa para imprimir 100 números pseudo-aleatórios no intervalo [−15, 15].
Utilize as funções rand() e srand() da biblioteca stdlib.h, além da função time() da
biblioteca time.h.


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
    srand(time(NULL));

    for(int i = 0; i < 100; i++){
        printf("%d: %d\n", i+1, -15 + rand() % 31);
    }


    return 0;
}

