/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorial(int n){

    if(n == 0)
        return 1;

    int fat = 1;
    for(int i = n; i > 1; i--){
        fat *= i;
    }

    return fat;

}

void preencheVetor(int a[], int *b){

    for(int i = 0; i < 10; i++){
        b[i] = fatorial(a[i]);
    }
    
}

int main(){

    srand(time(NULL));

    int a[10], b[10];

    for(int i = 0; i < 10; i++)
        a[i] = rand() % 10;
    
    printf("Vetor a:\n");
    for(int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    preencheVetor(a, &b);

    printf("\nVetor b:\n");
    for(int i = 0; i < 10; i++)
        printf("%d ", b[i]);

    return 0;
}

