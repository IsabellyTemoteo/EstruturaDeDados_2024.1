/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int x, y, z;

    printf("Digite as medidas x, y e z, respectivamente: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if ((x + y > z) && (y + z > x) && (z + x > y)) {
        if (x == y && y == z)
            printf("Voce criou um triangulo equilatero!\n");
        else if (x != z && z != y && x != y)
            printf("Voce criou um triangulo escaleno!\n");
        else
            printf("Voce criou um triangulo isosceles!\n");
    } 
    
    else {
        printf("Medidas invalidas. Triangulo nao foi criado.\n");
    }

    return 0;
}