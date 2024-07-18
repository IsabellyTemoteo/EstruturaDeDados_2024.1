#include <stdio.h>
#include "atleta.h"

void correr(Atleta *a) {
    if (a->cansaco <= 10) {
        a->cansaco += 1;
        printf("Corrida realizada com sucesso!\n\n");
    } else {
        printf("Atleta se encontra cansado no momento. Descance.\n\n");
    }
}

void descansar(Atleta *a) {
    if (a->cansaco == 0) {
        printf("Atleta nao necessita de descanso no momento.\n\n");
    } else {
        a->cansaco -= 1;
        printf("Descanso realizado! Cansaco atual: %d\n\n", a->cansaco);
    }
}

void inicializa(Atleta *a) {
    printf("Digite o nome do atleta: ");
    scanf("%49s", a->nome); 

    printf("Digite o peso do atleta: ");
    scanf("%f", &a->peso);

    printf("Digite a altura do atleta: ");
    scanf("%f", &a->altura);

    printf("Digite a idade do atleta: ");
    scanf("%d", &a->idade);

    printf("Digite o cpf do atleta: ");
    scanf("%d", &a->cpf);
    
    a->cansaco = 0;

    printf("\nAtleta criado com sucesso!\n\n");
}

void printAtleta(Atleta a) {
    printf("\nNome: %s\nPeso: %.2fkg\nAltura: %.2fm\nIdade: %d anos\nCPF: %d\nCansaco: %d\n\n", 
           a.nome, a.peso, a.altura, a.idade, a.cpf, a.cansaco);
}
