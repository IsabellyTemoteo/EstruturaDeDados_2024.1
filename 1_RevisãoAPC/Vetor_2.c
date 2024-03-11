/**
 * Isabelly Araújo Temoteo
 * 20233013000
 * 2024.1
 
    Faca um programa que leia um vetor A de dez posicoes. Em seguida,
    compacte o vetor, retirando os valores nulos e negativos. Armazene esse 
    resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B pode nao
    ser completamente preenchido.)


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int a[10], b[10];

    for(int i = 0; i < 10; i++)
        a[i] = rand() % 201 - 100;
    
    printf("Vetor a:\n");
    for(int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    
    printf("\n");
    
    int j = 0;
    for(int i = 0; i < 10; i++){
        if(a[i] <= 0)
            continue;
        else{
            b[j] = a[i];
            j++;
        }
    }

    printf("Vetor b:\n");
    for(int i = 0; i < j; i++)
        printf("%d ", b[i]);


    return 0;
}

