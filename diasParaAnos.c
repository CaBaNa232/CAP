//Esse código realizaça a conversão de dias para anos, mese e dias
#include <stdio.h>

int main()
{
    int num, anos, meses, dias, resto;
    
    printf("Digite a quantidade de dias: ");
    scanf("%d",&num);
    
    anos = num / 365;
    resto = num % 365;
    
    meses = resto / 30;
    resto = resto % 30;
    
    printf("\nAno(s): %d", anos);
    printf("\nMeses(s): %d", meses);
    printf("\nDia(s): %d", resto);

    return 0;
}
