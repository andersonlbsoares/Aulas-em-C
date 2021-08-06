#include <stdio.h>
int main(){
int tamanho;
scanf("%d", &tamanho);
int vetor[tamanho];
int i;
int j;
int auxiliar;
int result = 0;
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


for ( i = 0; i < tamanho; i++){
    for (j = 0; j < tamanho2; j++){
        if(vetor[i] == vetor2[j]) result = 1;
    }  
}

if (result == 1) printf("Existe");
else printf("Nao existe");


return 0;
}