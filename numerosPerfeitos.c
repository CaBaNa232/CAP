#include <stdio.h>

int main()
{
    int num, soma = 0, i;
    
    printf("Digite um numero: ");
    scanf("%d",&num);
    
    for(i = 1; i < num; i++){
        
        if(num % i == 0)
        {
            soma += i;
        }
    }

    if(soma==num)
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }

    return 0;
}



