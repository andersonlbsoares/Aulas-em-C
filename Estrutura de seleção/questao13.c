#include<stdio.h>
 
int main(){
    float G;
    float A;
    scanf("%f", &G);
    scanf("%f", &A);
    float B = (A/100)*30;
    A = A+B;

    if (A>G) printf("Gasolina");
    else printf("Alcool");

   


    return 0;
}