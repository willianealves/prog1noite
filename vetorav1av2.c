#include <stdio.h>

int main()
{
    float av1[10];
    float media;
    float soma=0;
    float porcmaior;
    int i;
    
    
    
    
    for(i=0;i<=9;i++)
    {
        printf("\nEntre com Av1 do aluno %d=  ", i+1);
        scanf("%f", &av1[i]);
        soma=soma+av1[i];
    }
    
         media=soma/10;
         printf("\nmedia=%f", media);
         
          printf("\n-----------------------");
          printf("\nAlunos com nota >=media");
          
          for(i=0;i<=9;i++)
          {
             if(av1[i] >= media)
             {
                 printf("\nAluno %d -> Nota=%f", i+1,av1[i]);
             }
          }
          
         
         
    
    
    
    return 0;
    
}