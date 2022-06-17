//Esse código faz um for com um tamanho variável

#include <stdio.h>

int main()
{
    //Declarações
    int i, num;

    //Recebendo o número de repetições
    printf("Quantas repeticoes deseja? ");
    scanf("%d", &num);
    
    //Imprimindo o número da repetição
    for(i = 1; i <= num; i++){
        printf("\nRepeticao = %d", i);
    }

    return 0;
}