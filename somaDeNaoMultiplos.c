/* Objetivo: Calcular a soma dos numeros inteiros entre 1 e 1000000 que não são multiplos de 2,3,5
Autor: João Pedro Pereira
Data da criação: 25/04/2019
Data da última modificação: 25/04/2019
*/

//Inclusão das bibliotecas
#include<stdio.h>
#include<stdlib.h>

int main (){
	
	//Declarações locais
	int i, soma;
	soma = 0;
	
	//Inicio do calculo
	for(i = 1; i <= 1000000; i++)
	{
		if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
		{
			soma = soma + i;
		}
	}
	//Escrita do resultado
	printf("A soma dos numeros = %d", soma);
	
	return 0;
}
