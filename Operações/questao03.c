#include <stdio.h>
#include <stdlib.h>

void main(){
    float a,b;

    scanf("%f", &a);
    scanf("%f", &b);
    float c = a+b;
    float d = a-b;
    float e = a*b;
    float f = a/b;
    int aa = a;
    int bb = b;
    int g = aa % bb;
    printf ("%.0f\n",c);
    printf ("%.0f\n",d);
    printf ("%.0f\n",e);
    printf ("%.2f\n",f);
    printf ("%d\n",g);
    

}