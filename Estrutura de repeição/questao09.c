#include <stdio.h>

int main(){
    int temp=1;
    int re = 0;
    int n;
    int x=0;
    scanf("%d", &n);



        while (temp<=n){
            if (x%3==0 && x%7!=0){
                re = re + x;
                // printf("%d \n", x);
                temp++;
                x++;
            }else{
                x++;
            }
        }
                printf("%d \n", re);
    
    
    return 0;
}