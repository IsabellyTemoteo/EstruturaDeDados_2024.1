/**
 * Isabelly Araújo Temoteo

Escreva uma função que receba um vetor de inteiros de tamanho n e retorne o maior
elemento presente no vetor. Implemente a função main para testar a função criada.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maior_elemento(int v[], int n){
    int maior = v[0];

    for(int i = 0; i < n; i++){
        if(maior < v[i])
            maior = v[i];
    }

    return maior;
}


int main()
{
    int n;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os n elementos do vetor: \n");

    for(int i = 0; i < n; i++){
        printf("%d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("O maior elemento do vetor eh: %d\n", maior_elemento(vetor, n));

    return 0;
}

