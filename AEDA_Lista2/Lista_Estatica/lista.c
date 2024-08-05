#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void lista_inicializar(lista *l){
    l->tamanho = 0;
    printf("\nLista inicializada com sucesso.\n");
}

int lista_vazia(lista l){
    if(l.tamanho == 0)
        return 1;
    return 0;
}

int lista_cheia(lista l){
    if(l.tamanho == MAX)
        return 1;
    return 0;
}

void lista_adicionar(lista *l, int elemento){
    if(lista_cheia(*l) == 1){
        printf("\nLista se encontra cheia, impossivel adicionar.\n");
        return;
    }

    l->elementos[l->tamanho] = elemento;
    l->tamanho++;

    printf("\nO elemento %d foi adicionado a lista.\n", elemento);
}

void lista_remover(lista *l, int elemento){
    if(lista_vazia(*l) == 1){
        printf("Lista se encontra vazia, impossivel remover elemento.\n");
        return;
    }

    for(int i = 0; i < l->tamanho; i++){
        if(l->elementos[i] == elemento){
            for(int j = i; j < l->tamanho-1; j++){
                l->elementos[j] = l->elementos[j+1];
            }
            printf("\nO elemento %d foi removido da lista.\n", elemento);
            break;
        }
    }

    l->tamanho--;
}


void lista_exibir(lista l){
    for(int i = 0; i < l.tamanho; i++){
        printf("\n%d\n", l.elementos[i]);
    }
    printf("\n");
}

int maior_e_menor_elementos(int *maior_pos, int *maior_value, int *menor_pos, int *menor_value, lista l){
    if(lista_vazia(l) == 1)
        return 0; // nao foi possivel encontrar
    
    *maior_value = l.elementos[0];
    *menor_value = l.elementos[0];

    *maior_pos = 0;
    *menor_pos = 0;

    for(int i = 1; i < l.tamanho; i++){
        if(*menor_value > l.elementos[i]){
            *menor_value = l.elementos[i];
            *menor_pos = i;
        }

        else if(*maior_value < l.elementos[i]){
            *maior_value = l.elementos[i];
            *maior_pos = i;
        }
    }
    
    return 1; // foi possivel encontrar
}

int copiar_listas(lista l1, lista *l2){
    if(lista_vazia(l1) == 1){
        printf("\nLista se encontra vazia, impossivel copiar elemento.\n");
        return 0;
    }

    for(int i = 0; i < l1.tamanho; i++){
        int ok = 0;
        for(int j = 0; j < l2->tamanho; j++){
            if(l1.elementos[i] == l2->elementos[j]){
                ok = 1;
                break;
            }
        }

        if(ok == 0){
            lista_adicionar(l2, l1.elementos[i]);
        }
    }

}