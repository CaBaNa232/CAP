//Esse código faz um uso simples de um ponteiro
#include <stdio.h>

int main()
{
    //Variavel x tem valor 10
    int x = 10; 

    //Criando o ponteiro
   int *ponteiro; 

   //A variavel ponteiro recebe o endereço de memória de X
   ponteiro = &x; 

   // Variavel y tem o valor 20
   int y = 20; 

   //O valor do endereço de memória apontado pelo ponteiro vai receber o valor de y
   *ponteiro = y;
   
   //Cuidado com o uso de ponteiros, pois o valor de x foi alterado pelo ponteiro!
   printf("%d - %d", x, y); // 20 - 20

    return 0;
}
