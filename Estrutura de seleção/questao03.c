#include <stdio.h>


int main(){
    
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d", &d);
    scanf("%d", &a);
    scanf("%d", &b);

    c = d-a-b;

    if (a>b && a>c){
        printf("%d\n", a);
    }else if(b>a && b>c){
        printf("%d\n", b);
    }else{
        printf("%d\n", c);
    }

    
    return 0;
}