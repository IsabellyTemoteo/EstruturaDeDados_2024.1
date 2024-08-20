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
1 -  Considere uma pilha que armazene caracteres. Faca uma funcao para
determinar se uma string e da forma XY, onde X e uma cadeia formada
por caracteres arbitrarios e Y e o reverso de X. Por exemplo, se x = ABCD,
entao y = DCBA. Considere que x e y sao duas strings distintas.
*/

int string_length(char str[]);
void string_xy(char x[], char y[]);

/*
2 - Escreva um algoritmo, usando uma Pilha, que inverte as letras de cada
palavra de um texto terminado por ponto (.) preservando a ordem das
palavras. Por exemplo, dado o texto:
ESTE EXERCICIO E MUITO FACIL. 
A saıda deve ser:
ETSE OICICREXE E OTIUM LICAF
*/

void inverter(char str[]);

#endif