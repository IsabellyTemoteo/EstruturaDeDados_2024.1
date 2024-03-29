/**
 * Isabelly Araújo Temoteo

Desenvolver uma estrutura para representar um quadrado no R^2. Utilize o comando
typedef para oferecer um sinônimo (apelido) para a estrutura. Implemente uma função
para calcular a área do quadrado e outra para seu perímetro. Desenvolva um programa
para criar um quadrado, atribuir a ele valores e apresente na tela sua área e seu perímetro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct quadrado{
    int base;
} quadrado;

int area_quadrado(quadrado q){
    return q.base * q.base;
}

int perimetro_quadrado(quadrado q){
    return q.base * 4;
}


int main()
{
    quadrado q1;

    q1.base = 8;

    printf("O quadrado eh: %d\n", q1.base);
    printf("O perimetro eh: %d\n", perimetro_quadrado(q1));
    printf("A area eh: %d\n", area_quadrado(q1));


    return 0;
}

