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
1 - Escreva uma funcao que, dado duas filas, concatene as duas filas. Retorne
a fila concatenada em F1. F2 deve ficar vazia.
*/

void fila_concatenar(fila *f1, fila *f2);

/*
2 - Desenvolva uma funcao para testar se uma fila F1 tem mais elementos do
que uma fila F2.
*/

void fila_maior(fila f1, fila f2);

/*
3 - Faca uma funcao para retornar o numero de elementos da fila que possuem
valor par.
*/

void quant_par(fila f1);

/*
4 - Faca uma funcao para intercalar filas: a funcao recebe as duas filas e
retorna a fila com os elementos das duas filas intercalados conforme a
ordem com que elas se dispoe na fila.

*/

fila intercalar_filas(fila f1, fila f2);

#endif