#include <stdio.h>

int main()
{
    int i;
    float av1,av2,media;
    char nome[10];
    
    printf("\nQual seu nome?");
    scanf("%s",nome);
    
    printf("\nEntre com Av1:");
    scanf("%f",&av1);
    
    printf("\nEntre com Av2:");
    scanf("%f",&av2);
    
    printf("Ola %s, sua média é: %.2f", nome, media=(av1+av2)/2);
  
    
    
    
    return 0;
}