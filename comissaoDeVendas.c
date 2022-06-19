 //Esse código calculo o salário de um funcionário mais a comissão de vendas
 #include <stdio.h>

int main()
{
   char nome[20];
   float sal_fix, vendas, new_sal;
  
    printf("Digite o nome do funcionario: ");
    gets(nome);
    
    printf("Digite o salario de %s: R$: ",nome);
    scanf("%f", &sal_fix);
    
    printf("Digite o valor das vendas: R$: ");
    scanf("%f", &vendas);
    
    new_sal = sal_fix + (vendas * 0.15);
    printf("\nSalario + bonus: RS: %.2f", new_sal);
    
   

    return 0;
}
