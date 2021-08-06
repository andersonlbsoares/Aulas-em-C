#include <stdio.h>

int main(){
    int a;

    scanf("%d", &a);

    if(a%3 == 0 && a%5 == 0 && a%7 != 0 ){
        printf("sim");
    }else{
        printf("nao");
    }
    return 0;
}