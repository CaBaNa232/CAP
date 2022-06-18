// Bibliotecas
#include<stdio.h>
#include<string.h>

// Função principal
int main(){
	
	// Variáveis locais
	int i, tam;
	char nome[30];
	
	printf("Digite uma palavra qualquer: ");
	
	// Recebendo a string digitado pelo o usuário
	gets(nome);
	
	// Recebendo o tamanho da string
	tam = strlen(nome);
	
	printf("\n");
	
	//Imprimindo a palavra digitada e o tamnho da string
	printf("A palavra digitada foi: %s\n", nome);
	printf("O tamanho da string eh: %d\n", tam);
	printf("O inverso da palavra eh: ");
	
	// Laço de repetição necessário para imprimir o inverso da string
	for(i= tam - 1; i >= 0; i--){
		printf("%c ", nome[i]);
	}
	
	// Inverso da string sendo imprimindo
	printf("\n\nOBS: Os espacos sao contabilizados ao tamanho da String ");
	
	return 0;

}
