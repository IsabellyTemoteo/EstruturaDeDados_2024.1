/**
 * Isabelly Araújo Temoteo
 * 20233013000
 * 2024.1

Faça um programa que receba o ano de nascimento de uma pessoa e o ano
atual, calcule e mostre:

– a idade dessa pessoa em anos;
– a idade dessa pessoa em meses;
– a idade dessa pessoa em dias;
– a idade dessa pessoa em semanas;

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int anoAtual, anoNascimento;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    int anos = anoAtual - anoNascimento;
    printf("Sua idade em anos: %d\n", anos);
    int meses = anos * 12;
    printf("Sua idade em meses: %d\n", meses);
    int dias = anos * 365; // Não considerando anos bissextos 
    printf("Sua idade em dias: %d\n", dias);
    int semanas = meses * 4; // Consideramos 4 semanas por mes
    printf("Sua idade em semanas: %d\n", semanas);

    return 0;
}

