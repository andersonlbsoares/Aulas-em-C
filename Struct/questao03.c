#include <stdio.h>

typedef struct EXPRESSAO {
  float num1;
  float num2;
  char operador;
}EXPRESSAO;

int main(){
  EXPRESSAO caso;  
  scanf("%f\n", &caso.num1); 
  scanf("%f\n", &caso.num2); 
  scanf("%c", &caso.operador);

  
  if(caso.operador=='+'){
    printf("%.0f",caso.num1 + caso.num2);  
  }else if(caso.operador=='-'){
    printf("%.0f",caso.num1 - caso.num2);  
  }else if(caso.operador=='/'){
    printf("%.0f",caso.num1 / caso.num2);  
  }else if(caso.operador=='*'){
    printf("%.0f",caso.num1 * caso.num2);  
  }else{}
  
  return(0);
}