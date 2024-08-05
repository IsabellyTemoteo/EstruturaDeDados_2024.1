#include "lista.h"
#include <stdio.h>

void divider(){
    printf("=========================");
}

int main(){
    lista l1;
    lista_inicializar(&l1);

    lista_adicionar(&l1, 1);
    lista_adicionar(&l1, 2);
    lista_adicionar(&l1, 3);
    lista_adicionar(&l1, 4);
    lista_adicionar(&l1, 5);

    lista_exibir(l1);

    divider();

    lista_remover(&l1, 2);

    lista_exibir(l1);

    divider();

    int maior, menor, posmaior, posmenor;
    
    int res;
    res = maior_e_menor_elementos(&posmaior, &maior, &posmenor, &menor, l1);

    printf("\nMaior: %d - %d\nMenor: %d - %d\n", posmaior, maior, posmenor, menor);

    divider();

    lista l2;
    lista_inicializar(&l2);

    lista_adicionar(&l2, 4);
    lista_adicionar(&l2, 6);
    lista_adicionar(&l2, 7);

    divider();

    printf("\nConcatenando listas:\n\n");

    printf("Lista 1:");
    lista_exibir(l1);

    printf("Lista 2:");
    lista_exibir(l2);

    printf("Concatenando:\n");
    res = copiar_listas(l1, &l2);

    printf("\nResultado:\n");
    lista_exibir(l2);

    return 0;
}