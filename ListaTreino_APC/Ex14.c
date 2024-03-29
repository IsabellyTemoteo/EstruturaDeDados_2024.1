/**
 * Isabelly Araújo Temoteo

Escreva uma função que receba um vetor de inteiros de tamanho n e um valor v. A função
deve retornar a quantidade de valores iguais a v existente no vetor. Crie um programa
para testar a função criada gerando números aleatórios para o vetor no intervalo [10, 100].

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void preencher_vetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        vetor[i] = 10 + rand() % 101;
    }
}

int elementos_repetidos(int vetor[], int tamanho, int v){
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == v)
            soma++;
    }
    return soma;
}


int main()
{
    srand(time(NULL));

    int n;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v;
    printf("digite o valor de v: ");
    scanf("%d", &v);

    int vetor[n];
    preencher_vetor(vetor, n);

    printf("Vetor:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    
    printf("\nElementos iguais a %d: %d", v, elementos_repetidos(vetor, n, v));

    return 0;
}

