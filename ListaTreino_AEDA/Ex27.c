/**
 * Isabelly Araújo Temoteo

Implemente uma função para calcular o perímetro de um círculo, definido conforme a
especificação do exercício 31.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct circulo{
    int x, y;
    int raio;
} circulo;

void apresentar_circulo(circulo c){
    printf("<(%d, %d), %d>\n", c.x, c.y, c.raio);
}

int calcular_area(circulo c){
    return 3.14 * c.raio * c.raio;
}

int calcular_perimetro(circulo c){
    return 2 * 3.14 * c.raio;
}


int main()
{
    circulo c1, c2;
    c1.x = 2;
    c1.y = 3;
    c1.raio = 4;

    c2.x = 4;
    c2.y = 5;
    c2.raio = 6;

    apresentar_circulo(c1);
    printf("A area eh: %d\n", calcular_area(c1));
    printf("O perimetro eh: %d\n", calcular_perimetro(c1));

    printf("\n");

    apresentar_circulo(c2);
    printf("A area eh: %d\n", calcular_area(c2));
    printf("O perimetro eh: %d\n", calcular_perimetro(c2));

    return 0;
}

