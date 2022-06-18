#include<stdio.h>

int main(){
	
	int numero, i, multiplos;
	
	printf("\nDigite um numero: ");
	scanf("%d",&numero);

	multiplos = 0;
	i = 1;
	
	while(i <= numero)
	{
		if(numero % i == 0)
		{
			multiplos = multiplos + 1;
		}
		i++;
	}
	
	
	if(multiplos == 2)	
	{
		printf("\nO numero e primo");
	}	
	else
	{
		printf("\n\n O numero nao e primo");
	}
	
	
	return 0;
}

