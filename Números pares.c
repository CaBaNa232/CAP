/* Objetivo: Calcular a soma dos numeros inteiros entre 1 e 1000000 que n�o s�o multiplos de 2,3,5
Autor: Jo�o Pedro Pereira
Data da cria��o: 25/04/2019
Data da �ltima modifica��o: 25/04/2019
*/

//Inclus�o das bibliotecas
#include<stdio.h>
#include<stdlib.h>

int main (){
	
	//Declara��es locais
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
