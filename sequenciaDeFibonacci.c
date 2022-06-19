#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, aux;
    
    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);
    
    printf("\nSequência de Fibonacci: \n%d \n%d",a,b);
    for(i = 1; i <= n; i++)
    {
        aux = a + b;
        a = b;
        b = aux;
        printf("\n%d", aux);
    }

    return 0;
}
