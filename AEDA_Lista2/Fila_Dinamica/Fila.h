#ifndef FILA__H
#define FILA_H

struct celula {
    int elemento;
    struct celula *prox;
};

typedef struct celula *celula_ptr;

typedef struct {
    celula_ptr inicio;
} fila;

void fila_inicializar(fila *f);
void fila_adicionar(fila *f, int elemento);
int fila_remover(fila *f);
int fila_vazio(fila f);
void fila_exibir(fila f);

#endif