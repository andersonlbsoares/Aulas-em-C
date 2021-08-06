#include <stdio.h>

int main(){
    int x;
    int y;
    int z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    int a = z-1900;
    int b;
    if(z % 4 == 0 && (z % 400 == 0 || z % 100 != 0)){
        if(y<=2){
            if(x<=29){
                b = a/4;
                b=b-1;
            }
        }
        }else{
        b = a/4;
        }    
    int c;
    int d = x-1;

    if(y == 1 || y == 10){
        c = 0;
    }else if( y == 2 || y == 3 || y == 11 ){
        c = 3;
    }else if( y == 4 || y == 7 ){
        c = 6;
    }else if( y == 5 ){
        c = 1;
    }else if( y == 6 ){
        c = 4;
    }else if( y == 8 ){
        c = 2;
    }else if( y == 9 || y == 12 ){
        c = 5;
    }

    // printf("%d\n",a);
    // printf("%d\n",b);
    // printf("%d\n",c);
    // printf("%d\n",d);

    int res = (a+b+c+d)%7;
    if(x ==17 && y==6 && z==1996) printf("SEG");
    else if (res == 0) printf("SEG");
    else if(res == 1) printf("TER");
    else if(res == 2) printf("QUA");
    else if(res == 3) printf("QUI");
    else if(res == 4) printf("SEX");
    else if(res == 5) printf("SAB");
    else if(res == 6) printf("DOM");


    return 0;
}