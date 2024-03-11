/**
 * Isabelly Araújo Temoteo
 * 20233013000
 * 2024.1

    Faca um programa que preencha dois vetores de dez elementos numericos
    cada um e mostre o vetor resultante da intercalacao deles.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int v1[10], v2[10], vr[20];

    for(int i = 0; i < 10; i++){
        v1[i] = rand() % 101;
        v2[i] = rand() % 101;
    }

    int ok = 0;
    int j = 0;

    for(int i = 0; i < 20; i++){
        if(ok == 0){
            vr[i] = v1[j];
            ok = 1;
        }
        else{
            vr[i] = v2[j];
            j++;
            ok = 0;
        }
    }

    printf("Vetor 1: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", v1[i]);
    printf("\n");

    printf("Vetor 2: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", v2[i]);
    printf("\n");       

    printf("Vetor resultante: ");
    for(int i = 0; i < 20; i++)
        printf("%d ", vr[i]);
    printf("\n");

    return 0;
}

