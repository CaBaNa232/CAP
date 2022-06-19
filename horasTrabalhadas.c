#include <stdio.h>

int main()
{
    int num,horas;
    float sal, preco_horas;
    
    printf("Digite o numero do funcionario: ");
    scanf("%d", &num);
    
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);
    
    printf("Digite o prevo da hora: ");
    scanf("%f", &preco_horas);
    
    sal = horas * preco_horas;
    
    printf("\nNUMBER = %d", num);
    printf("\nSALARIO = U$ %.2f", sal);
    

    return 0;
}
