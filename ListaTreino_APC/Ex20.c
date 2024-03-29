/**
 * Isabelly Araújo Temoteo

Implemente uma função que receba uma string e altere nela as ocorrências de caracteres
maiúsculos para minúsculos. Essa função deve obedecer ao protótipo:
void minusculo(char *str);.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 100000

void minusculo(char *str){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] <= 90 && str[i] >= 65) 
            str[i] += 32;
        i++;
    }
}


int main()
{
    char str[MAXCHAR], c;

    printf("Digite uma string: ");
    scanf("%s", &str);

    getchar();

    minusculo(&str);

    printf("A string agora eh: %s", str);

    return 0;
}

