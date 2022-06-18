/* 
Objetivo: Verificar se uma equação do 2 grau é válida e verificar se existem raizes reais distintas, raizes reais iguais ou 
se não há raizes reais
Autor: João Pedro Pereira
Data da criação: 25/04/2019
Data da última modificaçãoo: 25/04/2019
*/

//Inclusão das bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	//Declarações locais
	float a, b, c, delta, raiz1, raiz2;
	
	//Mensagem solicitando que o usuário digite os coeficientes
	printf("Digite o coeficiente A:");
	scanf("%f", &a);
	
	printf("\nDigite o coeficiente B:");
	scanf("%f", &b);
	
	printf("\nDigite o coeficiente C:");
	scanf("%f", &c);
	
	//Incio da verificação da válidade da equacão
	
	if (a == 0)
	{
		printf("\nEssa nao e uma equacao do 2 grau valida");
	}
	else {
		
		printf("\nEquacao valida");
		
		delta = pow(b, 2) - 4 * a * c;
		printf("\nO valor de delta= %2.0f",delta);
		
			if (delta < 0)
			{	
				printf("\nNao existem raizes reais");
			}
			
			else if(delta>0)
			{
				printf("\n\nExistem duas raizes reais distintas");
				raiz1 = ((-b) + sqrt(delta)) / (2 * a);	
				printf("\n\no valor da raiz 1 e: %.2f", raiz1);
			
				raiz2 = ((-b) - sqrt(delta)) / (2 * a);
				printf("\n\nno valor da raiz 2 e: %.2f", raiz2);
			}
			else 
			{
				printf("\nExistem duas raizes reais e iguais");
			}
	}

		return 0;
}
