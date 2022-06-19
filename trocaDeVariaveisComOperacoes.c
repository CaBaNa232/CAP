//Esse código realiza a troca dos valores de duas variáveis utilizando operações matemáticas
#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    
    printf("A - %d , B - %d", a, b);
    
    a = a + b; //a = 15
    b = a - b; //b = 5 
    a = a - b; //15 - 5 = 10
    
    printf("\nA = %d , B - %d", a, b);

    return 0;
}
