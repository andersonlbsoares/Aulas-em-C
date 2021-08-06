#include <stdio.h>


int main(){
    
    int a = 0;

    scanf("%d", &a);
    int numerodepecas = ((a+1)*(a+2))/2;
    printf("%d\n", numerodepecas);

    return 0;
}