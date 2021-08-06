#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
        
    if(a == b && b == c) printf("3");
    if(a == b && b != c) printf("2");
    if(a == c && a != b) printf("2");
    if(b == c && a != c) printf("2");
    if(a != b && a != c && c!=b) printf("1");
    
    
    return 0;
}