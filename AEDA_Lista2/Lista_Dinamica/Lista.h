#ifndef LISTA_H
#define LISTA_H

struct celula{
    int elemento;
    struct celula *prox;
};

typedef struct celula *celula_ptr;

typedef struct{
    celula_ptr inicio;
    celula_ptr fim;
} lista;

void lista_iniciar(lista *l);
void lista_adicionar_inicio(lista *l, int elemento);
void lista_adicionar_fim(lista *l, int elemento);
void lista_remover(lista *l, int elemento);
int lista_vazio(lista l);
void lista_exibir(lista l);

#endif