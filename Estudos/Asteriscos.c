/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    for(int i = 5; i >= 1; i--){
        for(int j = i; j < 0; j++){
            printf(" ");
        }

        for(int k = 0; k <= 5-i; k++){
            printf("*");
        }

        printf("\n");
    }


    return 0;
}

