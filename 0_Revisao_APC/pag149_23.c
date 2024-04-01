/**
 * Isabelly Araújo Temoteo
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

