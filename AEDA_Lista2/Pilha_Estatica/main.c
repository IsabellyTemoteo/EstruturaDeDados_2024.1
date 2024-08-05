#include "pilha.h"
#include <stdio.h>


void divider(){
    printf("===========================");
};

int main(){
    
    pilha p1;
    pilha_iniciar(&p1);

    printf("\nSequencia: IIIEEEIEIE");
    pilha_empilhar(&p1, 'I');
    pilha_empilhar(&p1, 'I');
    pilha_empilhar(&p1, 'I');
    pilha_empilhar(&p1, 'E');
    pilha_empilhar(&p1, 'E');
    pilha_empilhar(&p1, 'E');
    pilha_empilhar(&p1, 'I');
    pilha_empilhar(&p1, 'E');
    pilha_empilhar(&p1, 'I');
    pilha_empilhar(&p1, 'E');

    sequencia_valida(p1);

    divider();

    pilha p2;
    pilha_iniciar(&p2);

    printf("\nSequencia: E");
    pilha_empilhar(&p2, 'E');

    sequencia_valida(p2);
    pilha_remover(&p2);

    divider();

    printf("\nSequencia: IEIEE");

    pilha_empilhar(&p2, 'I');
    pilha_empilhar(&p2, 'E');
    pilha_empilhar(&p2, 'I');
    pilha_empilhar(&p2, 'E');
    pilha_empilhar(&p2, 'E');

    sequencia_valida(p2);

    divider();

    pilha p3;
    pilha_iniciar(&p3);
    sequencia_valida(p3);

    divider();

    printf("\nPalavra: ARARA\n");
    pilha_empilhar(&p3, 'A');
    pilha_empilhar(&p3, 'R');
    pilha_empilhar(&p3, 'A');
    pilha_empilhar(&p3, 'R');
    pilha_empilhar(&p3, 'A');

    palindromo(p3);

    pilha_remover(&p3);
    pilha_remover(&p3);
    pilha_remover(&p3);
    pilha_remover(&p3);
    pilha_remover(&p3);

    divider();

    printf("\nPalabra: ISABELLY\n");
    pilha_empilhar(&p3, 'I');
    pilha_empilhar(&p3, 'S');
    pilha_empilhar(&p3, 'A');
    pilha_empilhar(&p3, 'B');
    pilha_empilhar(&p3, 'E');
    pilha_empilhar(&p3, 'L');
    pilha_empilhar(&p3, 'L');
    pilha_empilhar(&p3, 'Y');

    palindromo(p3);

    divider();

    pilha p4;
    pilha_iniciar(&p4);

    printf("\nPalavra: A\n");

    pilha_empilhar(&p4, 'A');

    palindromo(p4);

    pilha_remover(&p4);

    divider();

    printf("\nSequencia: (())-(())-()()\n");

    pilha_empilhar(&p4, '(');
    pilha_empilhar(&p4, '(');
    pilha_empilhar(&p4, ')');
    pilha_empilhar(&p4, ')');
    pilha_empilhar(&p4, '-');
    pilha_empilhar(&p4, '(');
    pilha_empilhar(&p4, '(');
    pilha_empilhar(&p4, ')');
    pilha_empilhar(&p4, ')');
    pilha_empilhar(&p4, '-');
    pilha_empilhar(&p4, '(');
    pilha_empilhar(&p4, ')');
    pilha_empilhar(&p4, '(');
    pilha_empilhar(&p4, ')');

    parenteses(p4);

    divider();

    pilha p5;
    pilha_iniciar(&p5);

    printf("\nSequencia: )(-((-))((\n");

    pilha_empilhar(&p5, ')');
    pilha_empilhar(&p5, '(');
    pilha_empilhar(&p5, '-');
    pilha_empilhar(&p5, '(');
    pilha_empilhar(&p5, '(');
    pilha_empilhar(&p5, '-');
    pilha_empilhar(&p5, ')');
    pilha_empilhar(&p5, ')');
    pilha_empilhar(&p5, '(');
    pilha_empilhar(&p5, '(');

    parenteses(p5);

    divider();

    return 0;
}