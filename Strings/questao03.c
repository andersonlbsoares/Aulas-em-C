#include <stdio.h>
#include <stdlib.h>

void separar(){
    int k=0, i=0, j, tamanho= 0;

    char frase[100];
    char vogais[100];
    char consoantes[100];
    scanf("%[^\n]", frase);

    for (i = 0; i < 100; i++){
        vogais[i] = '0';
        consoantes[i] = '0';
    }
      

    while(frase[k]!= '\0'){
        tamanho++;
        k++;
    }

    // printf("%d", tamanho);
    for (j = 0; j < tamanho ; j++){
        if(frase[j] == 'a' || frase[j] == 'e' || frase[j] == 'i' || frase[j] == 'o' || frase[j] == 'u') vogais[j] = frase[j]; 
        else consoantes[j] = frase[j];
    }

    for (i = 0; i < tamanho; i++){
        if(vogais[i]!='0') printf("%c", vogais[i]); 
    }
    
    printf("\n");

    for (i = 0; i < tamanho; i++){
        if(consoantes[i]!='0'&&consoantes[i]!=' ') printf("%c", consoantes[i]); 
    }
    


 
}

int main(){
    separar();
    return 0;
}