/**
 * Isabelly Araújo Temoteo

Implemente uma função que receba uma string como parâmetro e substitua as ocorrências
de uma letra pelo seu oposto no alfabeto, isto é, a ↔ z, b ↔ y, etc. Caracteres que não
forem letras devem permanecer inalterados. Essa função deve obedecer ao protótipo:
void string_oposta(char *str);.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 100000

void string_oposta(char *str){
    int i = 0;
    while(str[i] != '\0'){
        str[i] = 'a' + 'z' - str[i];
        i++;
    }
}

int main()
{
    char str[MAXN], c;

    printf("Digite uma string: ");
    scanf("%s", &str);

    getchar();

    string_oposta(&str);

    printf("A nova string eh: %s\n", str);

    return 0;
}