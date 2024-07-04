/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fila.h"


int main()
{
    fila f;

    fila_iniciar(&f);
    
    printf("%d",fila_enfileira(&f, 3));
    fila_enfileira(&f, 3);
    fila_enfileira(&f, 5);

    fila_printar(&f);


    return 0;
}

