#include<stdio.h>

int main(){
	
	char op;
	
	printf("Digite uma opcao [I, R, M, P, O]: ");
	scanf("%c", &op);
	
	switch (op)
	{
		case 'I':
			printf("\nOpcao escolhida - %c", op);
			break;
			
		case 'R':
			printf("\nOpcao escolhida - %c", op);
			break;
		
		case 'M': 
			printf("\nOpcao escolhida - %c", op);
			break;
			
		case 'P':
			printf("\nOpcao escolhida - %c", op);
			break;
			
		case 'O':
			printf("\nQuinto - %c", op);
			break;
			

		default:
			printf("\nOpcao invalida - %c", op);
	}

	return 0;
}
