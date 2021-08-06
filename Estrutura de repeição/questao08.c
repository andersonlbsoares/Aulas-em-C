#include <stdio.h>

int main(){
    int n;
    int re = 0;
    scanf("%d", &n);

    if (n<3){
        printf("0");
    }else{
        while (n>=3){
            re = re+n+2;
            n--;
        }
        printf("%d", re);
        
    }
    
    
    return 0;
}