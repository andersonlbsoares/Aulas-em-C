#include <stdio.h>

int main(){
    int x=0;
    int soma_pares=0;
    int contador=0;

    do{
        scanf("%d",&x);
        if(x%2==0){
            soma_pares += x;
            contador++;
        }   
    }while(x%2==0);
    printf("%d",soma_pares);
  
    return 0;
}