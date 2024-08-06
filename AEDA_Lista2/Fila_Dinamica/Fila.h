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

/*
Ex. 1
*/

void fila_concatenar(fila *f1, fila *f2);

/*
Ex. 2 
*/

void fila_maior(fila f1, fila f2);

/*
Ex. 3
*/

void quant_par(fila f1);

/*
Ex. 4
*/

fila intercalar_filas(fila f1, fila f2);

#endif