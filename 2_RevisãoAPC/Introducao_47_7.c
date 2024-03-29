/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    
    float peso;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Caso engorde: %.2f Kg\nCaso emagrecer: %.2f Kg\n", (peso + peso*15/100), (peso - peso*20/100));


    return 0;
}

