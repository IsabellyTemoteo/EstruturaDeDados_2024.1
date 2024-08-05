#include "Fila.h"
#include <stdio.h>
#include <stdlib.h>

void fila_inicializa(Fila *f){
    f->ultimo = 0;
    printf("\nFila inicializada com sucesso.\n");
}

int fila_vazia(Fila f){
    if(f.ultimo == 0)
        return 1;
    return 0;
}

int fila_cheia(Fila f){
    if(f.ultimo == 10)
        return 1;
    return 0;
}

void fila_adicionar(Fila *f, int novoElemento){
    if(fila_cheia(*f) == 1){
        printf("\nA fila se encontra cheia. Impossivel inserir elementos.\n\n");
        return;
    }
    f->elemento[f->ultimo] = novoElemento;
    f->ultimo++;
}

int fila_remover(Fila *f){
    if(fila_vazia(*f) == 1){
        printf("\nA fila se encontra vazia. Impossivel remover elementos.\n\n");
        return 0;
    }

    int save = f->elemento[0];

    for(int i = 0; i < f->ultimo-1; i++){
        f->elemento[i] = f->elemento[i+1];
    }

    f->ultimo--;

    printf("\nO elemento %d foi removido!\n", save);

    return save;
}

void fila_exibir(Fila f){
    for(int i = 0; i < f.ultimo; i++){
        printf("\nPos. %d: %d", i+1, f.elemento[i]);
    }
    printf("\n");
}

void fila_reverso(Fila *f){

    for(int i = 0, j = f->ultimo-1; i < (f->ultimo)/2; i++, j--){
        int save = f->elemento[i];
        f->elemento[i] = f->elemento[j];
        f->elemento[j] = save;
    }

    printf("\nFila reversa: \n");

    fila_exibir(*f);

}

void filas_compara(Fila f1, Fila f2){

    printf("\nFila 1: \n");
    fila_exibir(f1);

    printf("\nFila 2: \n");
    fila_exibir(f2);

    if(f1.ultimo > f2.ultimo)
        printf("\nA maior fila eh a f1.\n\n");
    else if(f1.ultimo == f2.ultimo)
        printf("\nAs filas contem o mesmo tamanho.\n\n");
    else    
        printf("\nA maior fila eh a fila f2.\n\n");

}

void fila_impares(Fila f){

    int soma = 0;

    for(int i = 0; i < f.ultimo; i++){
        if(f.elemento[i] % 2 != 0)
            soma++;
    }

    printf("\nA fila contem %d elemento(s) impares.\n\n", soma);

}


void fila_operacoes(Fila f){

    int maior = f.elemento[0];
    int menor = f.elemento[0];
    int media = 0;

    for(int i = 0; i < f.ultimo; i++){
        if(maior < f.elemento[i])
            maior = f.elemento[i];
        if(menor > f.elemento[i])
            menor = f.elemento[i];
        media += f.elemento[i];
    }

    media /= f.ultimo;

    printf("\nO maior elemento eh: %d\nO menor elemento eh: %d\nA media eh: %d\n\n", maior, menor, media);

}