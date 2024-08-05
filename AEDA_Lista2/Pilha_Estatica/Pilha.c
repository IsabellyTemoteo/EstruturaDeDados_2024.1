#include  "Pilha.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 15

void pilha_iniciar(pilha *p){
    p->topo = 0;
    printf("\nPilha inicializada com sucesso.\n");
}

void pilha_empilhar(pilha *p, char elemento){
    if(pilha_cheio(*p) == 1){
        printf("\nImpossivel empilhar. Pilha cheia.\n");
        return;
    }

    p->elementos[p->topo] = elemento;
    p->topo++;

    printf("\nElemento %c empilhado com sucesso.\n", elemento);
}

char pilha_remover(pilha *p){
    if(pilha_vazio(*p) == 1){
        printf("\nNao ha elementos a serem removidos.\n");
        return '0';
    }

    char save = p->elementos[p->topo-1];
    p->topo--;

    printf("\nElemento %c removido com sucesso.\n", save);
    return save;

}

int pilha_vazio(pilha p){
    if(p.topo == 0)
        return 1;
    return 0;
}

int pilha_cheio(pilha p){
    if(p.topo == MAX)
        return 1;
    return 0;
}

void pilha_exibir(pilha p){
    printf("\nPilha:\n");
    
    for(int i = 0; i < p.topo; i++){
        printf("%c\n", p.elementos[i]);
    }

    printf("\n");
}

void sequencia_valida(pilha p){
    if(pilha_vazio(p) == 1){
        printf("\nPilha vazia. Tente inserir elementos.\n");
        return;
    }

    int E = 0, I = 0;

    for(int i = 0; i < p.topo; i++){
        if(p.elementos[i] == 'E'){
            E++;
        }
        else if(p.elementos[i] == 'I'){
            I++;
        }
    }

    if(I > E){
        printf("\nSequencia nao e valida. Numero de Is excede os Es\n");
    }

    else if(E > I){
        printf("\nSequencia nao e valida. Numero de Es excede os Is\n");
    }

    else{
        printf("\nSequencia e valida!\n");
    }

}

void palindromo(pilha p){
    if(pilha_vazio(p) == 1){
        printf("\nPilha vazia. Tente inserir elementos.\n");
        return;
    }

    int ok = 0;
    for(int i = 0, j = p.topo-1; i < (p.topo)/2; i++, j--){
        if(p.elementos[i] != p.elementos[j]){
            ok = 1;
            break;
        }
    }

    if(ok == 0){
        printf("\nA pilha forma uma palavra palindroma!\n");
    }
    else{
        printf("\n A pilha nao forma uma palavra palindroma.\n");
    }

}

void parenteses(pilha p){
    if(pilha_vazio(p) == 1){
        printf("\nPilha vazia. Tente inserir elementos.\n");
        return;
    }

    int abre = 0, fecha = 0;

    for(int i = 0; i < p.topo; i++){
        if(p.elementos[i] == '('){
            abre++;
        }
        else if(p.elementos[i] == ')')
            fecha++;
            if(abre > 0){
                abre--;
                fecha--;
            }
    }   


    if(abre == 0 && fecha == 0)
        printf("\nA sequencia de parenteses eh valida!\n");
    else 
        printf("\nA sequencia de parenteses nao eh valida.\n");

}