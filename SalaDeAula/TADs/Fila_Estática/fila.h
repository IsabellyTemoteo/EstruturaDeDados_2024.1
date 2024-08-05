#include "atleta.h"

typedef struct {
    Atleta atletas[5];
    int ultimo;
} Fila;

void fila_Exibir(Fila f);
void fila_Inserir(Fila *f, Atleta a);
Atleta fila_Remover(Fila *f);
int fila_Vazia(Fila f);
int fila_Cheia(Fila f);
void fila_Iniciar(Fila *f);
