//Esse código multiplicar os elementos do veotr por um X qualquer
#include <stdio.h>

int main()
{
    int i, vet [10], num;
    for(i = 0; i < 10; i++)
    {
        printf("Indice %d: ", i);
        scanf("%d", &vet[i]);
    }
    
    printf("\nMultiplicar elementos por quanto? ");
    scanf("%d",&num);
    
      for(i = 0; i < 10; i++)
      {
         printf("Indice: %d, elemento: %d", i, vet[i] * num);
         printf("\n");
           
      }

    return 0;
}
