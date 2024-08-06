#ifndef PILHA_H
#define PILHA_H

struct celula {
    char elemento;
    struct celula *anterior;
};

typedef struct celula *celula_ptr;

typedef struct{
    celula_ptr topo;
} pilha;

void pilha_iniciar(pilha *p);
void pilha_exibir(pilha p);
int pilha_vazia(pilha p);
void pilha_adicionar(pilha *p, char elemento);
char pilha_remover(pilha *p);

/*
Ex. 1
*/

int string_length(char str[]);
void string_xy(char x[], char y[]);

/*
Ex. 2
*/

void inverter(char str[]);

#endif