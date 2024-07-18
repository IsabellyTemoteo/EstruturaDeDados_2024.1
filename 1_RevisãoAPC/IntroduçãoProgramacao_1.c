/**
 * Isabelly Araújo Temoteo
 * 2024.1

Faça um programa que receba o número de horas trabalhadas e o valor do
salário mínimo, calcule e mostre o salário a receber, seguindo estas regras:
– a hora trabalhada vale a metade do salário mínimo.
– o salário bruto equivale ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada.
– o imposto equivale a 3% do salário bruto.
– o salário a receber equivale ao salário bruto menos o imposto.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    float horas, salariominimo;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o valor do salario minimo: R$");
    scanf("%f", &salariominimo);

    float salario = (horas*(salariominimo/2)) - (3*(horas*salariominimo/2))/100;

    printf("O seu salario e: R$%.2f", salario);

    return 0;
}

