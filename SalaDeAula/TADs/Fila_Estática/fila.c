#include "atleta.h"
#include "fila.h"
#include <stdio.h>

void fila_Exibir(Fila f);
void fila_Inserir(Fila *f, Atleta a);
Atleta fila_Remover(Fila *f);
int fila_Vazia(Fila f);
int fila_Cheia(Fila f);
void fila_Iniciar(Fila *f);

void fila_Iniciar(Fila *f){
    f -> ultimo = 0;
}

int fila_Vazia(Fila f){
    if (f.ultimo == 0)
        return 1;
    return 0;
}

int fila_Cheia(Fila f){
    if(f.ultimo == 5)
        return 1;
    return 0;
}

void fila_Inserir(Fila *f, Atleta a){
    if(fila_Cheia(*f) == 0){
        f -> atletas[f->ultimo] = a;
        f -> ultimo++;
    }
    else
        printf("Impossivel adicionar elemento, fila cheia.\n");
}

Atleta fila_Remover(Fila *f){
    if(fila_Vazia(*f) == 0){
        Atleta primeiro = f->atletas[0];

        for(int i = 0; i < f->ultimo-1; i++)
            f->atletas[i] = f->atletas[i+1];
        
        f->ultimo--;

        return primeiro;
    }
    else{
        printf("Nao existe elementos para serem removidos.\n");
        return;
    }
}

void fila_Exibir(Fila f){
    for(int i = 0; i < f.ultimo; i++){
        printAtleta(f.atletas[i]);
    }
}