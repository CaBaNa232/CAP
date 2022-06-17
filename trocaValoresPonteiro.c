//Esse código faz a 'troca' de duas variáveis por ponteiros
#include <stdio.h>

int main()
{
    //Declrações locais
    int n1, n2;

    //n1 recebe o valor 10
    n1 = 10;

    //Criando um ponteiro
    int *pont1;

    //pont1 recebe o endereço de n2
    pont1 = &n2;
    
    //n2 recebe o valor 15
    n2 = 15;

    //Criando outro ponteiro
    int *pont2;

    //pont2 recebe o endereço de n1
    pont2 = &n1;
  
    printf("Valor antes da troca:");
    printf("\n\n");
    
    printf("Valor da variavel A: %d", n1);
    printf("\nValor da variavel B: %d", n2);
    printf("\n\n");
    
    printf("Valor depois da troca:");
    printf("\n\n");
    printf("Valor da variavel A: %d", *pont1);
    printf("\nValor da variavel B: %d", *pont2);
    
    /*Observação: 
    Na verdade não é bem uma troca de valores, apenas o ponteiro 2 
    recebe o valor da variável n1 e o ponteiro 1 recebe o valor da
     variável de n2
    */
    
    return 0;
}


