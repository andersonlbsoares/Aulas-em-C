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

    for (i = 0; i <tamanho; i++){
        if(frase[i]>64 && frase[i]<91) frase[i]=frase[i]+32;
        if(frase[i]>96 && frase[i]<123) frase[i]=frase[i]-32;

    }

    for (i = 0; i <tamanho; i++){
        printf("%c", frase[i]);

    }

}

int main(){
    inverter();
    return 0;
}