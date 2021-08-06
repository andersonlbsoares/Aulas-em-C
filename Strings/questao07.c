#include <stdio.h>
#include <stdlib.h>

void vogalconsoante(){
    int k=0, i=0, j, tamanho= 0;

    char frase[100];

    scanf("%[^\n]", frase);
 

    while(frase[k]!= '\0'){
        tamanho++;
        k++;
    }


    for (j = 0; j < tamanho ; j++){
        if(frase[j] == 'a' || frase[j] == 'e' || frase[j] == 'i' || frase[j] == 'o' || frase[j] == 'u') printf("v"); 
        else if(frase[j] == 'A' || frase[j] == 'E' || frase[j] == 'I' || frase[j] == 'O' || frase[j] == 'U') printf("v"); 
        else if(frase[j] == ' ') printf(" "); 
        else printf("c");
    }

    


 
}

int main(){
    vogalconsoante();
    return 0;
}