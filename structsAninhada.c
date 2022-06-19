#include <stdio.h>
#include <string.h>

    typedef struct {
        int dia;
        int mes;
        int ano;
    } data;

    typedef struct {
        char nome[100];
        char cpf[12];
        float salario;
        data data_func;
    } func;
    
    
    
int main()
{
    func pessoa;
    
    printf("Digite seu nome: ");
    gets(pessoa.nome);
    
    printf("Digite a CPF: ");
    gets(pessoa.cpf);
    
    printf("Digite o salario R$: ");
    scanf("%f", &pessoa.salario);
    
    printf("Digite sua data de nascimento: ");
    scanf("%d %d %d", &pessoa.data_func.dia, &pessoa.data_func.mes, &pessoa.data_func.ano);
    
    
    printf("\nOs dados sao: \n");
    
    printf("Nome: %s\n", pessoa.nome);
    printf("CPF: %s\n", pessoa.cpf);
    printf("Salario R$:  %.2f\n", pessoa.salario);
    printf("Data de nascimento: %d /%d /%d", pessoa.data_func.dia, pessoa.data_func.mes, pessoa.data_func.ano);
    
    return 0;
}

