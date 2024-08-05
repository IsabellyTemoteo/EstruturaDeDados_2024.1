#include "Fila.h"
#include <stdio.h>
#include <stdlib.h>

void Divider(){
    printf("=========================================");
}

int main(){

    Fila f1;
    fila_inicializa(&f1);

    fila_adicionar(&f1, 1);
    fila_adicionar(&f1, 2);
    fila_adicionar(&f1, 3);
    fila_adicionar(&f1, 4);
    fila_adicionar(&f1, 5);

    fila_exibir(f1);

    Divider();

    fila_remover(&f1);

    fila_exibir(f1);

    fila_reverso(&f1);

    Divider();

    Fila f2;
    fila_inicializa(&f2);

    fila_adicionar(&f2, 6);
    fila_adicionar(&f2, 7);
    fila_adicionar(&f2, 8);

    fila_exibir(f2);

    Divider();

    filas_compara(f1, f2);

    Divider();

    fila_exibir(f1);
    fila_impares(f1);

    Divider();

    fila_exibir(f2);
    fila_impares(f2);

    Divider();

    fila_exibir(f1);
    fila_operacoes(f1);

    Divider();

    fila_exibir(f2);
    fila_operacoes(f2);

    return 0;
}