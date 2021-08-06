#include <stdio.h>
int qntdleds(int numero){
    int resto, resultado=0;
    
        while (numero != 0){
            resto = numero%10;
            numero = (numero - resto)/10;
            if(resto==1) resultado = resultado+2;
            else if(resto==2) resultado = resultado+5;
            else if(resto==3) resultado = resultado+5;
            else if(resto==4) resultado = resultado+4;
            else if(resto==5) resultado = resultado+5;
            else if(resto==6) resultado = resultado+6;
            else if(resto==7) resultado = resultado+3;
            else if(resto==8) resultado = resultado+7;
            else if(resto==9) resultado = resultado+6;
            else if(resto==0) resultado = resultado+6;
        }
       return resultado;
    
}

int main(){
    int tamanho, i;
    scanf("%d", &tamanho);
    int vetor[tamanho];

    for (i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < tamanho; i++){
        int numero = vetor[i];
        int res = qntdleds(numero);
        printf("%d leds\n", res);
    }
        
 return 0;   
}


