//Exemplo básico do funcionamento de um while

#include <stdio.h>

int main()
{
    //Declaraçõs locais e inicialização de variávies contadoras
    int i;
    int cont = 1;
    

    printf("\nDigite um valor: ");
    scanf("%d", &i);
    
    //Enquanto a valor digitado for diferente de 5, a repetição continua
    while(i != 5)
    {
        //Caso a laço seja executado a mensagem é printada
        printf("\nHello, World!\n");

        //Se for valor digitado for diferente de 5, o laço é executado novamente
        printf("\nDigite um valor: ");
        scanf("%d", &i);
        cont++;
    }
    return 0;   
}
