//Esse código simula um caixa eletrônico
#include <stdio.h>

int main()
{
    int saque, valor, n_100, n_50, n_20, n_10, n_5, n_2;

    
    printf("Digite o valor do saque: ");
    scanf("%d",&saque);
    
    n_100 = valor / n_50; 
    valor = saque % 100;
    
    n_50 = valor / 50;
    valor = valor % 50;
    
    n_20 = valor / 20;
    valor = valor % 20;
    
    n_10 = valor / 10;
    valor = valor % 10;
    
    n_5 = valor / 5;
    valor = valor % 5;
    
    printf("\nNota(s) de R$:100,00 = %d",n_100);
    printf("\nNota(s) de R$:50,00 = %d", n_50);
    printf("\nNota(s) de R$:20,00 = %d", n_20);
    printf("\nNota(s) de R$:10,00 = %d", n_10);
    printf("\nNota(s) de R$:5,00 = %d", n_5);
    printf("\nNota(s) de R$:2,00 = %d", valor);

    
    return 0;
}

