//Esse códgio cria um arquivo e armazena o que foi digitado
#include <stdio.h>
#include <string.h> // strlen

int main (){
    
    char nome [300];

    printf("Digite um palavra: ");
    fgets(nome, sizeof nome, stdin );

    nome [strlen(nome) - 1] ='\0';
    printf("\n%s", nome);
    
    FILE *arquivo = fopen ("saida.txt","wb");
    fwrite(nome, sizeof(char), strlen (nome), arquivo);
    
    if( arquivo == NULL ){
        printf ("Erro de acesso ao arquivo");
    }
    
    fclose(arquivo);

return 0;
}



