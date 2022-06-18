#include<stdio.h>

int main(){
	
	int i, numero, numvezes;
	
	printf("\nDigite um numero: ");
	scanf("%d", &numero);

	printf("\nDeseja saber ate qual valor a tabuada do numero? ");
	scanf("%d", &numvezes);
	
	for(i = 0; i <= numvezes; i++) {
		
		printf("\n%d X %d = %d", numero, i, numero * i);
	}
	
	return 0;
}
