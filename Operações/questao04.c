#include <stdio.h>
  int main(){
    int horas;
    int minutos;
    int dia;
    int mes;
    int ano;
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);
    scanf("%d", &minutos);
    scanf("%d", &horas);

    ano = ano % 100;
  if(horas >= 12 && horas <= 23){
    horas = horas - 12;
    printf("%02d:%02d %02d/%02d/%02d\n", horas, minutos, dia, mes, ano);
}
  else if(horas >= 24){
    horas = horas - 24;
    printf("%02d:%02d %02d/%02d/%02d\n", horas, minutos, dia, mes, ano);
}
  else{
    printf("%02d:%02d %02d/%02d/%02d\n", horas, minutos, dia, mes, ano);
}
  return 0;
}