#include<stdio.h>
#include<stdlib.h>

 float maiornota (float *n1, float *n2)
 {
     
    if(*n1 >*n2) {
        return *n1;
    }
    else
    {
        return *n2;
    }
    
}

float MediaNotas (float *n1, float *n2)
{
	float media;
	media = (*n1 + *n2) / 2;
	
    return media;
}


int main ()
{
	
	float n1, n2, media, maior;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f", &n2);
	
	media = MediaNotas(&n1, &n2);
    maior = maiornota(&n1, &n2);
	
	printf("\nA media foi: %2.2f", media);
	printf("\nA maior nota foi: %2.2f", maior);

	return 0;
	
}

