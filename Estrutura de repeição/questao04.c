#include <stdio.h>

int main(){
    int x;
    int re=0;

    scanf("%d", &x);
    
    while (x > 0){
        re = re+x;
        x--;
    }

    printf("%d", re);
    

    

  
    return 0;
}