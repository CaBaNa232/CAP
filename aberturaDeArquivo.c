//Esse código realiza a abertura de um arquivo
#include <stdio.h>
#include <string.h> // strlen
#define RETORNO_OK 0
#define RETORNO_ERRO 1

int main ()
{
    int retorno = RETORNO_OK ;
    
    // nome do arquivo
    char nome [300];
    printf ("Nome do arquivo: ");
    fgets(nome , sizeof nome , stdin );
    nome [strlen ( nome ) - 1] = '\0';
    
    // acesso ao arquivo
    FILE * arquivo = fopen (nome,"rb");
    
    if( arquivo == NULL )
    {
        printf("Erro de acesso a %s\n", nome );
        retorno = RETORNO_ERRO ;
    }
    else 
    {
    // tentativa de obter 10 bytes do arquivo
    char bytes [10]; // 10 bytes
    int itens_lidos ;
    itens_lidos = fread (&bytes, sizeof ( char ), 10, arquivo );
    fclose ( arquivo );
    
    // apresentacao dos bytes lidos
    printf ("Foram lidos %d bytes de %s\n", itens_lidos ,nome );
    
    for (int i = 0; i < itens_lidos; i ++)
        printf ("byte %02d: %02X\n", i, bytes [i]);
        printf ("\n");
    }
    
    return retorno ;
}