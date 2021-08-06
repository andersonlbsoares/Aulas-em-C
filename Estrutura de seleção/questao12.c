#include<stdio.h>
 
int main(){
    float peso;
    float altura;
    scanf("%f", &peso);
    scanf("%f", &altura);

    float IMC = peso/(altura*altura);


    if (IMC<17) printf("muito abaixo do peso");
    else if (IMC>=17 && IMC<18.49) printf("abaixo do peso");
    else if (IMC>=18.5 && IMC<24.99) printf("peso normal");
    else if (IMC>=25 && IMC<29.99) printf("acima do peso");
    else if (IMC>=30 && IMC<34.99) printf("obesidade");
    else if (IMC>=35 && IMC<39.99) printf("obesidade severa");
    else if (IMC>=40) printf("obesidade morbida");

   


    return 0;
}