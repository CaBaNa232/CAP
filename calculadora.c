//Esse código simula uma calculadora utilizando switch
#include <stdio.h>

int main()
{
    //Declarações locais
    int op;
    float n1, n2;
    
    //Entrada da opção desejada
    printf("Digite uma opcao entre 1 e 4: ");
    scanf("%d", &op);
    
    //Opções
    switch (op){
        
        case 1: //Adição de dois numeros
            
            printf("\nAdição de dois numeros\n");
            printf("\nDigite o 1 numero: ");
            scanf("%f", &n1);
            printf("Digite o 2 numero: ");
            scanf("%f", &n2);
            printf("\nSoma %.2f", n1 + n2);
            
            break;
        
        case 2: //Subtração de dois numeros
       
            printf("\nSubtração de dois numeros\n");
            printf("\nDigite o 1 numero: ");
            scanf("%f", &n1);
            printf("Digite o 2 numero: ");
            scanf("%f", &n2);
            printf("\nSubtracao %.2f", n1 - n2);
        
        break;
        
        case 3: //Divisão de dois numeros
        
            printf("\nDivisao de dois numeros\n");
            printf("\nDigite o 1 numero: ");
            scanf("%f", &n1);
            printf("Digite o 2 numero: ");
            scanf("%f", &n2);
            if(n2 == 0) {
                printf("\nNao e possivel dividir um numero por zero");
            }else{
                printf("\nDivisao: %.2f", n1 / n2);
            }
            
            break;
            
        case 4: //Multiplicação de dois numeros
        
            printf("\nMultiplicação de dois numeros\n");
            printf("\nDigite o 1 número: ");
            scanf("%f", &n1);
            printf("Digite o 2 número: ");
            scanf("%f", &n2);
            printf("\nMultiiplicacao: %.2f", n1 * n2);
            break;
            
        default: //Opção padrão
            printf("\nOpção invalida");
        
    }
    
    return 0;
}
