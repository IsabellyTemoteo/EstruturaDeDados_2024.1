/**
 * Isabelly Araújo Temoteo
 * 20233013000
 * 2024.1

    Faca um programa que apresente o menu de opcoes a seguir, que permita
    ao usuario escolher a opcao desejada, receba os dados necessarios para
    executar a operacao e mostre o resultado. Verifique a possibilidade de
    opcao invalida e nao se preocupe com as restricoes como salario invalido.
    Menu de opcoes:

    1. Novo salario
    2. Ferias
    3. Decimo terceiro
    4. Sair

    Digite a opcao desejada.

    Na opcao 1: receber o salario de um funcionario, calcular e mostrar o
    novo salario usando as regras a seguir:
        Ate R$ 210,00 - 15%
        De R$210,00 a R$600,00 (inclusive) - 10%
        Acima de R$ 600,00 - 5%

    Na opcao 2: receber o salario de um funcionario, calcular e mostrar o
    valor de suas ferias. Sabe-se que as ferias equivalem a seu salario acrescido
    de um terco do salario.

    Na opcao 3: receber o salario de um funcionario e o numero de meses
    de trabalho na empresa, no maximo doze, calcular e mostrar o valor do
    decimo terceiro. Sabe-se que o decimo terceiro equivale a seu salario multiplicado pelo numero de meses de trabalho dividido por 12.

    Na opcao 4: sair do programa.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(){

    int op;
    printf("=========================\n");
    printf("1. Novo Salario\n2. Ferias\n3. Decimo Terceiro\n4. Sair\n");
    printf("=========================\n");
    printf("SELECIONE UMA OPCAO: ");
    scanf("%d", &op);

    return op;
}

int main(){

    while(1){

        int op;
        op = menu();

        float salarioAtual, salarioNovo;
        switch (op){

        case 1:

            printf("Digite seu salario atual: R$");
            scanf("%f", &salarioAtual);

            if(salarioAtual < 210.00)
                salarioNovo = salarioAtual + (salarioAtual*15/100);
            else if(salarioAtual <= 600.00)
                salarioNovo = salarioAtual + (salarioAtual*10/100);
            else    
                salarioNovo = salarioAtual + (salarioAtual*5/100);

            printf("Seu novo salario eh: R$%.2f\n", salarioNovo);

            break;

        case 2:

            printf("Digite seu salario atual: R$");
            scanf("%f", &salarioAtual);

            salarioNovo = salarioAtual + (salarioAtual/3);

            printf("O valor de suas ferias eh de: R$%.2f\n", salarioNovo);

            break;

        case 3:

            printf("Digite seu salario atual: R$");
            scanf("%f", &salarioAtual); 

            int mesesTrabalhados;
            printf("Digite o numero de meses trabalhados: ");
            scanf("%d", &mesesTrabalhados);

            salarioNovo = salarioAtual * mesesTrabalhados / 12;

            printf("O valor de seu decimo terceiro eh de: R$%.2f\n", salarioNovo);

            break;

        case 4:
            printf("Obrigada por utilizar nosso programa!\n");
            return 0;
            
            break;
        
        default:

            printf("Opcao nao encontrada. Tente novamente.\n");

            break;

        }

        printf("=========================\n\n\n");



    }


    return 0;
}

