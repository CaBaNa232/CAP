#include<stdio.h>

int main(){
	
	int valor, soma = 0;

	do 
	{
		printf("Digite um valor: ");
		scanf("%d", &valor);
		soma = soma + valor;
		
	} while(valor != 0);
		
		printf("\n\n A soma: %d", soma);

	return 0;
}
