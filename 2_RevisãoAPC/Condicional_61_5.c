/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    int num[4];

    printf("Digite tres numeros em ordem crescente: ");
    scanf("%d%d%d", &num[0], &num[1], &num[2]);

    printf("Digite um quarto numero: ");
    scanf("%d", &num[3]);

    int save;
    for(int i = 3; i > 0; i--){
        if(num[i] < num[i-1]){
            save = num[i];
            num[i] = num[i-1];
            num[i-1] = save;
        }
    }


    printf("Em ordem: ");
    for(int i = 0; i < 4; i++){
        printf("%d ", num[i]);
    }

    printf("\n");

    return 0;
}

