#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void arv_criar(arv *r) {
    r->raiz = NULL;
}

No* criar_no(int c) {
    No *n = (No*)malloc(sizeof(No));
    if (n) {
        n->elemento = c;
        n->esq = NULL;
        n->dir = NULL;
    }
    return n;
}

void arv_adicionar(int c, arv *r) {
    No **n = &(r->raiz);
    while (*n) {
        if (c < (*n)->elemento) {
            n = &((*n)->esq);
        } else if (c > (*n)->elemento) {
            n = &((*n)->dir);
        } else {
            return; 
        }
    }
    *n = criar_no(c);
}

void arv_remover(No* n) {
    if (n) {
        arv_remover(n->esq);
        arv_remover(n->dir);
        free(n);
    }
}

int arv_vazia(No* n) {
    return n == NULL;
}

int arv_imprimir(No* n) {
    if (n == NULL) {
        return 0;
    }
    arv_imprimir(n->esq);
    printf("%d ", n->elemento);
    arv_imprimir(n->dir);
    return 0;
}

int contarNos(No *n){
    if(n == NULL)
        return 0;
    return 1 + contarNos(n->esq) + contarNos(n->dir);
}

int nosNaoFolha(No *n){
    if(n == NULL || (n->esq == NULL && n->dir == NULL) )
        return 0;
    return 1 + nosNaoFolha(n->esq) + nosNaoFolha(n->dir);
}

int nosFolha(No *n){
    if(n == NULL)
        return 0;
    if(n->esq == NULL && n->dir == NULL)
        return 1;
    return nosFolha(n->esq) + nosFolha(n->dir);
}

int alturaArvore(No *n){
    if(n == NULL)
        return 0;
    int altEsq = alturaArvore(n->esq);
    int altDir = alturaArvore(n->dir);
    
    if (altEsq >= altDir) return altEsq + 1;
    return altDir + 1;
}

int valorMaximo(No *n){
    if(n == NULL)
        return 0;
    while(n->dir != NULL)
        n = n->dir;
    return n->elemento;
}

int arvoresIguais(No *a1, No *a2){
    if(a1 == NULL && a2 == NULL)
        return 1;
    if(a1 == NULL || a2 == NULL)
        return 0;
    return (a1->elemento == a2->elemento) && arvoresIguais(a1->esq, a2->esq) && arvoresIguais(a1->dir, a2->dir); 
}

int arvoreEstritamenteBinaria(No *n){
    if(n == NULL)
        return 1;
    
    if(n->dir == NULL && n->esq == NULL)
        return 1;

    if(n->dir != NULL && n->esq != NULL )
        return arvoreEstritamenteBinaria(n->dir) && arvoreEstritamenteBinaria(n->esq);

    return 0;
}
