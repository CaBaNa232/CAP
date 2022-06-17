//Esse código faz o estudo de ponteiro
#include <stdio.h>

int main()
{
    //Declarações locais
    int x = 10;
    double y = 25.187598;
    char z = 'P';
    
    //Criação dos ponteiro
    int *px;
    double *py;
    char *pz;
    
    //Atribuindo endereços aos ponteiro
    px = &x;
    py = &y;
    pz = &z;
    
    //Imprimindo a endereço armazenado pelo ponteiro e o valor do endereço apontado pelo ponteiro
    printf("Endereco de X: %d -- Valor de X: %d", px, *px);
    printf("\nEndereco de Y: %d -- Valor de Y: %lf", py, *py);
    printf("\nEndereco de Z: %d -- Valor de Z: %c", pz, *pz);
    return 0;
}
