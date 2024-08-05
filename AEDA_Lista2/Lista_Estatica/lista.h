#ifndef LISTA_H
#define LISTA_H

#define MAX 10

typedef struct lista{
    int elementos[MAX];
    int tamanho;
} lista;

void lista_inicializar(lista *l);
int lista_vazia(lista l);
int lista_cheia(lista l);
void lista_adicionar(lista *l, int elemento);
void lista_remover(lista *l, int elemento);
void lista_exibir(lista l);

/*
1. Faça uma função para buscar a posição e o valor do maior elemento da lista, os quais deverão ser retornados por referência. A função deve retornar se a operação foi possível ou não.
*/

int maior_e_menor_elementos(int *maior_pos, int *maior_value, int *menor_pos, int *menor_value, lista l);

/*
3. Fazer uma função que copia uma lista L1 em outra L2, eliminando os elementos repetidos.
*/

int copiar_listas(lista l1, lista *l2);

#endif 