/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    float salarioBruto, salarioFinal;

    printf("Digite seu salario bruto: R$");
    scanf("%f", &salarioBruto);

    if(salarioBruto <= 350)
        salarioFinal = salarioBruto - (salarioBruto*7/100) + 100;
    else if(salarioBruto <= 600)
        salarioFinal = salarioBruto - (salarioBruto*7/100) + 75;
    else if(salarioBruto <= 900)
        salarioFinal = salarioBruto - (salarioBruto*7/100) + 50;
    else 
        salarioFinal = salarioBruto - (salarioBruto*7/100) + 35;

    printf("O salario final eh: R$%.2f\n", salarioFinal);

    return 0;
}

