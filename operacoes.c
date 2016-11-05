#include <stdio.h>

int main()

{
    int num1,num2,soma,sub,mult,divi,menu,continuar;
    
    do
    {
        //imprime menu
        printf("\nQual operacao desejada?");
        printf("\n-----------------------");
        
        printf("\n1-adicao");
        printf("\n2-subtracao");
        printf("\n3-multiplicacao");
        printf("\n4-Divisao");
        scanf("\n%d",&menu);
        
        printf("\nDigite o primeiro numero");
        scanf("\n%d", &num1);
        
        printf("\nDigite o segundo numero");
        scanf("\n%d", &num2);
        
        switch(menu)
            {
              
             case 1: //Soma
              soma=num1+num2;
              printf("\nO resultado da soma é %d+%d=%d",num1,num2,soma);
              break;
              
             case 2: //Subtracao
              sub=num1-num2;
              printf("\nO resultado da subtracao é %d-%d=%d", num1,num2,sub);
              break;
              
             case 3: //multiplicacao
              mult=num1*num2;
              printf("\n O resultado da multiplicacao é %d*%d=%d", num1,num2, mult);
               break;
             case 4: //Divisao
              divi=num1 / num2;
              printf("\n O resultado da divisao é %d/%d=%d", num1,num2,divi);
               break;
            }
            printf("\nDeseja continuar? 1-s/2-n");
            scanf("%d",&continuar);
    }while(continuar==1);
    printf("\nTchau!!");

return 0;
}