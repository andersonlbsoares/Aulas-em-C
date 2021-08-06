#include <stdio.h>

int main(){
    int a;
    int x;

    scanf("%d", &a);
        
    if(a>100){
        x = a-100;
        x = x*5;
        x = x+167;
        printf("R$ %d", x);
    }
    
    if(a>30 && a<101){
        x = a-30;
        x = x*2;
        x = x+27;
        printf("R$ %d", x);
    }

    if(a>10 && a<31){
        x = a-10;
        x = x*1;
        x = x+7;
        printf("R$ %d", x);
    }

    if(a<7){
        printf("R$ %d", 7);
    }
    
    
    
    return 0;
}