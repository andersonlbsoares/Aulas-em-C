#include<stdio.h>
 
int main(){
    int numero1;
    int numero2;
    scanf("%d", &numero1);
    scanf("%d", &numero2);

   if((numero1%3==0 && numero2%3==0)||(numero1%5==0 && numero2%5==0)) printf("sim");
   else printf("nao");

   


    return 0;
}