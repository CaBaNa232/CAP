#include <stdio.h>

int main()
{
    int num, i = 1, cont_div = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &num);
    
    while(i <= num)
    {
        if(num % i == 0)
        {
            cont_div += 1;
        }
        
        i++;
    }
    
    if(cont_div == 2)
    {
        printf("\nO numero e primo");
    }
    else
    {
        printf("\nO numero nao e primo");
    }
   

    return 0;
}

