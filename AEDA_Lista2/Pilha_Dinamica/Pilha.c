#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>

void pilha_iniciar(pilha *p){
    p->topo = NULL;
}

void pilha_exibir(pilha p){
    celula_ptr atual = p.topo;

    while(atual != NULL){
        printf("%d\n", atual->elemento);
        atual = atual->anterior;
    }
    printf("\n");
}

int pilha_vazia(pilha p){
    if(p.topo == NULL)
        return 1;
    return 0;
}

void pilha_adicionar(pilha *p, int elemento){
    celula_ptr create = (celula_ptr) malloc (sizeof(struct celula));
    create->elemento = elemento;
    create->anterior = p->topo;

    p->topo = create;
}

void pilha_remover(pilha *p){
    if(pilha_vazia(*p))
        return;

    celula_ptr save = p->topo;
    p->topo = p->topo->anterior;
    free(save);
}
