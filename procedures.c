#include <stdio.h>

/*
Nome: Nome
Objetivo: Imprimir "João Pedro Pereira"
Parâmetros formais: Não há
Valor de retorno: Não há
*/
void nome() {
    printf("Joao Pedro Pereira");
}

/*
Nome: linha
Objetivo: Imprimir "*" 10 vezes
Parâmetros formais: Não há
Valor de retorno: Não há
*/
void linha ()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("* ");
    }
}


int main()
{
    //Chamada do procedimento  
    linha();
    printf("\n\n");
    printf("Numeros de 1 a 10:\n");
    
    // Exibindo os números de 1 a 10
    int i;
    for(i = 1; i <= 10;i++)
    {
        printf("%d ", i);
        
    }
    printf("\n\n");
    
    //Chamada do procedimento  
    linha();
    
    printf("\n");
    
  //Chamada do procedimento  
    nome();

    return 0;
}