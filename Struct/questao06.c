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

  EXPRESSAO caso3;
  scanf("%[^\n]", caso3.nome); 
  scanf("%f\n", &caso3.notas[0]); 
  scanf("%f\n", &caso3.notas[1]); 
  scanf("%f\n", &caso3.notas[2]); 

  float m3 = caso3.notas[0]+caso3.notas[1]+caso3.notas[2];
  m3 = m3/3;


  if(m1>=7){
    printf("%s %.2f\n", caso.nome, m1);
  }
  if(m2>=7){
    printf("%s %.2f\n", caso2.nome, m2);
  }
  if(m3>=7){
    printf("%s %.2f\n", caso3.nome, m3);
  }


  return(0);
}