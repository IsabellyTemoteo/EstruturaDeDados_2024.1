#define TamMax 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void MenuPrincipal(){
printf("1-Soma de intervalos\n");
printf("2-Soma de fracoes\n");
printf("3-campo minado \n");
printf("4-controle de disco\n");
printf("5-fazenda lanchonete\n");
printf("6-vai embora \n");

}
int F1(){
int x;
int y;
printf("digite o valor de x\n");
scanf("%d", &x);
printf("digite o valor de y\n");
scanf("%d", &y);
int i;
int soma=0; 

for(i=x;i<=y;i++){
    if(i%13!=0){
        soma+=i;
    }
  
}
  printf("a soma e igual: %d\n ",soma); 

return soma;
}
int F2(){
 int n;
 printf("digite um numero:\n");
 scanf("%d", &n);
 int i;
 float soma2=0;  
 for(i=1;i<=n; i++){
    soma2+=(1/(float)i);
 }
 printf("a soma e: %f\n", soma2);
 return soma2; 
}
   void F4()

int main()
{

while(1){
    MenuPrincipal();
    int op;
    scanf("%d", &op);

    switch (op){
        case 1: 
            F1();
        break;
        case 2:
            F2();
        break;
    }

  return 0;
  
}

    return 0;
}

