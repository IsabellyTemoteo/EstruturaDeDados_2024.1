/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    float altura;
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    char sexo;
    printf("Digite 'f' para feminino e 'm' para masculino: ");
    scanf(" %c", &sexo);

    float peso;
    printf("Seu peso ideal eh: ");
    if(sexo == 'm')
        peso = (72.2 * altura) - 58;
    else    
        peso = (62.1 * altura) - 44.7;

    printf("%.2f kg.\n", peso);

    return 0;
}

