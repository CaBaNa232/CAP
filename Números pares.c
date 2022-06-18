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
	int i,valor;
	
	printf("Digite o valor:");
	scanf("%d",&valor);	
	
	//Inicio do calculo
	for(i=0;i<=valor;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
	}
	

	
	return 0;
}
