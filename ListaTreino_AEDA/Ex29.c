/**
 * Isabelly Araújo Temoteo

Desenvolva um programa para criar um círculo. Atribua a suas coordenados um valor
real no intervalo [-20, 20] e para o raio um valor no intervalo ]0, 10]. Utilize as funções
implementadas nos exercícios 25, 26 e 27 para apresentar as informações do círculo, sua
área e seu perímetro.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct circulo{
    int x, y;
    int raio;
} circulo;

void preencher_circulo(circulo *c){
    (*c).x = -20 + rand() % 41;
    (*c).y = -20 + rand() % 41;
    (*c).raio = 1 + rand() % 10;
}

void apresentar_circulo(circulo c){
    printf("<(%d, %d), %d>\n", c.x, c.y, c.raio);
}

int calcular_area(circulo c){
    return 3.14 * c.raio * c.raio;
}

int calcular_perimetro(circulo c){
    return 2 * 3.14 * c.raio;
}

void mover_circulo(circulo *c){
    printf("Digite o novo valor de x: ");
    scanf("%d", &(*c).x);

    printf("Digite o novo valor de y: ");
    scanf("%d", &(*c).y);
}


int main()
{
    srand(time(NULL));

    circulo c1, c2;
    
    preencher_circulo(&c1);
    preencher_circulo(&c2);

    apresentar_circulo(c1);
    printf("A area eh: %d\n", calcular_area(c1));
    printf("O perimetro eh: %d\n", calcular_perimetro(c1));

    printf("\n");

    apresentar_circulo(c2);
    printf("A area eh: %d\n", calcular_area(c2));
    printf("O perimetro eh: %d\n\n", calcular_perimetro(c2));

    mover_circulo(&c1);
    printf("\n");
    apresentar_circulo(c1);

    printf("\n");

    return 0;
}

