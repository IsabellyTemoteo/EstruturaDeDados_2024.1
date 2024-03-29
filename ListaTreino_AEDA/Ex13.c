/**
 * Isabelly Araújo Temoteo

Escreva uma função que receba um vetor de inteiros de tamanho n e preenche esse vetor
com valores aleatórios no intervalo [−15, 20]. Crie um programa para testar a função criada,
preenchendo o vetor e imprimindo seu conteúdo.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void preencher_vetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        vetor[i] = - 15 + rand() % 36;
    }
}


int main()
{
    srand(time(NULL));

    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int vetor[n];
    preencher_vetor(vetor, n);

    printf("Vetor:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

