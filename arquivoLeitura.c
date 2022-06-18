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
    
  
    arquivoLeitura = fopen("matriz.txt", "rt");
    
    fscanf(arquivoLeitura,"%d\n", &nLinhas);
    fprintf("Numero de linhas= %d", nLinhas);
    
    fscanf(arquivoLeitura,"%d\n", &nColunas);
    fprintf("Numero de linhas= %d" ,nColunas);
    
    for(i = 0; i < nLinhas; i++){
        fscanf(arquivoLeitura,"%c %c %c\n", &ch1, &ch2, &ch3);
        printf("%c %c %c\n", ch1, ch2, ch3);
    }
    fclose(arquivoLeitura);

    return 0;
}
