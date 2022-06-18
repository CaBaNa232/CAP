#include<stdio.h>

int main(){
	
	int codfunc, idadefunc, totalfunc, somaidade = 0, idademedia;
	float salfunc, somasal = 0, salmedio;
	char tecla;
	
	printf("\nDeseja inserir os dados de um novo funcionario?");
	printf("\n\[Tecle S ou s para continuar]");
	printf("\n\n");
	
	scanf("%c", &tecla);
	totalfunc = 0;
	
	while(tecla == 'S' || tecla == 's')
	{
		printf("\n\nDigite os dados do funcionario.");
		printf("\n\nDigite o codigo do funcionario: ");
		scanf("%d", &codfunc);
		
		printf("\n\nDigite a idade do funcionario: ");
		scanf("%d", &idadefunc);
		
		printf("\n\nDigite o salario do funcionario: ");
		scanf("%f", &salfunc);
		
		totalfunc = totalfunc + 1;
		somaidade = somaidade + idadefunc;
		somasal = somasal + salfunc;
		
		printf("\n\nDeseja inserir os dados de um novo funcionario?");
		printf("\n\[Tecle S ou s para continuar]");
		printf("\n\n");
		scanf("%c", &tecla);
	}

		if(totalfunc>0)
		{
			idademedia = somaidade / totalfunc;
			salmedio = somasal/totalfunc;		
		}
		else 
		{
			idademedia = 0;
			salmedio = 0;
		}
		
		printf("\n\nTotal de funcionarios: %d", totalfunc);
		printf("\n\nIdade media: %d", idademedia);
		printf("\n\nSalario medio: %f", salmedio);
			
	return 0;
}
