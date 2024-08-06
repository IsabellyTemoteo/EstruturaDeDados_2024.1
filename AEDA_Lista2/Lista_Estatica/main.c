#include "Fila.h"
#include <stdio.h>

void divider(){
    printf("\n=================\n");
}

int main(){
    fila f1;
    fila_inicializar(&f1);

    fila_adicionar(&f1, 1);
    fila_adicionar(&f1, 2);
    fila_adicionar(&f1, 3);
    fila_adicionar(&f1, 4);
    fila_adicionar(&f1, 5);

    fila_exibir(f1);

    fila_remover(&f1);

    fila_exibir(f1);

    divider();

    fila f2;
    fila_inicializar(&f2);

    fila_adicionar(&f2, 6);
    fila_adicionar(&f2, 7);
    fila_adicionar(&f2, 8);
    fila_adicionar(&f2, 9);
    fila_adicionar(&f2, 10);

    fila_exibir(f2);

    divider();

    fila_concatenar(&f1, &f2);

    fila_exibir(f1);

    divider();

    fila_maior(f1, f2);

    divider();

    fila_exibir(f1);

    quant_par(f1);

    divider();

    fila_adicionar(&f2, 8);
    fila_adicionar(&f2, 9);
    fila_adicionar(&f2, 10);
    fila_adicionar(&f2, 11);

    fila f3;

    f3 = intercalar_filas(f1, f2);

    fila_exibir(f3);

    divider();

    return 0;
}