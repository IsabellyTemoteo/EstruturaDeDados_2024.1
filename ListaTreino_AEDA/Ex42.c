/**
 * Isabelly Araújo Temoteo

Implemente uma função recursiva para apresentar o conteúdo de um vetor de inteiros, do
primeiro ao último item.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int apresentar_vetor(int *v, int tamanho, int somador){
    printf("%d ", v[somador]);
    if(somador == tamanho){
        return 0;
    }
    return apresentar_vetor(v, tamanho, somador+1);
}


int main()
{
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    apresentar_vetor(vetor, tamanho-1, 0);

    return 0;
}

