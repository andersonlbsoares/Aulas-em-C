#include <stdio.h>

typedef struct EXPRESSAO {
  float num1;
  float num2;
}EXPRESSAO;

int main(){
  EXPRESSAO caso;  
  scanf("%f\n", &caso.num1); 
  scanf("%f\n", &caso.num2); 

  
    printf("%.0f ",caso.num1 + caso.num2);  
    printf("%.0f ",caso.num1 - caso.num2);  
    printf("%.1f ",caso.num1 / caso.num2);  
    printf("%.0f",caso.num1 * caso.num2);  
  
  return(0);
}