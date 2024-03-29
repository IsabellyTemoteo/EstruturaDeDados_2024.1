/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int anoNascimento, anoAtual;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Sua idade em anos: %d\n", anoAtual-anoNascimento);
    printf("Sua idade em meses: %d\n", (anoAtual-anoNascimento) * 12);
    printf("Sua idade em dias: %d\n", ((anoAtual-anoNascimento) * 12) * 365);
    printf("Sua idade em semanas: %d\n", ((anoAtual-anoNascimento) * 12) * 4);

    return 0;
}

