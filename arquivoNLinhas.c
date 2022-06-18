#include <stdio.h>
#include<stdlib.h>

int main()
{
    
    //Declarações locais
    FILE *arquivoSaida; //Arquivo lógico
    FILE *arquivoLeitura;
    
    int nLinhas, nColunas, i, j;
    char ch;
    char ch1, ch2, ch3;
    
    //Criar Arquivo
    arquivoSaida = fopen("matriz.txt","wt");
    
    //Gravar os dados
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &nLinhas);
    fprintf(arquivoSaida,"%d\n", nLinhas);
    
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &nColunas);
    fprintf(arquivoSaida,"%d\n", nColunas);
    scanf("%c", &ch);
    
    for(i = 0; i < nLinhas; i++){
        printf("Digite os 3 caracteres no formato: %%c %%c %%c<ENTER>");
        scanf("%c %c %c", &ch1, &ch2, &ch3);
        fprintf(arquivoSaida,"%c %c %c\n", ch1, ch2, ch3);
        scanf("%c", &ch);
    }
   
    arquivoLeitura = fopen("matriz.txt", "rt");
    
    fscanf(arquivoLeitura,"%d\n", &nLinhas);
    
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

