#include <stdio.h>

int main(){
    float quantidade;
    int x;
    float soma = 0;

    scanf("%f", &quantidade);
    
    for (int i = 0; i < quantidade; i++){
        scanf("%d", &x);
        soma += x;

        
    }

    printf("%f", soma/quantidade);
    

    

  
    return 0;
}