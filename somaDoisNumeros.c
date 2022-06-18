//Esse código realiza uma simples operação de soma
#include <stdio.h>

int main()
{
    int a, b, x;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    x = a + b;
    printf("\nX = %d", x);
    
    return 0;
}

