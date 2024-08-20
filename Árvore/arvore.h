#ifndef ARVORE_H
#define ARVORE_H

typedef struct {
    struct no *dir;
    struct no *esq;
    int valor;
} no;

typedef struct{
    struct no *raiz;
} raiz;