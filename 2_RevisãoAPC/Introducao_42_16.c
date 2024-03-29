/**
 * Isabelly Araújo Temoteo
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