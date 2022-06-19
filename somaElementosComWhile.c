#include <stdio.h>

int main()
{
    int num, i, cont;
    cont = 0;
    num = 1;
    
 while(num != 0){
     printf("Digite um numero: ");
     scanf("%d", &num);
     
     if(num != 0)
     {
         cont = cont + num;
     }
 }

    if(cont == 0)
    {
        printf("\nSequencia vazia");
    }
    else
    {
        printf("\nSoma dos elementos: %d", cont);
    }
    return 0;
}
