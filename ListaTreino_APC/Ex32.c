/**
 * Isabelly Araújo Temoteo

Implemente uma função para calcular a média das notas de um aluno. Desenvolva um
programa para criar um aluno. Solicite ao usuário os dados do aluno e suas notas no
intervalo [1, 10]. Calcule a média usando a função criada e mostre-a na tela.

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

float media_notas(aluno a){
    return (a.notas[0] + a.notas[1] + a.notas[2] + a.notas[3]) / 4;
}

int main()
{
    aluno a;

    printf("Crie seu aluno!\n");

    printf("Digite o nome: ");
    scanf("%s", &a.nome);
    getchar();

    printf("Digite a idade: ");
    scanf("%d", &a.idade);
    getchar();

    printf("Digite o sexo 'M' ou 'F': ");
    scanf("%c", &a.sexo);
    getchar();

    printf("Digite as 4 notas [De 0 - 100]: \n");
    for(int i = 0; i < 4; i++){
        printf("%d: ", i+1);
        scanf("%d", &a.notas[i]);
    }

    printf("A media das notas eh: %f\n", media_notas(a));

    return 0;
}

