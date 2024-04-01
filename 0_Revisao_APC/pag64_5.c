/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int vetor[3], save;

    printf("Digite 3 numeros inteiros: ");
    scanf("%d%d%d", &vetor[0], &vetor[1], &vetor[2]);

    if(vetor[0] > vetor[1]){
        save = vetor[1];
        vetor[1] = vetor[0];
        vetor[0] = save;
    }

    if(vetor[1] > vetor[2]){
        save = vetor[2];
        vetor[2] = vetor[1];
        vetor[1] = save;

    }

    if(vetor[0] > vetor[2]){
        save = vetor[2];
        vetor[2] = vetor[0];
        vetor[0] = save;
    }

    if(vetor[0] > vetor[1]){
        save = vetor[1];
        vetor[1] = vetor[0];
        vetor[0] = save;
    }

    
    printf("Em ordem crescente: %d %d %d\n\n", vetor[0], vetor[1], vetor[2]);

    return 0;
}

