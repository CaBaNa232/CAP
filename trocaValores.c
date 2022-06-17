//Esse código realiza a troca de valores de duas variáveis utilizando uma variável auxiliar
#include <stdio.h>

int main()
{
    //Declarações locais
    int x, aux, y;
    x = 10;
    y = 20;
  
    //Antes da troca
    printf("Valor de X antes da troca: %d",x);
    printf("\nValor de Y antes da troca: %d",y);
    printf("\n");

    //aux recebe x(10), x(10) recebe o valor de y(20) e y recebe aux(20)
    aux = x;
    x = y;
    y = aux; 
    
    //Após a troca
    printf("\nValor de X depois da troca: %d",x);
    printf("\nValor de Y depois da troca: %d",y);

    return 0;
}

