/**
 * Isabelly Araújo Temoteo

Implemente uma função para apresentar as coordenadas de um círculo usando o formato
<(x, y) raio>.
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
    apresentar_circulo(c2);

    return 0;
}

