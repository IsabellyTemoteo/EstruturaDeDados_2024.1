#include <stdio.h>
#include <stdlib.h>
#include "pilha_dinamica.h"

struct celula{
    int elemento;
    struct celula *ant;
};

typedef struct celula *celula_ptr;

typedef struct{
    celula_ptr base;
} Pilha;


void pilha_Iniciar(Pilha *p){
    p->base = NULL;
    printf("A pilha foi iniciada com sucesso.\n\n");
}

void pilha_empilhar(Pilha *p, int el){
    celula_ptr nova = (celula_ptr)malloc(sizeof(struct celula));
    nova->elemento = el;
    nova->ant = p->ant;

    if(pilha_vazio(*p)){
        f->base = nova;
    }
    else{
        celula_ptr c1 = p->ant{
            nova->ant = p-
        }
    }

    printf("Elemento adicionado com sucesso.\n\n");
}



Pilha pilha_desempilha(Pilha *p);
void pilha_vazio(Pilha p);
void pilha_cheio(Pilha p);

