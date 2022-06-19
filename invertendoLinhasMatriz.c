//Invertendo a primeira com a última linha da matriz
#include <stdio.h>

int main()
{
    //Declarçoes locais
    int i, j, m[4][4];
   
   //Inicializando a matriz com valores fornecidos pelo o usuario 
   for(i = 0; i < 4; i++) {
       printf("Linha %d\n", i + 1);

       for(j = 0; j < 4; j++) {
            printf("Coluna %d: ", j + 1);
            scanf("%d", &m[i][j]);
       }
       
      printf("\n");
   }
    printf("\n");
    printf("\nA matriz digitada foi:\n");
    printf("\n");
     
    //Exibindo o valores da matriz
    for(i = 0; i < 4; i++){
        for(j = 0 ; j < 4 ; j++) {
            printf("%d ", m[i][j]);
        }
       printf("\n");     
    }

    printf("\n");
    printf("\nInvertendo a 1 linha com a ultima\n");
    printf("\n");
    
   // int x = Quantidade_linhas - 1 (para saber quantas linhas falta,); 
    
    //Inventendo a 1º linha com a última
    for(i = 0; i < 4; i++) {
        printf("\%d ", m[3][i]);
    }
    printf("\n");
    
   
    //Exibindo as linha e colunas restantes
    for(i = 1; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    //Inventendo a ultima linha com a 1º
    for(i = 0; i < 4; i++) {
        printf("\n%d ", m[0][i]);
    }
    
    
  
    return 0;
}
