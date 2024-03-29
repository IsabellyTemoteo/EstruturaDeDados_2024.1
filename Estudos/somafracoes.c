/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i;
    float s=0;

    printf("digite o numero de termos");
    scanf("%d",&i);
     for(int j=1;j<=i;j++){
        if(j%2==0){
          s-=1/(float)j;
        }
        else{
            s+=1/(float)j;
        }
        
     }
     printf("o seu resultado e %.2f",s);



    return 0;
}

