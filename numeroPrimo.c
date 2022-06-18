#include<stdio.h>

int main(){
	
	int numero, i, contador = 0;
	
	printf("\nDigite um numero: ");
	scanf("%d", &numero);
	
	for(i = 1; i <= numero; i++){
		
		if(numero % i == 0)
		{
			contador = contador + 1;
		}
	}

	if(numero == 1)
	{
		printf("\n O numero 1 nao e considerado primo");
	}
	if(contador == 2)
	{
		printf("\nO numero e primo");
	}
	else
	{
		printf("\nO numero nao e primo");
	}

	return 0;
}
