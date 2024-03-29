/**
 * Isabelly Araújo Temoteo

(JOGO) Crie um programa em C que sorteia um número entre 1 e 100. Um jogador
(você ou outra pessoa) tenta adivinhar o número sorteado. Uma mensagem na tela deve
ser apresentada ao usuário, solicitando-o um palpite entre 1 e 100. Para cada palpite, o
programa deve informar se o palpite é maior, menor ou igual ao número sorteado. Caso
seja igual, o jogo termina e o jogador vence. Caso contrário, o jogador faz um novo palpite
para tentar acertar o número sorteado. Um jogador tem direito a fazer 10 palpites. Caso
ele não acerte o número nesses 10 palpites, o computador ganha o jogo.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{   
    printf("Minigame: TENTE ADIVINHAR O NUMERO\n\n");
    
    srand(time(NULL));
    int num_aleatorio = 1 + rand() % 100;

    int tentativas = 0;
    while(1){
        int palpite;
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if(palpite == num_aleatorio){
            printf("\nParabennnns! Voce adivinhou o numero!");
            return 0;
        }

        if(palpite > num_aleatorio)
            printf("O numero eh menor que esse!\n\n");
        
        else if(palpite < num_aleatorio)
            printf("O numero eh maior que esse!\n\n");

        tentativas++;

        if(tentativas == 10){
            printf("Limite de tentativas atingido! O computador venceu o jogo!");
            return 0;
        }
        else printf("Restam %d tentativas\n\n", 10-tentativas );

    }

    return 0;
}

