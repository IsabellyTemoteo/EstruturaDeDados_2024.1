#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>

void lista_iniciar(lista *l){
    l->inicio = NULL;
    l->fim = NULL;
}

void lista_adicionar_inicio(lista *l, int elemento){
    celula_ptr new = (celula_ptr) malloc (sizeof(struct celula));
    new->elemento = elemento;
    new->prox = l->inicio;
    l->inicio = new;

    if(l->fim == NULL)
        l->fim = new;
}

void lista_adicionar_fim(lista *l, int elemento){
    celula_ptr new = (celula_ptr) malloc (sizeof(struct celula));
    new->elemento = elemento;
    new->prox = NULL;
    
    if(l->inicio == NULL)
        l->inicio = new;

    if(l->fim != NULL)
        l->fim->prox = new;

    l->fim = new;
}

int lista_vazio(lista l){
    if(l.inicio == NULL && l.fim == NULL)
        return 1;
    return 0;
}

void lista_exibir(lista l){
    celula_ptr atual = l.inicio;

    while(atual != NULL){
        printf("%d\n", atual->elemento);
        atual = atual->prox;
    }

    printf("\n");
}

void lista_remover(lista *l, int elemento){
    celula_ptr atual = l->inicio, prev = NULL;

    while(atual != NULL){
        if(atual->elemento == elemento){
            if(prev == NULL){
                l->inicio = atual->prox;
                if(l->inicio == NULL)
                    l->fim == NULL;
            }
            else{
                prev->prox = atual->prox;
                if(prev->prox == NULL)
                    l->fim = prev;
            }
        
            free(atual);
            return;
        }
        prev = atual;
        atual = atual->prox;
    }

}

