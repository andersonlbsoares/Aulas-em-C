#include <stdio.h>
#include <stdlib.h>

void separar(){
    int m=0, l=0, k=0, i=0, j, tamanho= 0, tamanho2=0;

    int vetor[100];
    char frase[100];

    for (i = 0; i < 100; i++){
        vetor[i] = 2;
    }
    
    scanf("%[^\n]", frase);
    
    for (i = 0; i < 100; i++){
        if(frase[i]==' ') break;
        printf("%c", frase[i]);
    }
    
    printf(" ");

    for (i = 0; i < 100; i++){
        if(frase[i]==' ') break;
        printf("%c", frase[i]);
    }

    while(frase[k]!= '\0'){
        tamanho++;
        k++;
    }

    for (i = 0; i < tamanho; i++){
        if(frase[i] == ' ') vetor[i] = i; 
    }

    for (i = 0; i < 100; i++){
        if (vetor[i]!=2)tamanho2++;
    }
    
    int vetor2[tamanho2];
    
    for (i = 0; i < 100; i++){
        if(vetor[i]!=2){
            vetor2[m] = vetor[i]; 
            m++;
        }
    }


    for (i = 0; i < tamanho2; i++){

            // printf("%d", vetor2[i]);
            for (j = vetor2[i-1]; j < vetor2[i]; j++){
                printf("%c", frase[j]);
            }
            for (j = vetor2[i-1]; j < vetor2[i]; j++){
                printf("%c", frase[j]);
            }
            
       
    }
    
    int varaux = vetor2[tamanho2-1];

    for (j = varaux; j < tamanho; j++){
        printf("%c", frase[j]);
    }

    for (j = varaux; j < tamanho; j++){
        printf("%c", frase[j]);
    }
    

    printf("\n");


    

}

int main(){
    separar();
    return 0;
}