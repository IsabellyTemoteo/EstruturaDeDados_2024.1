/**
 * Isabelly Araújo Temoteo

Desenvolver uma estrutura para representar um aluno contendo nome, idade, sexo e um
vetor com 4 notas. Inicie cada informação de um aluno e apresente-as conforme formato
abaixo:
Nome: ...
Idade: ...
Sexo: ...
Notas: n1 n2 n3 n4
No local de cada . . . deve aparecer a informação usada na inicialização. Da mesma forma,
no local de cada nota ni deverá aparecer a i-ésima nota do aluno.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    int idade;
    char sexo;
    char nome[50];
    int notas[4];

} aluno;


int main()
{
    aluno a1;
    
    a1.idade = 12;
    a1.sexo = 'F';
    strcpy(a1.nome, "Akame");
    a1.notas[0] = 7;
    a1.notas[1] = 8;
    a1.notas[2] = 9;
    a1.notas[3] = 10;

    printf("Nome: %s\nIdade: %d\nSexo: %c\nNotas: %d %d %d %d\n", a1.nome, a1.idade, a1.sexo, a1.notas[0], a1.notas[1], a1.notas[2], a1.notas[3]);


    return 0;
}

