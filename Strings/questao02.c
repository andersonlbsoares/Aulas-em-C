#include <stdio.h>
#include <stdlib.h>

void inverter(){
    int i=0, tamanho= 0;

    char frase[100];
    scanf("%[^\n]", frase);

    

    while(frase[i]!= '\0'){
        tamanho++;
        i++;
    }

    for (i = tamanho; i >= 0; i--){
        printf("%c", frase[i]);

    }
}

int main(){
    inverter();
    return 0;
}