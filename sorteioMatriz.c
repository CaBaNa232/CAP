/*Esse código cria uma matriz de 4 por 6 com vários valores
depois um vetor auxiliar recebe 6 números e compara se esse
 6 número foram 'sorteados' na matriz
*/
#include <stdio.h>

int main()
{
    int pesquisa[6];
    int tabela[4][6], i, j;
 
    int achou = 0;
    int linha = 0;

   for(i = 0; i < 4; i++)
   {
       printf("Linha %d\n", i + 1);
       for(j = 0; j < 6; j++)
       {
           printf("Coluna %d: ", j + 1);
           scanf("%d",&tabela[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   
    for(i = 0; i < 6; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &pesquisa[i]);
    }
     for(i = 0;i < 4; i++)
     {
       for(j=0;j<6;j++)
       {
           if(pesquisa[j] == tabela[i][j] && pesquisa[j] == tabela[i][1] && pesquisa[j] == tabela[i][j] && pesquisa[j] == tabela[i][j]
           && pesquisa[j] == tabela[i][j] && pesquisa[j] == tabela[i][j] && pesquisa[j] == tabela[i][j]){
               achou = 1;
               linha = i;
               printf("\nSorteio encontrado %d",achou);
               for(i = 0; i < 6; i++)
               {
                   printf("%d ", tabela[linha][i]);
               }
           }
          
       }
       printf("\n");
   }
   
    return 0;
}
   