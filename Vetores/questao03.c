#include <stdio.h>
int main(){
int tamanho;
scanf("%d", &tamanho);
int vetor[tamanho];
int i;
int auxiliar;
int result = 1;
for ( i = 0; i < tamanho; i++){
    scanf("%d",&auxiliar);
    vetor[i] = auxiliar;
}
int tamanho2;
scanf("%d", &tamanho2);
int vetor2[tamanho2];
for ( i = 0; i < tamanho2; i++){
    scanf("%d",&auxiliar);
    vetor2[i] = auxiliar;
}

if (tamanho!=tamanho2)result = 0;
else{
    for (i = 0; i < tamanho; i++){
        if (vetor2[i]!=vetor[i]) result = 0;
    }
}

if (result == 0) printf("Diferentes");
else printf("Iguais");


return 0;
}