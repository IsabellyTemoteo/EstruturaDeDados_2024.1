#include <stdio.h>
#include <stdlib.h>
#include "fila_dinamica.h"
#include "atleta.h"

void iniciaFila(Fila *f) {
    f->inicio = NULL;
    printf("Fila inicializada com sucesso.\n");
}

int vazioFila(Fila f) {
    return (f.inicio == NULL);
}

void insereFila(Fila *f, Atleta a) {
    celula_ptr nova = (celula_ptr) malloc(sizeof(struct celula));
    nova->atleta = a;
    nova->prox = NULL;

    if (vazioFila(*f)) {
        f->inicio = nova;
    } else {
        celula_ptr a1 = f->inicio;
        while (a1->prox != NULL) {
            a1 = a1->prox;
        }
        a1->prox = nova;
    }

    printf("Elemento inserido na fila!\n\n");
}

Atleta removeFila(Fila *f) {
    if (vazioFila(*f)) {
        printf("Fila se encontra vazia, impossivel remover elemento.\n");
        Atleta temp;
        return temp;
    }

    celula_ptr a1 = f->inicio;
    Atleta atleta1 = a1->atleta;

    f->inicio = a1->prox;
    free(a1);

    return atleta1;
}

void mostraFila(Fila f) {
    celula_ptr atual = f.inicio;
    while (atual != NULL) {
        printAtleta(atual->atleta);
        atual = atual->prox;
    }
}
