#include <stdio.h>

int main()
{
  float notas[4][3] , media, av1, av2, av3;
  int i, j;
  int mat;
  
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=2;j++)
    {
        printf("\nEntre com a av%d do aluno %d : ",j+1, i+1);
        scanf("%f", &notas[i][j]);
    }
  }
  
  //gerar relatorio
  printf("\n\n1-Resultado do Semestre");
  printf("\n-------------------------------------------");
  printf("\nNome\t\tAV1\tAV2\tAV3");
  printf("\n-------------------------------------------");
  
  for(i=0;i<4;i++)
  {
    printf("\nAluno %d\t\t%.2f\t%.2f\t%.2f",i+1, notas[i][0], notas[i][1], notas[i][2]);
  }
  printf("\n-------------------------------------------\n");
  
  //gerar relatorio
  printf("\n\n2-Resultado do Semestre");
  printf("\n-------------------------------------------");
  printf("\nNome\t\tAV1");
  printf("\n-------------------------------------------");
  
  for(i=0;i<4;i++)
  {
    printf("\nAluno %d\t\t%.2f",i+1, notas[i][0]);
  }
  printf("\n-------------------------------------------\n");
  
  printf("\n\nEntre com a matricula:");
  scanf("%d", &mat);
  
  //gerar relatorio
  printf("\n\n2-Resultado do Semestre");
  printf("\n-------------------------------------------");
  printf("\nNome\t\tAV1\tAV2\tAV3\tResultado");
  printf("\n-------------------------------------------");
  
  i = mat -1;
  av1 = notas[i][0];
  av2 = notas[i][1];
  av3 = notas[i][2];
  
  if(av1>=av2 && av1>=av3 ) // av1 eh a maior
  {
    if(av2>av3)
    {
      media = (av1+av2) / 2;
    }
    else{
      media = (av1+av3) / 2;
    }
  }
  else if(av2>av3)   // av2 eh a maior
  {
    if(av1>av3)
    {
      media = (av2+av1) /2;
    }
    else{
      media = (av2+av3) /2;
    }
  }
  else if(av1>av2)  //av3 eh a maior
  {
    media = (av3 + av1) /2;
  }
  else{
    media = (av3 + av2) /2;
  }
  
  if(media >= 6)
  {
      printf("\nAluno %d\t\t%.2f\t%.2f\t%.2f\t Aprovado",mat, notas[i][0], notas[i][1], notas[i][2]);   
  }
  else
  {
      printf("\nAluno %d\t\t%.2f\t%.2f\t%.2f\t Reprovado",mat, notas[i][0], notas[i][1], notas[i][2]);   

  }
  printf("\n-------------------------------------------\n");
  
  
  return 0;
}