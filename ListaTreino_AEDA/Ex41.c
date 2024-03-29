/**
 * Isabelly Araújo Temoteo

Implemente uma função recursiva para apresentar o conteúdo de um vetor de inteiros, do
último ao primeiro item.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int apresentar_vetor(int *v, int tamanho){
    printf("%d ", v[tamanho]);
    if(tamanho == 0){
        return 0;
    }
    return apresentar_vetor(v, tamanho-1);
}


int main()
{
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    apresentar_vetor(vetor, tamanho-1);

    return 0;
}
