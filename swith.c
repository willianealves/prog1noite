#include <stdio.h>

int main()

{
    int menu;
    printf("\nEntre com um numero de 1 a 3:");
    scanf("%d", &menu);
    
    switch(menu)
    {
        case 1:
        printf("\nopcao 1 escolhida");
        break;
        case 2:
        printf("\nopcao 2 escolhida");
        break;
        case 3:
        printf("\nopcao 3 escolhida");
        break;
        default:
        printf("\nNenhuma das opcoes escolhida");
        break;
    }






return 0;

}
