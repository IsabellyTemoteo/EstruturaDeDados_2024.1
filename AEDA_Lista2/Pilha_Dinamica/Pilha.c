#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>

void pilha_iniciar(pilha *p){
    p->topo = NULL;
}

void pilha_exibir(pilha p){
    celula_ptr atual = p.topo;

    while(atual != NULL){
        printf("%d\n", atual->elemento);
        atual = atual->anterior;
    }
    printf("\n");
}

int pilha_vazia(pilha p){
    if(p.topo == NULL)
        return 1;
    return 0;
}

void pilha_adicionar(pilha *p, char elemento){
    celula_ptr create = (celula_ptr) malloc (sizeof(struct celula));
    create->elemento = elemento;
    create->anterior = p->topo;

    p->topo = create;
}

char pilha_remover(pilha *p){
    if(pilha_vazia(*p))
        return ' ';

    celula_ptr save = p->topo;
    char retorno = p->topo->elemento;
    p->topo = p->topo->anterior;
    free(save);

    return retorno;
}

int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void string_xy(char x[], char y[]){
    pilha px, py;

    pilha_iniciar(&px);
    pilha_iniciar(&py);

    if(string_length(x) != string_length(y)){
        printf("\nStrings nao contem o mesmo tamanho.\n");
        return;
    }

    for(int i = 0; i < string_length(x); i++){
        pilha_adicionar(&px, x[i]);
    }

    for(int i = string_length(y)-1; i >= 0; i--){
        pilha_adicionar(&py, y[i]);
    }

    celula_ptr cx, cy;
    cx = px.topo;
    cy = py.topo;

    while(cx != NULL && cy != NULL){
        if(cx->elemento != cy->elemento){
            printf("\nAs pilhas nao sao da forma XY.\n");
            return;
        }
        cx = cx->anterior;
        cy = cy->anterior;
    }


    printf("\nAs pilhas sao da forma XY!\n");

}

void inverter(char str[]) {
    pilha p;
    pilha_iniciar(&p);
    
    int tam = string_length(str);
    char new_str[tam + 1]; 
    int str_index = 0;

    for (int i = 0; i <= tam; i++) {
        if (str[i] == ' ' || str[i] == '.' || str[i] == '\0') {
            while (p.topo != NULL) {
                new_str[str_index] = pilha_remover(&p);
                str_index++;
            }
            if (str[i] != '\0') {
                new_str[str_index] = str[i];
                str_index++;
            }
        } else {
            pilha_adicionar(&p, str[i]);
        }
    }

    new_str[str_index] = '\0';

    printf("%s\n\n", new_str);
}