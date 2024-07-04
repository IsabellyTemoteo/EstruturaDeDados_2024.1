/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Ponto.h"

int main()
{

    Ponto p;
    p.x = 4.0;
    p.y = 6.5;

    float dx = 2.0, dy = 1.0;

    desloca(&p, dx, dy);

    printf("\nX:%f Y:%f\n\n", p.x, p.y);

    float nx, ny;
    printf("Digite o valor de x: ");
    scanf("%f", &nx);
    printf("Digite o valor de y: ");
    scanf("%f", &ny);

    mover_origem(&p, nx, ny);
    printf("\nX:%f Y:%f\n\n", p.x, p.y);



    return 0;
}
