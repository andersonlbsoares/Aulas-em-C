#include <stdio.h>
int main(){
int tamanho;
scanf("%d", &tamanho);
int vetor[tamanho];
int auxiliar;
int i;


for ( i = 0; i < tamanho; i++){
    scanf("%d",&auxiliar);
    vetor[i] = auxiliar;
}

  for (i = 0; i < tamanho; i++) printf ("%d", vetor[i]);
    




return 0;
}