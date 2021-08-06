#include <stdio.h>

int main(){
    int qntd=0;
    int x=0;
    int soma=0;
    int i=0;

    scanf("%d", &qntd);
    while (i<qntd){
        scanf("%d", &x);
        soma+=x;
        i++;
    }
    

    printf("%d",soma);
  
    return 0;
}