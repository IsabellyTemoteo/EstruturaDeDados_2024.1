/**
 * Isabelly Araújo Temoteo

Escreva uma função denominada primo que recebe como parâmetro um inteiro m e dois
outros parâmetros primo_menor e primo_maior passados por referência. A função deve
retornar em primo_menor o maior número primo que é menor do que m e deve retornar
em primo_maior o menor número primo que é maior do que m. Crie um programa para
testar a função criada.

*/

#include <stdlib.h>
#include <stdio.h>

int ehPrimo(int n){
    int resultado = 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            resultado++;
            break;
        }
    }

    if(resultado != 0) return 0;
    else return 1;
}

void primo(int *maior, int *menor, int m){
    
    int ok = 1;
    for(int i = m; i > 0; i--){
        if(i != m && ehPrimo(i) == 1){
            ok = 0;
            *menor = i;
            break;
        }
    }

    if(ok == 1) *menor = 0;

    int i = m;
    while(1){
        i++;
        if(i != 0 && i != m && ehPrimo(i) == 1) break;
    }

    *maior = i;

}

int main(){
    int menor, maior, m;
    printf("Digite o valor de m: ");
    scanf("%d", &m);

    primo(&maior, &menor, m);

    printf("Maior primo menor que m: %d\n", menor);
    printf("Menor primo maior que m: %d\n", maior);

    return 0;
}
