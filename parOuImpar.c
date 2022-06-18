#include<conio.h>
#include<stdio.h>

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

    int op1, op2, valor_1, valor_2, soma, resultado;
    
    char jogador1[20], jogador2[20];

    instrucoes();
    
    printf("Digite seu nome: ");
    gets(jogador1);

    printf("Digite sua opcao (Par ou impar): ");
    scanf("%d", &op1);
    fflush(stdin);
    
    printf("\n");
    
    printf("Digite seu nome: ");
    gets(jogador2);
    printf("Digite sua opcao (Par ou impar): ");
    scanf("%d", &op2);
    fflush(stdin);

  
    while(op1 == op2){
        printf("\nAs opcoes devem ser distintas");
        printf("\n");
        printf("\nDigite novamente: \n\n");
        printf("Digite sua opcao (Par ou impar): ");
        scanf("%d", &op2);
        break;
    }
    
    srand(time(NULL));
    valor_1 = rand() % 100;
    valor_2 = rand() % 100;
    soma = valor_1 + valor_2;
    printf("\nResultado: %d", soma);
     
    if(op1 == 1 && soma % 2 == 0){
         printf("\n%s venceu (Par)", jogador1);
     }
     
     else if(op1 == 2 && soma % 2 != 0){
         printf("\n%s venceu (Impar)", jogador1);
     }
    
    if(op2 == 1 && soma % 2 == 0){
         printf("\n%s venceu (Par)", jogador2);
     }
     
     else if(op2 == 2 && soma % 2 != 0){
         printf("\n%s venceu (Impar)", jogador2);
     }

return 0;
}