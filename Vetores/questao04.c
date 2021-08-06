#include <stdio.h>
int main(){
int tamanho;
scanf("%d", &tamanho);
int vetor[tamanho];
int i;
int aux;
int auxiliar;
int result = 1;
for ( i = 0; i < tamanho; i++){
    scanf("%d",&auxiliar);
    vetor[i] = auxiliar;
}
int a;
int b;
scanf("%d", &a);
scanf("%d", &b);

aux = vetor[a];
vetor[a] = vetor[b];
vetor[b] = aux;
for (i = 0; i < tamanho; i++){
    printf("%d ", vetor[i]);
}



return 0;
}