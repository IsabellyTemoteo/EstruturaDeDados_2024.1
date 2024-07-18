#include "atleta.h"
#include "fila_dinamica.h"
#include <stdio.h>

void divider(){
    printf("\n===================\n\n");
}

int main(){
    // ===========================

    Fila f;

    divider();

    printf("Iniciando fila:\n\n");
    iniciaFila(&f);

    divider();
    
    // ===========================

    printf("\nAdicionando atletas:\n\n");
    Atleta a1;
    inicializa(&a1);
    correr(&a1);
    correr(&a1);
    correr(&a1);
    correr(&a1);
    correr(&a1);
    correr(&a1);
    correr(&a1);
    correr(&a1);
    correr(&a1);
    correr(&a1);
    correr(&a1);
    correr(&a1);
    descansar(&a1);
    insereFila(&f, a1);

    divider();

    Atleta a2;
    inicializa(&a2);
    correr(&a2);
    correr(&a2);
    descansar(&a2);
    descansar(&a2);
    descansar(&a2);
    insereFila(&f, a2);

    divider();

    Atleta a3;
    inicializa(&a3);
    correr(&a3);
    descansar(&a1);
    insereFila(&f, a3);

    divider();

    mostraFila(f);

    // ===========================
    
    printf("Removendo elementos:\n");

    removeFila(&f);

    divider();

    printf("Pos remocao:\n\n");

    mostraFila(f);

    divider();

    // ===========================


    return 0;
}