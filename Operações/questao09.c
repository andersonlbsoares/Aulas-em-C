#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float seg = 0;
    float min = 0;
    float hor = 0;
    scanf("%f", &seg);
    
    min = seg/60; 
    hor = min/60;
    float parteinteirahora = floor(hor);
    float partedecimalhora = hor - parteinteirahora;
  
    float min60 = partedecimalhora*60;
    
    float parteinteiraminuto = floor(min60);
    float partedecimalminuto = min60 - parteinteiraminuto;

    float seg60 = partedecimalminuto*60;
    
    

    printf("%.0f", parteinteirahora);
    printf(":");
    printf("%.0f", parteinteiraminuto);
    printf(":");
    printf("%.0f", seg60);
   

    
    return 0;
}