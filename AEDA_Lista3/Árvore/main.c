#include <stdio.h>
#include "arvore.h"

int main(){
    arv a, a1, a2;

    arv_criar(&a);
    arv_adicionar(10, &a);
    arv_adicionar(6, &a);
    arv_adicionar(8, &a);
    arv_adicionar(9, &a);
    arv_adicionar(5, &a);

    arv_imprimir(a.raiz);

    printf("\nNumero de nos: %d\n",contarNos(a.raiz));

    printf("Numero de nos nao folha: %d\n", nosNaoFolha(a.raiz));

    printf("Numero de nos folha: %d\n", nosFolha(a.raiz));

    printf("Altura da arvore: %d\n", alturaArvore(a.raiz));

    printf("Valor maximo: %d\n", valorMaximo(a.raiz));

    arv_criar(&a1);
    arv_adicionar(10, &a1);
    arv_adicionar(6, &a1);
    arv_adicionar(8, &a1);
    arv_adicionar(9, &a1);
    arv_adicionar(5, &a1);

    arv_criar(&a2);
    arv_adicionar(10, &a2);

    printf("A e A1 sao iguais: %d\n", arvoresIguais(a.raiz, a1.raiz));
    printf("A1 e A2 sao iguais: %d\n", arvoresIguais(a1.raiz, a2.raiz));

    printf("Arvore estritamente binaria A: %d\n", arvoreEstritamenteBinaria(a.raiz));
    printf("Arvore estritamente binaria A2: %d\n", arvoreEstritamenteBinaria(a2.raiz));

    return 0;
}