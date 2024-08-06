#include "Pilha.h"
#include <stdio.h>

int main(){
    pilha f1;
    pilha_iniciar(&f1);

    pilha_adicionar(&f1, 1);
    pilha_adicionar(&f1, 2);
    pilha_adicionar(&f1, 3);
    pilha_adicionar(&f1, 4);
    pilha_adicionar(&f1, 5);

    pilha_exibir(f1);

    pilha_remover(&f1);

    pilha_exibir(f1);

    char s1[] = {"ABCD"};
    char s2[] = {"DCBA"};

    string_xy(s1, s2);

    char s3[] = {"Bom dia, Isabelly."};

    inverter(s3);

    return 0;
}