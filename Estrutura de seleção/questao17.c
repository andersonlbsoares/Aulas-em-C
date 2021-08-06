#include<stdio.h>
 
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);


    if(c>a && a>b && c>b) printf("M P G");
    if(c>b && b>a && c>a) printf("P M G");
    if(a>b && b>c && a>c) printf("G M P");
    if(a>c && c>b && a>b) printf("G P M");
    if(b>a && a>c && b>c) printf("M G P");
    if(b>c && c>a && b>a) printf("P G M");


    return 0;
}

