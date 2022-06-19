#include <stdio.h>

int main()
{
    int i ,tam;
    float soma = 0;
    
    printf("Digite o tamanho da sequência: ");
    scanf("%d", &tam);
    
    for(i = 1; i <= tam; i++)
    {
        soma = soma + (float) 1 / i;
    }
    printf("\nSoma %f", soma);

    return 0;
}
