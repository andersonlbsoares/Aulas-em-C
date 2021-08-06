#include <stdio.h>
int main(){
int tamanho;
scanf("%d", &tamanho);
int vetor[tamanho];
int auxiliar;
int i, j;


for ( i = 0; i < tamanho; i++){
    scanf("%d",&auxiliar);
    vetor[i] = auxiliar;
}


for (i = 0; i < tamanho-1; ++i) {
      int min = i;
      for (j = i+1; j < tamanho; ++j)
         if (vetor[j] < vetor[min])  min = j;
      int x = vetor[i]; vetor[i] = vetor[min]; vetor[min] = x;
   }


    for (i = 0; i < tamanho; i++) printf ("%d\n", vetor[i]);



return 0;
}