#include <stdio.h>
int main(){
int tamanho;
scanf("%d", &tamanho);
float vetor[tamanho];
int i;
float aux = 0;
float resultado;
float auxiliar;
for ( i = 0; i < tamanho; i++){
    scanf("%f",&auxiliar);
    vetor[i] = auxiliar;
}

for ( i = 0; i < tamanho; i++){
    aux = aux + vetor[i];
}

resultado = aux/tamanho;
printf("%f", resultado);






return 0;
}