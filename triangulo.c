#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	float lado1, lado2, lado3;
	
	
	printf("Digite a medida dos lado: ");
	scanf("%f", &lado1);
	
	printf("Digite a medida dos lado: ");
	scanf("%f", &lado2);
	
	printf("Digite a medida dos lado: ");
	scanf("%f", &lado3);
	
	if (lado1 < lado2 + lado3 && abs(lado3 -lado2) < lado1  || lado2 < lado1 + lado3 && abs(lado1 - lado3) < lado2 || lado3 < lado1 + lado2 && abs(lado1 - lado2) < lado3)
	{
		printf("\n\nEssas medida formam um triangulo");
	
	}
	
			if (lado1 == lado2 &&lado2 == lado3 && lado3 == lado1)
			{
			printf("\n\nTriangulo equilatero");
			}
			else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
			{
				printf("\n\nTriangulo isoceles");
			}
			else if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1)
			{
				printf("\n\nTrinagulo escaleno");
			}
		
	else {
		printf("\nEssas medidas nao formar um triangulo");
	}
	return 0;
}
