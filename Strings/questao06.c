#include <stdio.h>
#include <stdlib.h>

void contar(){
    int i=0, tamanho= 0, contador=0;

    char frase[100];
    scanf("%[^\n]", frase);

    char letra[2];
    scanf(" %c", letra);

    

    while(frase[i]!= '\0'){
        tamanho++;
        i++;
    }

    if (letra[0]>96)letra[1] = letra[0]-32;
    else letra[1] = letra[0]+32;
    

    for (i = 0; i < tamanho; i++){
        if(frase[i] == letra[0]) contador++;
        if(frase[i] == letra[1]) contador++;
    }
    


 
    printf("%d", contador);
}

int main(){
    contar();
    return 0;
}