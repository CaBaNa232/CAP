//Esse código cria uma matriz de i linhas por j colunas (Matriz de tamanho variável)
#include <stdio.h>

int main()
{
    int i, j, total_lines, total_cols;
    
    //Recebendo a quantidade de linhas
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &total_lines);
    //Recebendo a quantidade de colunas
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &total_cols);
    
    //Criando de matriz de i linhas por j colunas
    int m[total_lines][total_cols];

    //Recebendo os valores da matriz
    for(i = 0; i < total_lines; i++){
        printf("\nLinha %d", i + 1);
        
        for(j = 0 ; j < total_cols; j++){
            printf("\nColuna %d: ",j+1);
            scanf("%d", & m[i][j]);
        }
            
    }
    printf("\n");
    
        //Impressão da matriz
        for(i = 0; i < total_lines; i++){
       
            for(j = 0; j < total_cols; j++){
                printf(" %d", m[i][j]);
            }
           
           printf("\n");
    }
    
    return 0;
}

