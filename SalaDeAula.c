/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int esp(int a, int b){
    if( b == 0)
        return 1;
    return a * esp(a, b-1);
}


int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int e = esp(a, b);
    printf("%d\n", e);

    return 0;
}

