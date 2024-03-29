/**
 * Isabelly Araújo Temoteo

Desenvolver uma estrutura para representar um círculo no R^2. Utilize o comando typedef
para oferecer um sinônimo (apelido) para a estrutura. Desenvolva um programa para criar
dois círculos, atribuir a eles valores para o par ordenado que representa o centro do círculo
e um valor para o raio. Apresente na tela os dados dos círculos usando o seguinte formato:
<(x, y) raio>. Apresente cada círculo em uma linha.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct circulo{
    int x, y;
    int raio;
} circulo;


int main()
{
    circulo c1, c2;
    c1.x = 2;
    c1.y = 3;
    c1.raio = 4;

    c2.x = 4;
    c2.y = 5;
    c2.raio = 6;

    printf("<(%d, %d), %d>\n", c1.x, c1.y, c1.raio);
    printf("<(%d, %d), %d>\n", c2.x, c2.y, c2.raio);

    return 0;
}

