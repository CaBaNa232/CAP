#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    //Declarações locais
    FILE *arquivoSaida; //Arquivo lógico
    
    int nLinhas,nColunas,i,j;
    char ch;
    
    //Criar Arquivo
    arquivoSaida = fopen("matriz.txt", "wt");
    
    //Gravar os dados
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &nLinhas);
    fprintf(arquivoSaida, "%d\n", nLinhas);
    
    printf("Digite a quantidade de colunas: ");
    scanf("%d",&nColunas);
    fprintf(arquivoSaida,"%d\n", nColunas);
    scanf("%c", &ch);
    
    //Escrita dos caracteres
    for(i = 0; i < nLinhas; i++){
        
        for(j = 0; j < nColunas; j++)
        {
            printf("Digite o caracter: ");
            scanf("%c", &ch);
            fprintf(arquivoSaida,"%c", ch);
            
            if (j == nColunas - 1)
                fprintf(arquivoSaida, "\n");
            
            else
                fprintf(arquivoSaida, " ");
                scanf("%c", &ch);
        }
   } 
    
    fprintf(arquivoSaida, "4\n");
    fprintf(arquivoSaida, "3\n");
    fprintf(arquivoSaida, "A E I\n");
    fprintf(arquivoSaida, "B F J\n");
    fprintf(arquivoSaida, "C G K\n");
    fprintf(arquivoSaida, "D H L\n");
    
    //Fechar o arquivo
    fclose(arquivoSaida);

    return 0;
}
