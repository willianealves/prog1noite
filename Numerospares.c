 #include <stdio.h> 
 
 //Fazer um programa em C para exibir numeros pares de 0 a 50 //
 
 int main()
 
 {
     
     int cont;
     
     printf("\nInicio da contagem");
     for(cont=0;cont<=50; cont=cont+2)
     {
         printf("%d, ", cont);
     }
     
     printf("\nFim da contagem");
     
     
     
     return 0;
 }


