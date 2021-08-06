#include <stdio.h>

typedef struct EXPRESSAO {
  char nome[20];
  float notas[3];
}EXPRESSAO;

int main(){
  EXPRESSAO caso;  
  scanf("%[^\n]", caso.nome); 
  scanf("%f\n", &caso.notas[0]); 
  scanf("%f\n", &caso.notas[1]); 
  scanf("%f\n", &caso.notas[2]); 

  float m1 = caso.notas[0]+caso.notas[1]+caso.notas[2];
  m1 = m1/3;


  EXPRESSAO caso2;
  scanf("%[^\n]", caso2.nome); 
  scanf("%f\n", &caso2.notas[0]); 
  scanf("%f\n", &caso2.notas[1]); 
  scanf("%f\n", &caso2.notas[2]); 

  float m2 = caso2.notas[0]+caso2.notas[1]+caso2.notas[2];
  m2 = m2/3;

 printf("%.2f",(m1+m2)/2 );
  
  return(0);
}