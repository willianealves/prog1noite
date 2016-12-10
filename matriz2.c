#include <stdio.h>

int main()
{
  float notas[4][3];
  int i, j;
  
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=2;j++)
    {
        printf("Entre com a av%d do aluno %d :",j+1, i+1);
        scanf("%f", &notas[i][j]);
    }
  }
  
  
   //gerar relatorio
   printf("\n\nResultado do semestre");
   printf("\n-----------------------");
   printf("\nNome\tAV1");
   printf("\n-----------------------");
  
  
  for(i=0;i<=3;i++)
  {
    printf("\nAluno %d\t\t%.2f",i+1, notas[i][0],notas[i][1],notas[i][2]);
  }
  
  
  return 0;
}