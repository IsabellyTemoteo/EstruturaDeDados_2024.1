/**
 * Isabelly Araújo Temoteo

Implemente uma função recursiva para somar o conteúdo de um vetor de números reais.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somar_vetor(int *v, int tamanho){
    if(tamanho == -1)
        return 0;
    return v[tamanho] + somar_vetor(v, tamanho-1);
}


int main()
{
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    printf("A soma do vetor eh: %d", somar_vetor(vetor, tamanho-1));

    return 0;
}

