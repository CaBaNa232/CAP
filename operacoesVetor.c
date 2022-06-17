/*
Esse programa recebe o tamanho do vetor e posteriomente calcul a média do vetor, o maior e o menor número 
do vetor, além da quantidade de notas que ficaram acima ou abaixo da média
*/
#include<stdio.h>

int main ()
{
    //Declarações locais e inicialização de variáveis
	int i, qtd, qtd_acima = 0, qtd_abaixo = 0;
	float media = 0, soma = 0, maior = 0, menor = 0;
	

	//Recebendo o tamanhor do vetor
	printf("Digite a quantidade de numeros:");
	scanf("%d",&qtd);
	
    //Criando o vetor com o tamanho de qtd
	float numeros[qtd];
	maior = 0;
	menor = __INT_MAX__;
	
    //Inicializando o vetor
	for (i = 0; i < qtd; i++ )
		{
			scanf("%f",& numeros[i]);
			soma = soma + numeros[i];	
		}
	
    //Calculando a média dos númmeros
	media = soma / qtd;
	
    //Calculando a quantidade de valores acima ou abaixo da média
	for (i = 0; i < qtd; i++ )
		{
			if (numeros[i] > media)
			{
				qtd_acima++;
			}
			if (numeros[i] < media)
			 {
				qtd_abaixo++;	
			}
            //Calculando o maior elemento do vetor
			if(numeros[i] >= maior)
			{
			    maior = numeros[i];
			}
            //Calculando o menor elemento do vetor
			if(numeros[i] <= menor)
			{
			   menor = numeros[i];
			}
		}

    //Impressão dos resultados
	printf("\n\nMedia = %2.0f", media);
	printf("\nA quantidade de numeros acima da media = %d", qtd_acima);
	printf("\nA quantidade de numeros abaixo de media = %d", qtd_abaixo);
	printf("\nMaior numero: %2.0f", maior);
	printf("\nMenor numero: %2.0f", menor);
	
	return 0;
}
