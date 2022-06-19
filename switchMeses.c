//Esse cógio utiliza um swtich para selecionar os meses doa ni
#include <stdio.h>

int main()
{
    int op;
    printf("Digite uma opcao: ");
    scanf("%d", &op);
    
    switch(op){
        case 1:
            printf("\nJaneiro");
            break;
            
        case 2:
            printf("\nFevereiro");
            break; 
            
        case 3:
            printf("\nMarço");
            break; 
            
        case 4:
            printf("\nAbril");
            break;
        
        case 5:
            printf("\nMaio");
            break; 
            
        case 6:
            printf("\nJunho");
            break; 
        
        case 7:
            printf("\nJulho");
            break; 
            
        case 8:
            printf("\nAgosto");
            break; 
            
        case 9:
            printf("\nSetembro");
            break; 
            
        case 10:
            printf("\nOutubro");
            break;
            
        case 11:
            printf("\nNovembro");
            break;
            
        case 12:
            printf("\nDezembro");
            break;
            
        default:
            printf("znOpção inválida, digite novamente");
        
    }

    return 0;

}