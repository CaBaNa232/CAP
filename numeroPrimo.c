#include<stdio.h>

/* Valores de entrada: 1,2,7,8,10,13
	
	1 = primo;
	0 = não primo;
	
	Valores de saída: 1 =0 ; 2=1 ; 7=1 ; 8=0 ; 10=0 ; 13=0;
*/

int testa_primo (int n){
	
	/* Função que verifica se um número inteiro é primo;
	Valor de entrada: Número inteiro;
	Valor de retorno: 1 (número primo) ou 0 (não primo);
	*/
	
	int i, cont = 0, primo = 0;
	
    for(i = 1; i <= n; i ++)
	{
        if (n % i == 0){
            cont += 1;
        }
    }

    if (cont == 2)
	{
    	primo = 1;
    	printf("\n %d -- Numero primo", primo);
    }
    else 
	{
		printf("\n %d -- Numero nao primo", primo);
    	primo = 0;
	}
    	
    	
    return primo;
}


int main(){
    
    int num;

    printf("Digite um numero inteiro: ");
    
    scanf("%d", &num);
    testa_primo (num);
    
 
 return 0;   
}