#include<stdio.h>
 
int main(){
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int resposta=0;
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);
    scanf("%d", &numero4);

   if(resposta<numero1) resposta = numero1;
   if(resposta<numero2) resposta = numero2;
   if(resposta<numero3) resposta = numero3;
   if(resposta<numero4) resposta = numero4;
   printf("%d", resposta);
   


    return 0;
}