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

    printf("[");
    for (i = 0; i <tamanho; i++){
        printf("%c", frase[i]);
        if(i!=tamanho-1)printf("-");

    }
    printf("]");

}

int main(){
    inverter();
    return 0;
}