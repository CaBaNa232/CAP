//Esse código realiza a criação de um arquivo
#include <stdio.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("arquivo.txt","w");
    
    float num;
    
    printf("Digite um valor para testar o arquivo:");
    scanf("%f", &num);
    fprintf(arquivo, "%f", num);
    
    
    fclose(arquivo);
    printf("Arquivo criado com sucesso");

    return 0;
}