#include <stdio.h>

#define maxtam 10

typedef struct fila{
    int tam;
    int pos;
    int elementos[maxtam];
}fila;

void fila_iniciar(fila *f){
    f->tam = maxtam;
    f->pos = 0;
}

int fila_cheia(fila *f){
    if(f->tam == f->pos)
        return 0;
    else return 1;

}

int fila_enfileira(fila *f, int x){
    if(fila_cheia(f))
        return 1;

    f->elementos[f->pos]=x;
    f->pos++;
    return 0;
    
}

int fila_vazia(fila f){
    if(f.pos == 0)
        return 1;
    else return 0;

}

int fila_desenfileira(fila *f){
    if(!(fila_vazia(*f))){
        int num = f->elementos[0];
        for(int i = 0; i < f->pos-2; i++){
            f->elementos[i] = f->elementos[i+1];
        }

        f->pos--;
        return 0;
    }
    else return 1;
}

void fila_printar(fila *f){
    
        for(int i = 0; i < f->pos; i++){
            printf("%d ", f->elementos[i]);
        }
        printf("\n\n");
    
}