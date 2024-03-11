/**
 * Isabelly Araújo Temoteo
 * 20233013000
 * 2024.1

    Faca um programa que receba varios numeros, calcule e mostre:
    – a soma dos numeros digitados;
    – a quantidade de numeros digitados;
    – a media dos numeros digitados;
    – o maior numero digitado;
    – o menor numero digitado;
    – a media dos numeros pares;
    – a porcentagem dos numeros ımpares entre todos os numeros digitados.
    Finalize a entrada de dados com a digitacao do numero 30.000.

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int n;
    int soma = 0, quant = 0, maior, menor, ok = 1, pares = 0, quant_pares = 0, quant_imp = 0;

    while(1){
        printf("Digite um numero: ");
        scanf("%d", &n);

        if(n == 30000)
            break;

        soma += n;
        quant++;

        if(ok == 1){
            maior = n;
            menor = n;
            ok = 0;
        }

        if(n > maior)
            maior = n;

        if(n < menor)
            menor = n;

        if(n%2 == 0){
            pares += n;
            quant_pares++;
        }
        else 
            quant_imp++;


    }

    printf("\nA soma dos numeros digitados eh: %d\n", soma);
    printf("A quantidade de numeros digitados eh: %d\n", quant);
    float media = soma/quant;
    printf("A media dos numeros digitados eh: %.2f\n", media);
    printf("O maior numero digitado eh: %d\n", maior);
    printf("O menor numero digitado eh: %d\n", menor);
    float media_pares = pares/quant_pares;
    printf("A media dos numeros pares eh: %.2f\n", media_pares);
    float porcentagem_impares = (quant_imp*100)/quant;
    printf("A porcentagem de impares digitados eh: %.2f\n", porcentagem_impares);


    return 0;
}
