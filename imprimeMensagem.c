//Exemplo bem simples de uma função que faz uma impressão
#include <stdio.h>

//Criação da função imprimamensagem
void imprimaMensagem()
{
   printf("Hello, World!");
}

//Criação da função imprimamensagem2
void imprimaMensagem2()
{
    printf("Ciencia da Computacao - UFSCar");
}

int main(){
    
    //Chamada de função
    imprimaMensagem();

    printf("\n");

    //Chamada de função
    imprimaMensagem2();
   
    return 0;
}

