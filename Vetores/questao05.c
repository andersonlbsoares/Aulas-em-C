#include <stdio.h>
int main(){
int tamanho;
scanf("%d", &tamanho);
int vetor[tamanho];
int vetor2[tamanho];
int i;
int aux;
int auxiliar;
int result = 1;
for ( i = 0; i < tamanho; i++){
    scanf("%d",&auxiliar);
    vetor[i] = auxiliar;
}

for ( i = 0; i < tamanho; i++){
    scanf("%d",&auxiliar);
    vetor2[i] = auxiliar;
}

for (i = 0; i < tamanho; i++){
    printf("%d ", vetor2[i]);
}
printf("\n");
for (i = 0; i < tamanho; i++){
    printf("%d ", vetor[i]);
}



return 0;
}