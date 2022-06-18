#include<stdio.h>

int main(){
	
	
	float nota,media,soma;
	soma=0;
	int i;
	for(i=1; i<=4; i++){
		printf("\nDigite a nota: ");
		scanf("%f",& nota);
		
		soma=soma +nota;
		
	}
	media= soma/4;
	printf("\nA media das notas foi: %2.2f", media);
}
