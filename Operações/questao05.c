#include <stdio.h>
  void main(){
    float velocidade_kmh, tempo_minutos, consumo_litros;
    
    scanf("%f\n",&velocidade_kmh);
    scanf("%f\n",&tempo_minutos);
    scanf("%f\n",&consumo_litros);

    float tempo_horas = tempo_minutos/60;
    float distancia = velocidade_kmh * tempo_horas;
    float desempenho = distancia / consumo_litros;
    printf("%.2f\n", desempenho);
}