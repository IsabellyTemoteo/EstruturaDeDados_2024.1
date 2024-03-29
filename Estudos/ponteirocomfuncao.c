/**
 * Isabelly Araújo Temoteo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void soma(int a, int b, int *s){
    *s=a+b;
}

int main()
{
int r=2;
int s;
int f=6;
soma(r,f,&s);

printf("%d",s);


    return 0;
}

