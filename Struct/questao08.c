#include <stdio.h>

typedef struct PROVA{
  float nota;
  float peso;
}PROVA;

int main(){

  int qntd, i;
  float totpeso = 0, aux = 0, total = 0;
  scanf("%d", &qntd);

  PROVA vetor[qntd];

  for (i = 0; i < qntd; i++){
    scanf("%f", &vetor[i].nota);
  }

  for (i = 0; i < qntd; i++){
    scanf("%f", &vetor[i].peso);
  }

  for (i = 0; i <qntd; i++)  {
    totpeso = totpeso + vetor[i].peso;
    aux = vetor[i].peso * vetor[i].nota;
    total = total+ aux;
    aux = 0;
  }

  printf("%.2f", total/totpeso);
  
  
 
  return(0);
}


 
