#include <stdio.h>

/*
Nome: linha
Objetivo: Imprimir o caracter fornecido pelo o usuário e a quantidade de repetições informado pelo mesmo
Parâmetros formais:
- letra: Caracter fornecido pelo o usuário (parâmetro de entrada de dados)
- n_vezes: Número de repetições (parâmetro de entrada de dados)
Valor de retorno: Inexistente (procedimento)
*/


void linha (char letra, int n_vezes)
{
    int i;
    for(i = 1; i <= n_vezes; i++){
        printf("%c ", letra);
    }
}

int main()
{
    //Declarações locais
    int i, num_vezes;
    char letra;
    
    //Entrada do caracter
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
    //Entrada do número de repetições
    printf("Digite a quantidade de repeticoes: ");
    scanf("%d", &num_vezes);
    
    printf("\n\n");
    
    //Chamada da sub-rotina (procedimento)
    linha(letra, num_vezes);
    printf("\n");
    
    printf("\nNumeros de 1 a %d\n", num_vezes);
    for(i = 1; i <= num_vezes; i++)
    {
        printf("%d ",i);
    }
    
    printf("\n\n");
    
    //Chamada da sub-rotina (procedimento)
    linha(letra, num_vezes);
    return 0;
}
