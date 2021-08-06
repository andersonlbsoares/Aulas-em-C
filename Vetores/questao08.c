#include <stdio.h>
int main(){
int tamanho;
scanf("%d", &tamanho);
float vetor[tamanho];
int i;
int j;
float auxiliar;
int aux;


for ( i = 0; i < tamanho; i++){
    scanf("%f",&auxiliar);
    vetor[i] = auxiliar;
}


for (i = 0; i < tamanho-1; ++i) {
      int min = i;
      for (j = i+1; j < tamanho; ++j)
         if (vetor[j] < vetor[min])  min = j;
      float x = vetor[i]; vetor[i] = vetor[min]; vetor[min] = x;
   }


    // for (i = 0; i < tamanho; i++) printf ("%f ", vetor[i]);
    

if(tamanho%2 != 0){
    aux = (tamanho/2);
    // printf("%d", aux);
    printf("\n%f",  vetor[aux]);
}

if(tamanho%2 == 0){
    aux = (tamanho/2);
    int aux2 = (tamanho/2)+1;
    float aux3 = vetor[aux-1] + vetor[aux2-1];
    aux3 = aux3/2;
    // printf("\n%d %d", aux, aux2);
    printf("\n%f", aux3);

    // printf("%d", aux3);
}





return 0;
}