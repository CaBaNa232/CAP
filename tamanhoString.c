//Esse código recebe uma string, calcula o tamanho e mostra o nome digitado 
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[300];
    int tam;

    printf("Digite uma palavra: ");
    fgets(nome, sizeof (nome), stdin);

    printf("%s", nome);
    nome [strlen(nome) -1 ] = '\0';
    tam = strlen(nome);
    
    printf("Tamanho da palavra: %d", tam);
    

    return 0;
}
