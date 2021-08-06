#include <stdio.h>

int main(){
int tamanho, i, auxiliar, resultado=0;
scanf("%d", &tamanho);
int vetor[tamanho];



for ( i = 0; i < tamanho; i++){
    scanf("%d",&auxiliar);
    vetor[i] = auxiliar;
}

for (i = 0; i < tamanho; i++){
    if (vetor[i]==11) resultado = resultado+10; 
    else if (vetor[i]==12) resultado = resultado+10; 
    else if (vetor[i]==13) resultado = resultado+10; 
    else if (vetor[i]==1) resultado = resultado+11;
    else resultado = resultado + vetor[i];  
}

if (resultado > 21){
    for (i = 0; i < tamanho; i++){
        if (vetor[i]==1 && resultado>21) resultado = resultado-10;
    }
    
}

printf("%d", resultado);

return 0;
}