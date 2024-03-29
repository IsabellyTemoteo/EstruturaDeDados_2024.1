/**
 * Isabelly Araújo Temoteo

Implemente uma função que receba uma string como parâmetro e desloque os seus caracteres uma posição para a direita. Por exemplo, a string "casa"seria substituída para "acas".
Repare que o último caractere vai para o início da string. Essa função deve obedecer ao
protótipo:
void roda_string(char *str);.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 100000

void roda_string(char *str){
    int i = 1;

    while(str[i] != '\0'){
        i++;
    }

    char save = str[i-1];

    for(int j = i-1; j > 0; j--){
        str[j] = str[j-1];
    }

    str[0] = save;

}

int main()
{
    char str[MAXN];

    printf("Digite uma string: ");
    scanf("%s", &str);

    getchar();

    roda_string(str);

    printf("A nova string eh: %s\n", str);

    return 0;
}

