/*
Maria Williane 
Matricula: 0050014202
*/


#include<stdio.h>
int main()
{
int matA[2][3], matB[3][2],matR[2][2], i, j;
  
  

printf("Matriz A\n\n");
for (i=0;i<=1;i++)
{
for(j=0;j<=2;j++)
{
printf("A[%d][%d]: ",i+1,j+1);
scanf("%d",&matA[i][j]);
}
}

printf("\nMatriz B\n\n");
for (i=0;i<=2;i++)
{
for(j=0;j<=1;j++)
{
printf("B[%d][%d]: ",i+1,j+1);
scanf("%d",&matB[i][j]);
}
}

for (i=0;i<=1;i++) 
{
for(j=0;j<=1;j++) 
{
matR[i][j] = (matA[i][j] * matB[i][j]) + (matA[i][j] * matB[i][j]) ; 
}
}

printf("\nMatriz Resultante\n");
printf("\n");
for (i=0;i<=1;i++)
{
for (j=0;j<=1;j++)
printf("%d ",matR[i][j]);
printf("\n");
}

  
  
  return 0;
}