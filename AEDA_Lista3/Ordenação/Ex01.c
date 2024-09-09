/*
Implemente o algoritmo de ordena¸c˜ao Bubble Sort. Que realizada a
troca de lugares de dois elementos arbitr´arios sempre que encontra um
elemento maior/menor que o outro.
*/
#include <stdio.h> 
#include <stdlib.h>

void bubble(int vetor[], int size){
    int troca;
    for(int i = 0; i < size - 1; i++){
        troca = 1;

        for(int j = 0; j < size - i - 1; j++){
            if(vetor[j] > vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
                troca = 0;
            }
        }

        if(troca)
            break;
    }
}

int main(){
    
    int vetor[] = { 5, 6, 3, 2, 1 };
    int size = sizeof(vetor) / sizeof(vetor[0]);

    bubble(vetor, size);

    for(int i = 0; i < size; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");

}