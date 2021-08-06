#include <stdio.h>

int main(){
   int a;
   int b;
   int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

if(a == 1) printf("NAO\n");

if(a>=2 && a<7){
    if( (b>7) && (b<12) || (b>13) && (b<18) ){
        if( (c>=0) && (c<=59) ) printf("SIM\n");
        else printf("NAO\n");
    }else{
        printf("NAO\n");
    }
}
if (a == 7){
    if( (b>7) && (b<12)){
        if( (c>=0) && (c<=59) ) printf("SIM\n");
        else printf("NAO\n");    
    }else printf("NAO\n");

}
    
    
    return 0;
}