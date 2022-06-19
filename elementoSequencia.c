//Esse código verifica se um valor pesquisado foi inseriod na sequência
#include <stdio.h>

int main()
{
    int valor;
    int pes;
    int existe = 0;

    printf("Digite o elemento de busca: ");
    scanf("%d", &pes);

    while(valor != -1) {
       printf("Digite o valor: ");
       scanf("%d", &valor);

       if(pes == valor) {
           existe = 1;
       }
   }


    if(existe == 1) {
    printf("\nElemento existe: %d", pes);
    }
    else {
        printf("\nElemento nao existe: %d", pes);
    }

    return 0;
}
