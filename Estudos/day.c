/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menormaior(int *M, int *m,int *vetor){
    int tam = sizeof(vetor)/sizeof(vetor[0]);
    *M=vetor[0];
    for(int i=0; i<=tam;i++){
        if(M<vetor[i]){
            *M=vetor[i];
        }
        if(m>vetor[i]){
            *m=vetor[i];
        }
    }
}

int main()
{
    int M, m;
 int vetor[]={2,9,8,10,1,3}
 menormaior(&M,&m, vetor);
 p
    return 0;
}

