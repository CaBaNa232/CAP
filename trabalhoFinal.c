// Bibliotecas
#include<stdio.h>
#include<stdlib.h>

/*
Nome: instrucoes
Paramêtros formais: Não há
Valor de Retorno: Não há (procedimento
*/

void instrucoes()
{
    printf("Seja Bem-Vindo ao jogo do par ou impar\n\n");
    printf("\nNumero Par: Quando divididos por 2, deixam resto 0.");
    printf("\nNumero Impar: Quando divididos por 2, deixam resto 1.\n");
    printf("\nIMPORTANTE: As opcoes devem ser distintas");
    printf("\n\nOpcoes: \n");
    printf("Par = 1");
    printf("\nImpar = 2\n\n");
    
}

int main(){
    
    //Declarações locais
    int op1, op2, resultado;
    char jogador1[20], jogador2[20];
    
    //Chamada de função
    instrucoes();
    
    //Entrada de dados
    printf("Digite seu nome: ");
    scanf("%s", &jogador1);

    //Entrada de dados
    printf("Digite sua opco (Par ou impar): ");
    scanf("%d", &op1);
    
    printf("\n");
    
    //Entrada de dados
    printf("Digite seu nome: ");
    scanf("%s", &jogador2);

    //Entrada de dados
    printf("Digite sua opcao (Par ou impar): ");
    scanf("%d", &op2);
    
    //Teste de verifição das opções digitadas
    while(op1 == op2 || op1 != 1 && op1 != 2 || op2 != 1 && op2 != 2)
    {
        printf("\nAs opções devem ser distintas");
        printf("\nDigite novamente: \n\n");
        printf("Jogador 1,digite sua opcao (Par ou impar): ");
        scanf("%d",&op1);
        printf("Jogador 2,digite sua opcao (Par ou impar): ");
        scanf("%d",&op2);
       
    }
    //Geração de um número aleatório
    srand(time(NULL));
    
    //Atribuição do número gerado para a variável
    resultado = rand()%100;
    
    //Exibindo o resultado
    printf("\nResultado: %d", resultado);
    
    //Testes para verificar qual jogador venceu 
        if(op1 == 1 && resultado % 2 == 0)
        {
            printf("\n%s venceu (Par)", jogador1);
        } 
        else if(op1 == 2 && resultado % 2 != 0)
        {
            printf("\n%s venceu (Impar)", jogador1);
        }
        if(op2 == 1 && resultado % 2 == 0)
        {
         printf("\n%s venceu (Par)", jogador2);
        }
        else if(op2 == 2 && resultado % 2 != 0)
        {
         printf("\n%s venceu (Impar)", jogador2);
        }

    return 0;
}


