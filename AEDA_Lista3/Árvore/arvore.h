#ifndef ARVORE_H
#define ARVORE_H

typedef struct no{
    struct no *dir;
    struct no *esq;
    int elemento;
} No;

typedef struct{
    struct no *raiz;
} arv;

void arv_criar(arv *r);
void arv_adicionar(int c, arv *r);
void arv_remover(No* n);
int arv_vazia(No* n);
int arv_imprimir(No* n);

/*
Ex 01. Escreva uma fun¸c˜ao que conta o n´umero de n´os de uma ´arvore bin´aria
*/

int contarNos(No *n);

/*
Ex 03. Escreva uma fun¸c˜ao que conta o n´umero de n´os n˜ao folha de uma ´arvore
bin´aria
*/

int nosNaoFolha(No *n);

/*
Ex 04. Escreva uma fun¸c˜ao que conta o n´umero de n´os folha de uma ´arvore bin´aria
*/

int nosFolha(No *n);

/*
Ex 05. Escreva uma fun¸c˜ao que calcula a altura de uma ´arvore bin´aria
*/

int alturaArvore(No *n);

/*
Ex 06. Escreva uma fun¸c˜ao que encontra o valor m´aximo em uma ´arvore de busca
bin´aria
*/

int valorMaximo(No *n);

/*
Ex 07. Duas ABBs s˜ao IGUAIS se s˜ao ambas vazias ou ent˜ao se armazenam
valores iguais em suas ra´ızes, suas sub´arvores esquerdas s˜ao iguais, e suas
sub´arvores direitas s˜ao iguais. Implemente a fun¸c˜ao que verifica se duas
´arvores s˜ao similares
*/

int arvoresIguais(No *a1, No *a2);

/*
Ex 08. Uma ABB e estritamente bin´aria se todos os n´os da ´arvore tem 2 filhos.
Implemente uma fun¸c˜ao que verifica se uma ABB ´e estritamente bin´aria
*/

int arvoreEstritamenteBinaria(No *n);

#endif