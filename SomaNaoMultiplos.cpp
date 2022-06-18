#include<stdio.h>

int main(){
	
	int soma,i;
	soma=0;
	

	
	for(i=1;i<=1000000;i++){
		if( i%2!=0 && i%5!=0 && i%3!=0){
			soma=soma+i;
		}
		
	
	}
	
		printf("\nSoma= %d", soma);
	
	
	return 0;
}
