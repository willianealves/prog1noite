#include <stdio.h>

int main()
{
        char letras;
        
        printf("\nDigite uma letra");
        scanf("\n%c",&letras);
        
        if(letras>=65 && letras<=90)
        
        {
           printf("\nLetra maiscula");
            
        }else if (letras>=48 && letras<=57)
        {
            printf("\nVoce digitou um numero");
        }else
        
        {
           printf("\nLetra minuscula") ;
        }
        
        
         return 0;
}