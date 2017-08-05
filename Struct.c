#include<stdio.h>

int main(void){
  
  struct ficha_aluno{
    
    char nome[50] ;
    int matricula;
    float media;
  };
  
  
  struct ficha_aluno aluno;
  
  printf("Cadastrar o aluno\n\n");
  printf("Nome: ");
  scanf("%s", &aluno.nome);
  printf("Matricula:");
  scanf("%d", &aluno.matricula);
  printf("Media:");
  scanf("%f", &aluno.media);
  
  printf("O aluno %s cuja matricula é %d possui média %.2f", aluno.nome, aluno.matricula, aluno.media);
}
