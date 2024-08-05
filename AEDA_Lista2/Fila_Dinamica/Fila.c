#include "Fila.h"
#include <stdio.h>
#include <stdlib.h>

void fila_inicializar(fila *f){
    f->inicio = NULL;
}

void fila_adicionar(fila *f, int elemento){
    celula_ptr save = (celula_ptr) malloc(sizeof(struct celula));
    save->elemento = elemento;
    save->prox = NULL;

    if(fila_vazio(*f)){
        f->inicio = save;
        return;
    }

    celula_ptr it = f->inicio;
    while(it->prox != NULL){
        it = it->prox;
    }

    it->prox = save;
}

int fila_remover(fila *f){
    int save_elemento;
    if(fila_vazio(*f))
        return save_elemento;

    celula_ptr save = f->inicio;
    int elemento_um = save->elemento;

    f->inicio = save->prox;
    free(save);

    return elemento_um;
}

int fila_vazio(fila f){
    if(f.inicio == NULL)
        return 1;
    return 0;
}

void fila_exibir(fila f){
    celula_ptr atual = f.inicio;
    while (atual != NULL) {
        printf("\n%d", atual->elemento);
        atual = atual->prox;
    }
    printf("\n");
}
