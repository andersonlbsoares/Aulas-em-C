#include <stdio.h>

typedef struct DATA {
  int dia;
  int mes;
  int ano;
  int tot;
}DATA;

int main(){
  DATA data1;  
  scanf("%d\n", &data1.dia); 
  scanf("%d\n", &data1.mes); 
  scanf("%d\n", &data1.ano); 
  data1.tot = data1.ano*10000 + data1.mes*100 + data1.dia;


  DATA data2;  
  scanf("%d\n", &data2.dia); 
  scanf("%d\n", &data2.mes); 
  scanf("%d\n", &data2.ano); 
  data2.tot = data2.ano*10000 + data2.mes*100 + data2.dia;


if (data1.tot>data2.tot){
  printf("Mais recente");
}else if(data1.tot<data2.tot){
  printf("Mais antiga");
}else{
  printf("Iguais");
}


  return(0);
}


 
