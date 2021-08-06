#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float c = 0;
    int b = 0;
    int g = 0;
    int m = 0;
    scanf("%f", &c);
    scanf("%d", &b);
    scanf("%d", &g);
    scanf("%d", &m);
    
    float total = b+g+m;

    float ct = total/c;
    
    int totali = total;
    int ci = c;
    int cti = totali/ci;

    if (c > total){
        printf("1\n");
    }else if (ct!=cti)
    {
        // printf("dif");
        printf("%d\n", cti+1);
    }else{
        // printf("igual");
        printf("%.0f\n", ct);
    }
    
    return 0;
}