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
    printf("\n\n");
}

void fila_concatenar(fila *f1, fila *f2){
    celula_ptr atual_f1 = f1->inicio;
    
    while(atual_f1->prox != NULL){
        atual_f1 = atual_f1->prox;
    }

    atual_f1->prox = f2->inicio;

    f2->inicio = NULL;

}

void fila_maior(fila f1, fila f2){

    int tamf1 = 0, tamf2 = 0;
    
    celula_ptr atual = f1.inicio;

    while(atual != NULL){
        atual = atual->prox;
        tamf1++;
    }

    atual = f2.inicio;

    while(atual != NULL){
        atual = atual->prox;
        tamf2++;
    }

    if(tamf1 > tamf2){
        printf("\nA fila f1 eh maior que f2.\n");
    }

    else if(tamf1 < tamf2){
        printf("\nA fila f2 eh maior que f2.\n");
    }

    else if(tamf1 == tamf2){
        printf("\nA fila f1 eh igual a f2.\n");
    }

}

void quant_par(fila f1){
    celula_ptr atual = f1.inicio;
    int soma = 0;

    while(atual != NULL){
        if(atual->elemento % 2 == 0){
            soma++;
        }
        atual = atual->prox;
    }

    printf("\nContem %d elementos pares.\n", soma);
}

fila intercalar_filas(fila f1, fila f2){
    celula_ptr atual1 = f1.inicio;
    celula_ptr atual2 = f2.inicio;

    fila f3;
    fila_inicializar(&f3);

    if(atual1 != NULL){
        f1.inicio = f3.inicio;
    }
    else{
        f1.inicio = f2.inicio;
    }

    while(atual1 != NULL && atual2 != NULL){
        fila_adicionar(&f3, atual1->elemento);
        atual1 = atual1->prox;

        fila_adicionar(&f3, atual2->elemento);
        atual2 = atual2->prox;
    }

    while (atual1 != NULL) {
        fila_adicionar(&f3, atual1->elemento);
        atual1 = atual1->prox;
    }

    while (atual2 != NULL) {
        fila_adicionar(&f3, atual2->elemento);
        atual2 = atual2->prox;
    }

    return f3;
}