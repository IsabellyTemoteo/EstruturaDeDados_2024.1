/**
 * Isabelly Araújo Temoteo

Escreva uma função que receba um vetor de tamanho n e retorne por referência o maior
elemento do vetor e o número de vezes que esse elemento ocorreu no vetor. Implemente a
função main para testar a função criada.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void preencher_vetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        vetor[i] = 0 + rand() % 101;
    }
}


void maior_vezes(int vetor[], int tam, int *maior, int *repeticoes){
    *maior = vetor[0];
    *repeticoes = 0;

    for(int i = 0; i < tam; i++){
        if(*maior < vetor[i])
            *maior = vetor[i];
    }

    for(int i = 0; i < tam; i++){
        if( *maior == vetor[i] )
            (*repeticoes)++;
    }

}


int main()
{
    srand(time(NULL));

    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int v[tam];
    preencher_vetor(v, tam);

    int maior, rep;
    maior_vezes(v, tam, &maior, &rep);

    printf("Vetor:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", v[i]);
    }

    printf("\nO maior elemento eh: %d\nEle aparece %d vezes.\n", maior, rep);

    return 0;
}

