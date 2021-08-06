#include <stdio.h>
#include <stdlib.h>

void soparte(){
    int i=0, j, tamanho= 0, a, b;

    char frase[100];
    scanf("%[^\n]", frase);
    scanf("%d", &a);
    scanf("%d", &b);
    

    while(frase[i]!= '\0'){
        tamanho++;
        i++;
    }

    for (j = a; j < a+b; j++){
        printf("%c", frase[j]);

    }
}

int main(){
    soparte();
    return 0;
}