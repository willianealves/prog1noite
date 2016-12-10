#include <stdio.h>

int main()
{
    int l1,l2,l3;
    
    printf("\nEntre com lado\n");
    scanf("%d" , & l1);
    
    printf("\nEntre com lado\n");
    scanf("%d", & l2);
    
    printf("\nEntre com lado\n");
    scanf("%d", & l3);
    
    
    if (l1+l2>=l3 && l1+l3>=l2 && l2+l3>=l1)
    {
    

    if (l1 == l2 && l2 == l3){
             printf ("Triangulo Equilatero");
             }
    else if  ( l1 != l2 && l2 != l3 && l1 != l3){
   
    
        printf("\nTriangulo escaleno");
    
    }else {
    
       printf("\nIsosceles\n")
    }
     
     
    }  
    
    
    
    
      
        
   
   return 0; 
    
}
