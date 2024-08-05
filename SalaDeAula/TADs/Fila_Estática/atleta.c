#include "atleta.h"
#include <stdio.h>

void correr(Atleta *a1);
void descansar(Atleta *a1);
void inicializa(Atleta *a1);
void printAtleta(Atleta a1);

void correr(Atleta *a1){
    if(a1->cansaco < 10){
        a1->cansaco += 1;
        printf("Corrida realizada com sucesso.\n");
    }
    else 
        printf("O atleta esta muito cansado para correr.\n");
}

void descansar(Atleta *a1){
    if(a1->cansaco == 0)
        printf("O atleta se encontra descansaco.\n");
    else{
        a1->cansaco--;
        printf("Descanso realizado com sucesso.\n");
    }
}

void inicializa(Atleta *a1){
    a1->cansaco = 0;
    a1->idade = 0;
    a1->peso = 0.0;
    a1->cpf = 0;
    a1->altura = 0.0;
    a1->nome[0] = " ";
}

void printAtleta(Atleta a1){
    printf("Nome: %s.\nIdade: %d anos.\nPeso: %fkg.\nCPF: %d.\nAltura: %fcm.\nCansaco: %d.\n", a1.nome, a1.idade, a1.peso, a1.altura, a1.cansaco);
}