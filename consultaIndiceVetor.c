/*Esse código preenche um vetor com 5 posições e depois consulta 
qual é o elemento que está em um índice fornecido */

#include <stdio.h>

int main()
{
    //Declrações locais
    int i, ind;
    int vetor[5];
    
    printf("Digite os valores do vetor:\n\n");
    //Recebendo os valores do vetor
    for(i = 0; i < 5; i++)
    {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);

    }
    //Fornecendo o índice para consulta
    printf("\nInforme um indice de uma posicao: ");
    scanf("%d",&ind);
    
    //Loop para fazer várias verificações de índices
    while((ind >= 0) && (ind < 5)) 
    {
        printf("O valor da posicao e: %d", vetor[ind]);
        printf("\nInforme um indice de uma posicao: ");
        scanf("%d", &ind);
    }
    
    return 0;
}

