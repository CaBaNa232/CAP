//Esse código realiza a função fatorial de um número utilizando um for
#include <stdio.h>

int main()
{
    int num, i, fat;
    fat = 1;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++){
        fat = fat * i;
    }
    printf("\nO fatorial de %d = %d", num, fat);
    
    return 0;
}