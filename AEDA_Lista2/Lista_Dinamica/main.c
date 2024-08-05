#include "Lista.h"
#include <stdio.h>

int main(){
    lista f1;
    lista_iniciar(&f1);

    lista_adicionar_inicio(&f1, 1);
    lista_adicionar_inicio(&f1, 2);
    lista_adicionar_inicio(&f1, 3);
    lista_adicionar_inicio(&f1, 4);
    lista_adicionar_fim(&f1, 5);

    lista_exibir(f1);

    lista_remover(&f1, 3);

    lista_exibir(f1);

    return 0;
}