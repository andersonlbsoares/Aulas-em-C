#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float xa = 0;
    float ya = 0;
    float xb = 0;
    float yb = 0;
    scanf("%f", &xa);
    scanf("%f", &ya);
    scanf("%f", &xb);
    scanf("%f", &yb);
    
    float final = sqrt(pow((xb-xa),2) + pow((yb-ya),2));
    printf("%.2f\n", final);
    
    
    return 0;
}