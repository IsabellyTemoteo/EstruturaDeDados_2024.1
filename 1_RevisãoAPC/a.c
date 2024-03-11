/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
 int x;
 int soma = 0;
 int q = 0;
 float m = 0;
 int maior; 
 int menor;
 int p=0;
 float pares;
 float mediap;
 int i=0;
 float pi;


 int ok = 0;
 while (1){
    scanf("%d", &x);

    if(x == 30000)
        break;

    if(ok == 0){
        maior = x;
        menor = x;
        ok = 1;
    }

        if (x>maior)
         maior=x; 
         
         if(x<menor)
         menor=x;
         
         if(x%2==0){
         p++;
        pares+=x; 
         }
            else
            i++;

    soma += x;
    q++;
 }
   m= soma/q; 
   mediap=pares/p;

    pi=(i*100)/q;

printf("a soma dos numeros digitados e %d",soma);
printf ("a quantidade de numeros digitados %d",q);
printf("a media dos numeros digitados %f", m);
printf ("o maior numero digitado %d", maior);
printf ("o menor numero digitado %d", menor);
printf ("a media dos numeros pares %f", mediap);
printf ("a porcentagem dos numeros impares entre todos os numeros digitados:%f", pi);



   

    return 0;
}

