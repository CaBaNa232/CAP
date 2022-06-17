//Esse código trás algumas manipulações utilizando ponteiros
#include<stdio.h>

// Função principal
int main(){
	
	// Variáveis locais
	int cod_func1 = 10;
	int idade_func1 = 35;
	int cod_func2 = 11;
	int idade_func2;
	
	// Criação do ponteiro
	int *pont_idadeFun;
	
	// Atribuição de endereço ao ponteiro
	pont_idadeFun = &idade_func1;
	
	// Atribuição de valor à variável idade_func2
	idade_func2 = *pont_idadeFun;
	
	// Imprimindo os dado do funcionário 1
	printf("Os dados do funcionario 1 sao: \n");
	printf("Codigo: %d\n", cod_func1);
	printf("Idade: %d\n", idade_func1);
	printf("O endereco de memoria de idade_func1: %d\n\n", &idade_func1);
	
	// Imprimindo os dado do funcionário 2
	printf("Os dados do funcionario 2 sao: \n");
	printf("Codigo: %d\n", cod_func2);
	printf("Idade: %d\n", idade_func2);
	printf("O endereco de memoria de idade_func2: %d\n\n", &idade_func2);
	
	printf("\n\n");
	
	// Alterando o valor do endereço do ponteiro (valor do endereço de -> idadefunc1) de 35 para 20
	*pont_idadeFun = 20;
	
	// Imprimindo os dado do funcionário 1
	printf("Os dados do funcionario 1 sao: \n");
	printf("Codigo: %d\n", cod_func1);
	printf("Idade: %d\n", idade_func1);
	printf("O endereco de memoria de idadefunc1: %d\n\n", &idade_func1);
	
	// Imprimindo os dado do funcionário 2
	printf("Os dados do funcionario 2 sao: \n");
	printf("Codigo: %d\n", cod_func2);
	printf("Idade: %d\n", idade_func2);
	printf("O endereco de memoria de idade_func2: %d\n\n", &idade_func2);
	
	
	
	return 0;

}

