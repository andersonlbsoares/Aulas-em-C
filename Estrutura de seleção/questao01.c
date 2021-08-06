#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    int total = a+b+c+d;
    int tot4 = total%4;
    int tot3 = total%3;
    int tot2 = total%2;
    if(total == 0){
        printf("nenhum\n");
    }else if (tot4 == 0){
        printf("jog4\n");   
    }else if (tot3 == 0){
        printf("jog3\n");
    }else if(tot2 == 0){
        printf("jog2\n");
    }else{
        printf("jog1\n");
    }

    
    
    return 0;
}