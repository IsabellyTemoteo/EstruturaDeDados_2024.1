/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>

int transformaEmSegundos(int h, int m, int s){
    
    int soma = h*60*60 + m*60 + s;

    return soma;
    
}

int main(){

    int h, m, s;
    printf("Digite as horas: ");
    scanf("%d", &h);
    printf("Digite os minutos: ");
    scanf("%d", &m);
    printf("Digite os segundos: ");
    scanf("%d", &s);

    printf("O total em segundos eh: %ds.\n", transformaEmSegundos(h,m,s));
    

    return 0;
}

