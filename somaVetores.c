//Esse código realiza a soma de cada elemento de dois vetores por índices
#include <stdio.h>

int main()
{
    int i, j, k, vet1[5], vet2[5], vets[5];
    
    printf("Digite os elementos do 1 vetor: ");
    
    for(i = 0; i < 5; i++)
    {
       scanf("%d", &vet1[i]);
    }
    
    printf("\n");
    printf("Digite os elementos do 2 vetor: ");
    
    for(j = 0; j < 5; j++)
    {
       scanf("%d", &vet2[j]);
    }

    printf("\n\n");
    printf("Soma dos vetores");
    
      for(k = 0;k < 5; k++)
      {
       vets[k]= vet1[k] + vet2[k];
       printf(" %d", vets[k]);
    }

    return 0;
}
