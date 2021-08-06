#include<stdio.h>
 
int primo(int num) {
 int i;
 int resultado = 0;
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }

 if (resultado == 0) return num;
 else return 0;
 
}

int main(){
    int numero;
    int re=0;
    scanf("%d", &numero);

    while(numero>=1){
        int res = primo(numero);
        re = re + res;
        numero--;

    }
        if (re == 0) printf("0");
        else printf("%d\n", re-1);


    return 0;
}