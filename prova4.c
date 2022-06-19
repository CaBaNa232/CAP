#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 512
#define LIN 2210
#define COL 6

void processa_arquivo(FILE* dados, char sorteios[LIN][COL]) {
	int linha = 0, i;

	while (!feof(dados) && linha < LIN)
	{
		fread(&sorteios[linha], sizeof(char), COL, dados);
		for(i = 0; i < COL; i++) 
		{
			printf("%2d ", (int) sorteios[linha][i]);
		}
		printf("\n");
		linha++;
	}
}

void escreve_arquivo(FILE* dados, char sorteios[LIN][COL], int linhas ) {
	int i;
	for (i = 0; i < linhas; i++) {
		fwrite(sorteios[i], sizeof(char), 6, dados);
	}
}

//Função que verifica quantas vezes o número foi sorteado
int apareceu(char sorteios[LIN][COL],char numero){

	//Declarações locais
	int i, j, cont = 0;
	

	for(i = 0; i < 2210; i++)
	{
		for(j = 0; j < 6; j++)
		{
			if (sorteios[i][j] == numero){
				cont = cont + 1;
			}
		}
	}
	return cont;
}

//Função que verefica quais numeros não foram sorteados
char nao_sorteados(char sorteios[LIN][COL]){

	//Declarações locais
	int i, j;
	int n;
	int v[60];
	
	for(i = 0;i < 2210; i++)
	{
		for(j = 0; j < 6; j++)
		{
			n = sorteios[i][j];
			v[n] = 1;	
		}
	}

	for(i = 0; i < 60; i++)
	{
		if(v[i] == 0)
		{
			return (char)(i+1);
		}
	}

	return NULL;

	}	
		//Função que calcula a probabilidade de ser ganhar um sorteio	
		void probabilidade(void){
		
		//Declarações locais	
		long double prob, evento,espaco_amostral;
		
		evento =1.0; //Evento = uma combinação de 6 numeros
		espaco_amostral = 50063860; //Combinações possiveis de 6 numeros tomados 6 a 6
		prob = evento/espaco_amostral;
		printf("Probabilidade de ganhar um sorteio: %.8Lf",prob);
	
	}
	

int main() {
	//Declarações locais
	char op;
	int ap;
	char num_naosorteado;
	char num_pesquisa;
	
	FILE* dados = fopen("sorteios-byte.bin", "rb");
	char sorteios[LIN][COL];

	if (dados != NULL)
	{
		processa_arquivo(dados, sorteios);
		fclose (dados);
	}
	else 
	{
		printf("Erro ao abrir o arquivo para leitura.");
	}
	
	//Exibindo o menu de opções
	printf("++++++++++++++++ M E N U ++++++++++++++++\n");
	printf("\n1 - Quantidade de vezes que um numero foi sorteado");
	printf("\n2 - Quais numeros que nunca foram sorteados");
	printf("\n3 - Quais os numeros mais sorteados");
	printf("\n4 - Melhores numeros para serem jogados");
	printf("\n5 - Encontrar um sorteio");
	printf("\n6 - Probabilidade de se ganhar um sorteio");
	printf("\n7 - Sair\n");
	printf("\n+++++++++++++++++++++++++++++++++++++++\n");
	
	//Usuário fornece a opção deseja
	printf("\nSelecione uma opcao: ");
	scanf("%c", &op);
	
		//Rpetição do menu de opções
		while(op != 7)
		{

			switch(op)
			{ 
		
				case '1':
					printf("\nDigite o numero que deseja pesquisar [1,60]: ");
					scanf("\n%c", &num_pesquisa);
		
			   		ap = apareceu(sorteios, num_pesquisa);
					printf("\nO numero foi sorteado %d vezes", ap);
								
					break;
				
				case '2':
					num_naosorteado = nao_sorteados(sorteios);
					if(num_naosorteado == 0)
					{
						printf("Nao houver numero que nao foi sorteado");
					}
					break;
				
				case '3':
					printf("\n3 - Quais os numeros mais sorteados");
				break;
				
				case '4':
					printf("\n4 - Melhores numeros para serem jogados");
					break;
				
				case '5':
					printf("\n5 - Encontrar um sorteio");
					break;
			
				case '6':
					probabilidade();
					break;
			
				case '7':
					exit(0);
					break;
		}

		printf("\n\nSelecione uma opcao: ");
		fflush(stdin); //Limpeza do buffer
		scanf("%c", &op);
}

	return 0;
}