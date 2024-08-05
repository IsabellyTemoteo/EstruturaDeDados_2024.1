#include "Fila.h"
#include <stdio.h>

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


    return 0;
}