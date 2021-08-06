#include<stdio.h>
 
int main(){
    float numero;
    scanf("%f", &numero);

   if (numero<0){
        numero = numero *-1;
        printf("%f",numero);
   }else{
        printf("%f",numero);

   }
   


    return 0;
}