/*
    Isabelly Araújo Temoteo

    Dados tres valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triangulo e, se forem, verifique se e um triangulo
    equilatero, isosceles ou escaleno. Se eles nao formarem um triangulo, escreva uma mensagem. Considere que:

    - o comprimento de cada lado de um triangulo e menor que a soma dos outros dois lados;
    – chama-se equilatero o triangulo que tem tres lados iguais;
    – denomina-se isosceles o triangulo que tem o comprimento de dois lados iguais;
    – recebe o nome de escaleno o triangulo que tem os tres lados diferentes.
    
*/

#include <stdio.h>

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