#include <stdio.h>

int fat (int num){
    int n = 1, i;
    
    for(i = 1; i <= num; i++)
    {
        n = n * i;
    }
    return(n);
}

int main()
{
    int num, fatorial;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    fatorial = fat(num);
   
    printf("\nO fatorial de %d = %d", num, fatorial);

    return 0;
}

