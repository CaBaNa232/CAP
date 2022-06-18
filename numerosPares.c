/* Objetivo: Calcular a soma dos numeros inteiros entre 1 e 1000000 que n�o s�o multiplos de 2,3,5
Autor: João Pedro Pereira
Data da criaçãoo: 25/04/2019
Data da última modificação: 25/04/2019
*/

//Inclusão das bibliotecas
#include<stdio.h>
#include<stdlib.h>

int main (){
	
	//Declarações locais
	int valor;
	
	printf("Digite o valor: ");
	scanf("%d", &valor);	

	int i = 0;
	
	//Inicio do calculo
	while(i <= valor)
	{
		if(i % 2 == 0)
		{
			printf("\n%d", i);
		}
		i++;
	}

	return 0;
}
