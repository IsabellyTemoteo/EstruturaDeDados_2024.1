#ifndef PILHA_H
#define PILHA_H

struct celula {
    int elemento;
    struct celula *anterior;
};

typedef struct celula *celula_ptr;

typedef struct{
    celula_ptr topo;
} pilha;

void pilha_iniciar(pilha *p);
void pilha_exibir(pilha p);
int pilha_vazia(pilha p);
void pilha_adicionar(pilha *p, int elemento);
void pilha_remover(pilha *p);

#endif