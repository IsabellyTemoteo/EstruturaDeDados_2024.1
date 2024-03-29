/**
 * Isabelly Araújo Temoteo

Implemente uma função que receba uma string e substitua todas as letras por suas sucessoras no alfabeto. Por exemplo, a string "Casa"seria alterada para "Dbtb". Essa função
deve obedecer ao protótipo:
void shift_string(char *str);.
Observação: A letra z deve ser substituída pela letra a (e Z por A). Caracteres que não
forem letras devem permanecer inalterados.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 100000

void shift_string(char *str){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == 'z' || str[i] == 'Z')
            str[i] -= 25;
        else if(str[i] >= 65 || str[i] <= 89)
            str[i]++;
        else if(str[i] >= 97 || str[i] <= 121)
            str[i]++;
        i++;
    }
}

int main()
{
    char str[MAXN], c;

    printf("Digite uma string: ");
    scanf("%s", &str);

    getchar();

    shift_string(&str);

    printf("A nova string eh: %s\n", str);

    return 0;
}

