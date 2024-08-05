#ifndef PILHA_H
#define PILHA_H

#define MAX 15

typedef struct pilha{
    char elementos[MAX];
    int topo;
} pilha;

void pilha_iniciar(pilha *p);
void pilha_empilhar(pilha *p, char elemento);
char pilha_remover(pilha *p);
int pilha_vazio(pilha p);
int pilha_cheio(pilha p);
void pilha_exibir(pilha p);

/*
1. Uma sequencia de operações inserção (I) e eliminação (E) numa piilha é dita válida se ela tem igual numero de Is e Es e todas as operações podem ser efetuadas na pilha, ou seja, a eliminação só pode acontecer se a pilha não estiver vazia. Formule uma regra que permita determinar se uma sequencia (ex: IIEE) é válida ou não.
*/

void sequencia_valida(pilha p);

/*
2. Considere uma pilha que armazena caracteres. Escreva uma função que verifica se a palavra é um palíndromo.
*/

// Ps: estou considerando palavras somente com letras maisculas ou somente minusculas 

void palindromo(pilha p);

/*
3.Escreva um programa que utilize uma pilha para verificar se expressões aritméticas estão com a parentesiação correta. O programa deve verificar expressões para ver se cada “abre parênteses” tem um “fecha parênteses” correspondente. Ex.:
Correto: (())-(())-()()
Incorreto: )(-((-))((
*/

void parenteses(pilha p);

#endif


