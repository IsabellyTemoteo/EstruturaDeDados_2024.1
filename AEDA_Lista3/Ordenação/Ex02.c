/*
Implemente o algoritmo de ordena¸c˜ao Selection Sort. Que realiza a troca
de lugares de dois elementos espec´ıficos, sendo estes o primeiro elemento
que ainda n˜ao foi ordenado com o menor/maior elemento do vetor que
ainda n˜ao est´a na posi¸c˜ao correta.
*/

#include <stdio.h> 
#include <stdlib.h>

void selection(int vetor[], int size){
    for(int i = 0; i < size-1; i++){
        int menor_elemento = vetor[i];
        int index = i;
        for(int j = i + 1; j < size; j++){
            if(menor_elemento > vetor[j]){
                menor_elemento = vetor[j];
                index = j;
            }
        }
        int save = vetor[i];
        vetor[i] = vetor[index];
        vetor[index] = save;
    }
}

int main(){
    
    int vetor[] = { 5, 6, 3, 2, 1 };
    int size = sizeof(vetor) / sizeof(vetor[0]);


    selection(vetor, size);

    for(int i = 0; i < size; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");

}