#include <stdio.h>


int main(){
    
    int a = 0;
    int b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    if ((a+b) % 2 == 0){
        printf("1\n");
    }else{
        printf("0\n");
    }



    return 0;
}