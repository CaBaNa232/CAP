/*Esse códgio preenche uma matriz, remove elementos negativos, exibe
sua diagonal principal e imprime a matriz posteriorment*/
#include <stdio.h>

int main()
{
    //Declarações locais
    int i, j;
    int mt[4][4];
    
    //Recebendo os valores da matriz mt
    for (i = 0; i < 4; i++){
        
        printf ("Linha %d\n", i + 1);
    
        for (j = 0; j < 4; j++) {
            printf ("Coluna %d: ", j + 1);
            scanf ("%d", &mt[i][j]); 
        }
        printf ("\n");
    } 
    
    //Verificando se na matriz mt há elementos negativos, e os removendo posteriormente
    for (i = 0; i < 4; i++){

        for (j = 0; j < 4; j++) {
            if(mt[i][j] < 0) {
                mt[i][j] = 1;
            }
           
        }
    } 

    //Exibindo a matriz mt já com os valores
    printf ("Mostrando matriz");
    
    for (i = 0; i < 4; i++) {
        printf ("\n");

        for (j = 0; j < 4; j++) {
            printf (" %d", mt[i][j]);
        }
    } 
    
    printf ("\n");
    printf ("\n");
    
    //Exibindo a diagonal principal da matriz mt
    printf("Diagonal principal\n");
    
    for(i = 0; i < 4; i++) {
        printf ("%d ", mt[i][i]);
    }    
         
           
            
    

    

        
    
    
    
    return 0;
}




