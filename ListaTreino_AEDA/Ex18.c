/**
 * Isabelly Araújo Temoteo

Implemente uma função que receba uma string como parâmetro e retorno como resultado
o número de vogais nessa string. Essa função deve obedecer ao protótipo:
int conta_vogais(char *str);.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_vogais(char *str){
    int i = 0, soma = 0;

    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'E' || str[i] == 'e' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
           soma++; 
        i++;
    }
    return soma;
}

int main()
{
    char str[] = "palavracantadaaeiouAAei";

    printf("A palavra eh: %s\nO numero de vogais eh: %d\n", str, conta_vogais(str));

    return 0;
}

