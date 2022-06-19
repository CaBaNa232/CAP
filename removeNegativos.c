//Esse códgio inicializa e se o valor for negativo, o elemento é alterado por 0 e imprime um vetor
#include<stdio.h>

int main()
{
	
	int vet[10], i;
	
	for (i = 0; i < 10; i++) {
		printf("Digite o %d elemento do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < 10; i++) {
		if(vet[i] < 0) {
			vet[i] = 0;
		}
	}
	
	printf("\n");
	
	for(i = 0; i <= 9; i++) {
		printf("%d ", vet[i]);	
	}
	
	return 0;
}
