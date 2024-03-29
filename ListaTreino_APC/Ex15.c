/**
 * Isabelly Araújo Temoteo

Escreva uma função que receba um vetor de tamanho n e retorne por referência o maior
e o menor elementos do vetor do vetor. Implemente a função main para testar a função
criada.
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

void menor_e_maior(int *menor, int *maior, int v[], int tam){

    *menor = v[0];
    *maior = v[0];

    for(int i = 0; i < tam; i++){
        if(*menor > v[i]){
            *menor = v[i];
        }
        if(*maior < v[i]){
            *maior = v[i];
        }
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

    int menor, maior;
    menor_e_maior(&menor, &maior, v, tam);

    printf("Vetor:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", v[i]);
    }

    printf("\nO menor elemento eh: %d\nO maior elemento eh: %d\n", menor, maior);

    return 0;
}

