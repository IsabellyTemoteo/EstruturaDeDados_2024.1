/**
 * Isabelly Araújo Temoteo

Implemente uma função que receba uma string e um caractere e retorne como resultado o
número de ocorrências desse caractere na string. Essa função deve obedecer ao protótipo:
int conta_char(char *str, char c);.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 100000

int conta_char(char *str, char c){
    int i = 0, soma = 0;
    while(str[i] != '\0'){
        if(str[i] == c)
            soma++;
        i++;
    }
    return soma;
}

int main()
{
    char str[MAXCHAR], c;

    printf("Digite uma string: ");
    scanf("%s", &str);

    getchar();

    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("A quantidade de caracteres '%c' eh: %d\n", c, conta_char(str, c));


    return 0;
}

