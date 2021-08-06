#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
  char nome[20];
  int matricula;
  char disciplina[20];
  float nota;
}Aluno;

int main(){
  Aluno aluno;  
  scanf("%[^\n]", aluno.nome);
  scanf("%d\n", &aluno.matricula); 
  scanf("%[^\n]", aluno.disciplina);
  scanf("%f\n", &aluno.nota);

  Aluno aluno2;  
  scanf("%[^\n]", aluno2.nome);
  scanf("%d\n", &aluno2.matricula); 
  scanf("%[^\n]", aluno2.disciplina);
  scanf("%f", &aluno2.nota);  
  
  if (aluno.nota>aluno2.nota){
    printf("%s , %.1f", aluno.nome, aluno.nota);
  }else if(aluno.nota<aluno2.nota){
    printf("%s , %.1f", aluno2.nome, aluno2.nota);
  }else{
    printf("%s e %s , %.1f", aluno.nome, aluno2.nome, aluno.nota);
  }
  
  
  return(0);
}