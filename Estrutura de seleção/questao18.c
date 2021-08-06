#include <stdio.h>

int main(){
   int a;
   int b;
   int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a+b<=c) printf("invalido");
    else if(a+c<=b) printf("invalido\n");
    else if(b+a<=c) printf("invalido\n");
    else if(b+c<=a) printf("invalido\n");
    else if(b+c<=a) printf("invalido\n");
    else if(a!=b && b!=c && a!=c) printf("escaleno\n");
    else if(a==b && b==c) printf("equilatero\n");
    else if(a==b && a!=c) printf("isosceles\n");
    else if(a==c && a!=b) printf("isosceles\n");
    else if(b==c && b!=a) printf("isosceles\n");
    else if(b==a && b!=c) printf("isosceles\n");
    
    return 0;
}