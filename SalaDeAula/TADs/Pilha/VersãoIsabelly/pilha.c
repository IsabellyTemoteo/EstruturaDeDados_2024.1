/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

void pilha_printar(pilha *p){
    for(int i = 0; i < p->pos; i++){
        printf("%d ", p->elementos[i]);
    }
    printf("\n");
}

int main()
{
    pilha p;
    
    pilha_iniciar(&p);

    pilha_empilha(&p, 3);
    pilha_empilha(&p, 5);
    pilha_empilha(&p, 7);
    pilha_empilha(&p, 7);
    pilha_empilha(&p, 9);
    pilha_empilha(&p, 1);

    pilha_printar(&p);

    pilha_desempilha(&p);

    pilha_printar(&p);

    return 0;
}

