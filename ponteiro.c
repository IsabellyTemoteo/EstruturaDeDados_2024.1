#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TAMANHO 2

typedef struct circulo{
    int x, y;
} circulo;

int soma_ (int tam, int *vetor){
    int s = 0;
    for(int i = 0; i <= tam; i++){
        s += vetor[i];
    }

    return s;
}

int exponencial(int a, int b){
    if(b == 0)
        return 1;
    return a * exponencial(a, b-1);
}

void soma_circulo(circulo *c, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d\n", c[i].x + c[i].y);
        c[i].x = c[i].x+c[i].y;
        printf("x: %d\n\n");
    }

    printf("\n");
}



int main()
{   

   printf("%d\n\n", exponencial(2, 3));


    circulo c[MAX_TAMANHO];

    c[0].x = 2;
    c[0].y = 2;

    c[1].x = 4;
    c[1].y = 6;

    soma_circulo(c, MAX_TAMANHO);



    int x,y;
    int soma = 0;

    int vetor[4] = {1,2,3,4};

    soma_(4, vetor);

    printf("%d", soma_(4, vetor));


    return 0;
}

