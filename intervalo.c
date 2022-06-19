//Esse códgio verifica se um valor está dentre de um intervalo
#include <stdio.h>

int main()
{
    float x;
    
    printf("Digite um numero: ");
    scanf("%f", &x);
    
    if(x >= 0 && x < 11)
    {
        printf("\nO número está no intervalo [0,10]");
    }
    else if (x >= 20 && x < 30)
    {
        printf("\nO numero esta no intervalo [20,30)");
    }
    
    else
    {
        printf("\nO numero nao esta em nenhum intervalo");
    }
    return 0;
}

