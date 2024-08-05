#ifndef FILA_H
#define FILA_H

typedef struct Fila{
    int elemento[10];
    int ultimo;
} Fila;

void fila_inicializa(Fila *f);
int fila_vazia(Fila f);
int fila_cheia(Fila f);
void fila_adicionar(Fila *f, int novoElemento);
int fila_remover(Fila *f);
void fila_exibir(Fila f);

// 1. Implemente a função reverso, que reposiciona os elementos na fila de tal forma que o início da fila torna-se o fim, e vice-versa.

void fila_reverso(Fila *f);

// 2. Desenvolva uma função para testar se uma fila F1 tem mais elementos que uma fila F2.

void filas_compara(Fila f1, Fila f2);

// 3. Faça uma função para retornar o número de elementos da fila que possuem valor ímpar.

void fila_impares(Fila f);

// 4. Considere uma fila contendo números inteiros. Escreva uma função que calcule o maior, o menor e a média aritmética dos seus elementos.

void fila_operacoes(Fila f);

#endif