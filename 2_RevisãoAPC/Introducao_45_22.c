/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    float salariominimo, kw;
    printf("Digite o valor do salario minimo: R$");
    scanf("%f", &salariominimo);

    printf("Digite a quantidade de kw: "); 
    scanf("%f", &kw);

    float valorKw = salariominimo/5;
    float valorPago = valorKw * kw;
    float valorComDesconto = valorPago - 15 * valorPago /100;

    printf("\n=============================================\n");
    printf("Valor do kw: %.2f\n", valorKw);
    printf("Valor a ser pago: R$%.2f\n", valorPago);
    printf("Valor com desconto: R$%.2f\n", valorComDesconto);
    printf("=============================================\n\n");

    return 0;
}

