//Esse código possui uma função que imprime 24x #
#include <stdio.h>

//Função linha
void linha() 
{
    int i;
    //Imrpime 24 vezes o caractere #
    for(i = 0; i <= 24; i++){
        printf("#");
    }
}

int main()
{
    //Declarações locais
    int i;

    //Chamada de função
    linha();

    printf("\nNumeros de 1 a 10\n");
    
    //Imprime números de 1 a 10
    for(i = 1; i <= 10; i++)
    {
        printf("%d ",i);
    }

    printf("\n");

    //Chamada de função
    linha();

    return 0;
}