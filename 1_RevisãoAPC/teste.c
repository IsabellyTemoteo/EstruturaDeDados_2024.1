/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    float salario;
    float horas;
    printf ("Digite o numero de horas trabalhadas");
    scanf("%f",&horas);
    printf("Digite o salario minimo");
    scanf("%f",&salario);
    float salarioB;
    salarioB =horas*(salario/2);
    salarioB=salarioB - (3*salarioB/100);
    printf("o salario e %f", salarioB);


    return 0;
}

