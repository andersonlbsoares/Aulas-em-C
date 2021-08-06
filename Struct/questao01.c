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
  scanf("%f", &aluno.nota);  
  
  if (aluno.nota>=7){
    printf("%s aprovado(a) em %s", aluno.nome, aluno.disciplina);
  }else{
    printf("%s reprovado(a) em %s", aluno.nome, aluno.disciplina);
  }
  
  
  return(0);
}