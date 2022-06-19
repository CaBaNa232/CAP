#include <stdio.h>

int main()
{
    int x = 60;
    int *ptr;
    
    ptr = &x;
    printf("Valor de X: %d", x);
    printf("\nEndereço de X: %p", &x);
    printf("\n\nUtilizando o ponteiro: \n\n");
    printf("Valor endereco do ponteiro %p", ptr);
    printf("\nConteudo do ponteiro: %d", *ptr);
    
    printf("\n\nAlterando o valor de X com o ponteiro\n\n");
    *ptr = 5000;
    printf("Valor do ponteiro: %p" ,ptr);
    printf("\nConteudo do ponteiro: %d", *ptr);
    return 0;
}