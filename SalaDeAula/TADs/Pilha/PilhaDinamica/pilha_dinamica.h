#ifndef PILHA_DINAMICA
#define PILHA_DINAMINCA

struct celula{
    int elemento;
    struct celula *ant;
};

typedef struct celula *celula_ptr;

typedef struct{
    celula_ptr base;
} Pilha;


void pilha_Iniciar(Pilha *p);
void pilha_empilhar(Pilha *p, int el);
Pilha pilha_desempilha(Pilha *p);
void pilha_vazio(Pilha p);
void pilha_cheio(Pilha p);

#endif