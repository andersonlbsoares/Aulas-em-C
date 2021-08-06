#include <stdio.h>
#include <stdlib.h>

int main(){
    int aux;
    int tamanho;
    scanf("%d", &tamanho);
    int vet[tamanho];
    int vet2[tamanho];
    int i;
    int j;
    int especie=0;
    int aux2=0;

    for (i = 0; i < tamanho; i++){
      vet2[i] = 0;
    }
    
    for (i = 0; i < tamanho; i++){
        scanf("%d", &aux);
        vet[i] = aux;
    }

    for (i = 0; i < tamanho; i++){
        aux2=0;
        for (j = 0; j < tamanho; j++){
            if (j==0) aux2=0;
            if (vet[i]!=vet2[j])aux2++;
            if (aux2==tamanho){
                vet2[i] = vet[i];
                especie++;
                aux2=0;
            }
        }
        
    }



for (i = 0; i < tamanho-1; ++i) {
      int min = i;
      for (j = i+1; j < tamanho; ++j)
         if (vet2[j] < vet2[min])  min = j;
      int x = vet2[i]; vet2[i] = vet2[min]; vet2[min] = x;
   }



  for (i = 0; i <tamanho ; i++)  {
    if (vet2[i]!=0) printf ("%d ",vet2[i]);

  }

  






   
   
    return 0;
}