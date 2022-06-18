#include<stdio.h>

int main()
{
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade <= 5)
	{
		printf("\nBebe");
	}
	else if(idade > 5 && idade <= 10)
	{
		printf("\nCrianca");	
	}
	else if(idade > 10 && idade <= 14)
	{
		printf("\n\nAdolescente");
	}
	else if (idade > 14 && idade <= 25)
	{
		printf("\n\nJovem");
	}
	else if(idade > 25 && idade <= 50)
	{
		printf("\n\nAdulto");
	}
	else {
		printf("\nIdoso");
	}

	return 0;
}
