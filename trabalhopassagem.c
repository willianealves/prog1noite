#include <stdio.h>

int main()
{
    int origem, destino;
    float dolar=3.4, RSP=150,RSS=300, SPR=160,SPSSA=180,SSAR=280,SSASP=175;
    
    printf("\nOlá! Meu nome é Maria Williane, qual é sua origem?(1-Rio/2-SP/3-Salvador)\n");
    printf("\n--------------------------------------------");
    
    printf("\n1-Rio");
    printf("\n2-Sao Paulo");
    printf("\n3-Salvador");
    
        printf("\n                          ");
        printf("\nDigite a opção desejada:\n");
        scanf("%d", &origem);
        
       switch(origem)
      {
        case 1:
        printf("\nEntendi,Rio de Janeiro. Qual seu Destino?\n");
        printf("\nSeu destino não pode ser o mesmo de origem. Qual seu destino?\n");
        break;
        
        
        case 2:
        printf("\nEntendi, São Paulo\n");
        printf("\nQual seu destino?\n");
        
        break;
        
        case 3:
        printf("\nEntendi, Salvador\n");
        printf("\nQual seu destino?\n");
        break;
        
     } 
       do{
       printf("\n1-Rio");
       printf("\n2-Sao Paulo");
       printf("\n3-Salvador");
       
       printf("\n                          ");
       printf("\nDigite a opção desejada:\n");
       scanf("%d", &destino);
       if(origem==destino)
       printf("\nDestino mesmo de origem, digite outro destino. Obrigada!\n");
       }while(destino==origem);
       
       
        //Origem Rio de Janeiro
        
      switch(origem){
        case 1:
        switch(destino){
        case 2:
        printf("\nSeu destino é São Paulo\n");
        printf("\nValor da passagem Rio- São Paulo é R$%.2f ou U$ %.2f\n", RSP, RSP/dolar);
         
        case 3:
        switch(destino)
           printf("\nSeu destino é Salvador\n");
           printf("\nValor da Rio-Salvador é R$%.2f ou U$ %.2f\n", RSS, RSS/dolar);
           break;
        
        }
      }
          //Origem São Paulo
          
         switch(origem){
         case 2:
         switch(destino){
           case 1:
           printf("\nSeu destino é Rio de Janeiro");
           printf("\nValor da passagem São Paulo- Rio é R$%.2f ou U$ %.2f\n", SPR, SPR/dolar);
           break;
           
           case 3:
           switch(destino)
           printf("\nSeu destino é Salvador\n");
           printf("\nValor da São Paulo-Salvador é R$%.2f ou U$ %.2f\n", SPSSA, SPSSA/dolar);
           break;
        
           }
        }
           //Origem Salvador
        switch(origem){
        case 3:
        switch(destino){
        case 1:
          printf("\nSeu destino é Rio de Janeiro\n");
          printf("\nValor passagem Salvador-Rio é: R$ %.2f ou U$%.2f\n", SSAR ,SSAR /dolar);
          break; 
        
        
        case 2:
        switch(destino)
           printf("\nSeu destino é São Paulo\n");
           printf("\nValor da passagem Salvador-São Paulo  é R$%.2f ou U$ %.2f\n", SSASP, SSASP/dolar);  
           break;
        
        }
     }
        
     return 0;
  }
  