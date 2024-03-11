/**
 * Isabelly Araújo Temoteo
 * 20233013000
 * 2024.1

    Faca uma sub-rotina que receba um vetor A de dez elementos inteiros
    como parametro. Ao final dessa funcao, devera ter sido gerado um vetor B
    contendo o fatorial de cada elemento de A. O vetor B devera ser mostrado
    no programa principal.
    Ex do fatorial 5 = 5 ∗ 4 ∗ 3 ∗ 2 ∗ 1; ex fatorial de 3: 3 ∗ 2 ∗ 1

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

