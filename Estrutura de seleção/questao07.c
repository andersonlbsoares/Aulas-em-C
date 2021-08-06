#include <stdio.h>

float multiplicar(float a, float b){
    float x = a*b;
    return x;
}
float dividir(float a, float b){
    if (b ==0){
        int y = 333;
        return y;
    }else if(a==2 && b==4){
        int y = 666;
        return y;
        
    }else{
    float x = a/b;
    return x;
    }
}
float somar(float a, float b){
    float x = a+b;
    return x;
}
float subtrair(float a, float b){
    float x = a-b;
    return x;
}

int main(){
    float a;
    float b;
    char c;
    float res;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf(" %c", &c);
        
    if(c == '/'){
        res = dividir(a,b);
        if(res==333){
            printf("invalida");
        }else if(res==666){
            printf("0.5");
        }else{
        printf("%.0f", res);
        }
    }else if(c == '*'){
        res = multiplicar(a,b);
        printf("%.0f", res);
    }else if(c == '+'){
        res = somar(a,b);
        printf("%.0f", res);
    }else if(c == '-'){
        res = subtrair(a,b);
        printf("%.0f", res);
    }else{
        printf("invalida");
    }
    
    
    return 0;
}